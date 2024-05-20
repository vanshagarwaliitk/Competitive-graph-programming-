### find single element in sorted array



int singleNonDuplicate(vector<int>& nums) {
        int start = 0;
        int end = nums.size() - 1; 
        if (end == 0) return nums[0];
        while (start <= end) { 
            int mid = start + (end - start) / 2;
            if (mid > 0 && nums[mid] == nums[mid - 1]) {
                if (mid % 2 == 0) {
                    end = mid - 2;
                } else {
                    start = mid + 1; 
                }
            } else if (mid < nums.size() - 1 && nums[mid] == nums[mid + 1]) {
                if (mid % 2 == 0) {
                    start = mid + 2;
                } else {
                    end = mid - 1; 
                }
            } else {
                return nums[mid]; 
            }
        }
        return -1;
    }
