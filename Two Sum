//Time Complexity: O(n*logn) -> Space Complexity: O(n)

vector<int> twoSum(vector<int>& nums, int target) {
    //use for loop to subtract target from each element in nums 
    //search for resulting number in map
        //if found in map -> return the pair
        //else -> add to the map

    map<int, int> m;
    for(int i = 0; i < nums.size(); i++){
        int diff = target - nums[i];
        if(m.find(diff) != m.end()){
            return {i, m[diff]};
        }
        else{
            m.insert({nums[i], i});
        }
    }

 return {};
 }
