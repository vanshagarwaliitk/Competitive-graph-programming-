### find the nth root of m

int NthRoot(int n, int m)
	{
	    if (m == 0) return 0;
	    int low = 1;
	    int high = m;
	    int  mid ;
	    long long a =1;
	    int ans;
        bool check = 1;
	     while(low <= high){
	         mid = low +(high-low)/2;
             check =1 ;
	         for ( int i = 1 ; i <= n ; i++){
	                a = a*mid;
                    if(a>m){
                        check = 0;
                        break;
                    }
	         }
	         if(check == 0){
	             high = mid -1;
	         }
	         else if(a==m){
	             return mid;
	         }
	         else{
	             low = mid +1;
	         }
	         a =1;
	     }
	    return -1;
	}
