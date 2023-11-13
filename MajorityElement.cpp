// Time Complexity: O(n) -> Space Complexity: O(n)

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size()/2;
        int number = 0;
        map<int,int> m;
        for (int i = 0; i < nums.size(); i++){
            if(m.find(nums[i]) == m.end()){
                m.insert({nums[i],1});
            }
            else{
                m[nums[i]]++;
            }
        }

        for(auto &ch: m){
            if(ch.second > n){
               number = ch.first;
            }
        }
            return number;
    }
};
