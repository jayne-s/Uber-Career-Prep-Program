//Time Complexity: O(n)log(n) -> Space Complexity: O(n)

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        //push both vectors together
        //sort
        //go to middle of array and retrieve number
        vector<int> nums;
        double median = 0;
        for(int a: nums1){
            nums.push_back(a);
        }
        for(int b: nums2){
            nums.push_back(b);
        }
        sort(nums.begin(), nums.end());
        int size = nums.size();
        if(size%2==0){
            median = (nums[size/2] + nums[(size/2)-1]) / 2.0;
        }
        else{
            median = nums[size/2];
        }

        return median;


    }
};
