//Time Complexity: O(n) -> Space Complexity: O(1)

int diagonalDifference(vector<vector<int>> arr) {

int left = 0;
int right = 0;

for(int i = 0; i < arr.size(); i++){
    left+=arr[i][i];
    right+=arr[i][(arr.size()-1 )-i];
    cout << left << " " << right<< endl;
}

return abs(left-right);

}
