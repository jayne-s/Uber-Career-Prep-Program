//Time Complexity: O(n) -> Space Complexity: O(1)

void plusMinus(vector<int> arr) {
    double countPos = 0;
    double countNeg = 0;
    double countZero = 0;
    for(auto& i : arr){ 
        if(i == 0){
            countZero++;
        }
        else if (i > 0){
            countPos++;
        }
        else{
            countNeg++;
        }
    }
    
    cout << setprecision(6) << countPos/arr.size() << endl;
    cout << setprecision(6) << countNeg/arr.size() << endl;
    cout << setprecision(6) << countZero/arr.size() << endl;
}
