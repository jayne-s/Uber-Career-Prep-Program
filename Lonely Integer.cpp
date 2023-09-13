//Time Complexity: O(n*log(n)) -> Space Complexity: O(n)

int lonelyinteger(vector<int> a) {
map<int, int> chart;
int number = 0;
for(int i = 0; i < a.size(); i++){
    if(chart.find(a[i]) != chart.end()){
        chart[a[i]]++;
    }
    else{
        chart.insert({a[i], 1});
    }
}

for(auto &b : chart){
    if(b.second == 1){
        number = b.first;
    }
}
return number;
}
