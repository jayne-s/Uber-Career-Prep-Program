//My Solution -> Time Complexity: O(n*m), Space Complexity: O(n)

class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        //loop through and add each set 
        //push to vector
        //find max in vector
        int sum = 0;
        vector<int> temp;
        for(int i = 0; i < accounts.size(); i++){
            for(int j = 0; j < accounts[i].size(); j++){
                sum+=accounts[i][j];
            }
            temp.push_back(sum); 
            sum = 0;
        }
        int currentMax = temp[0];
        for(int k = 1; k < temp.size(); k++){
            if(currentMax <= temp[k]){
                currentMax = temp[k];
            }
        }

        return currentMax;
    }

//Optimal Solution -> Time Complexity: O(n*m), Space Complexity: O(1)

class Solution{
    public int maximumWealth(int[][] accounts){
        int maxWealthSoFar = 0;
        for(int[] customer : accounts){
            int currentCustomerWealth = 0;
            for(int bank: customer){
                currentCustomerWealth+=bank;
            }
            maxWealthSoFar = Math.max(maxWealthSoFar, currentCustomerWealth);
        }
        return maxWealthSoFar;
    }
}
    
};
