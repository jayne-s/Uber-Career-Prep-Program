//Time Complexity: O(n) -> Space Complexity: O(1)

    int missingNumber(vector<int>& nums) {
        //Method 1:
        //sort the array -> nlogn
        //for loop -> nums[i+1] == nums[i]++; 
        //if they equal -> number is missing -> return number

        //Method 2: (Implemented)
        //sum up numbers from i = 0 to i<= n -- 1 
        //sum up the numbers in the array -- 2 
        //return 1-2 

        int sum1 = 0;
        int sum2 = 0;
        for(int i = 0; i<nums.size(); i++){
            sum1+=i;
            sum2+=nums[i];
        }
        sum1+=nums.size();
        return sum1-sum2;
    }
