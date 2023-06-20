//My Solution - Time Complexity: O(n^2), Space Complexity: O(n)

class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        
        vector<int> nums1 = nums;
    
        int sum = 0;
        int j = 1;
       for (int a = 0; a < nums.size(); a++){
        for (int i = 0; i < j; i++){
         sum += nums1[i];
        }
        j++;
        nums[a] = sum;
        sum = 0;  
       }
       return nums;
    }
};

//Optimal Solution - Time Complexity: O(n), Space Complexity: O(n)

class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
       for(int i = 1; i < nums.size(); i++){
           nums[i] += nums[i-1];
       }
       return nums;
    }
};
