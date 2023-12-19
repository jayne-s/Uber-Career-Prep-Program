//Time Complexity: O(n) [where n is the maximum length] -> Space Complexity: O(n) [where n is the maximum length of output string]

class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        //figure out which word is shorter
        //alternate letters until smaller word runs out
        // append remaining letters of bigger word 
        
        int length = 0;
        string bigger = "";
        string output = "";
        if(word1.length() <= word2.length()){
            length = word1.length();
            bigger = word2;
        }
        else{
            length = word2.length();
            bigger = word1;
        }


        for(int i = 0; i < length; i++){
            output+=word1[i];
            output+=word2[i];
        }

        output+= bigger.substr(length);
        return output;
    }
};
