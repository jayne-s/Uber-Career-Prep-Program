//Time Complexity: O(n) -> Space Complexity: O(n)

int sockMerchant(int n, vector<int> ar) {
 //create dictionary -> add number of occurences for each number
 // for each value in dictionary -> calculate no./2
 // add to int variable
 map<int, int> m;
 int s = 0;
 for(int i = 0; i < n; i++){
     if(m.find(ar[i]) == m.end()){
         m.insert({ar[i], 1});
     }
     else{
         m[ar[i]]++;
     }
 }
 for(auto &a:m){
     s += a.second/2;
 }
 return s;
}
