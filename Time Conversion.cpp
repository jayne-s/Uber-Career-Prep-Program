//Time Complexity: O(1) -> Space Complexity: O(1)


string timeConversion(string s) {
string converted = "";
string AorP = s.substr(s.length()-2, 2);
string hour = s.substr(0,2);
int hours = stoi(hour);
string minute = s.substr(3,2);
string second = s.substr(6,2);

if(hours == 12 && AorP == "AM"){
  hours = 0;  
  converted = "0"+to_string(hours) + ":"+minute+":"+second;
}
else if(hours < 12 && AorP == "PM"){
   hours+=12;
   converted = to_string(hours)+":"+minute+":"+second;   
}
else {
    converted = s.substr(0,8);
}

return converted;

}
