//Time Complexity: O(n) -> Space Complexity: O(1)

 int removeDuplicates(vector<int>& nums) {
        int count = 1;
        
        for(int i = 1; i < nums.size(); i++){
         
            if(nums[i] != nums[i-1]) {
               nums[count] = nums[i];
               count++;
          
        }
       
    }
         return count;
    }
