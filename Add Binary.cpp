//Time Complexity: O(n) -> Space Complexity: O(n)

    string addBinary(string a, string b) {

        string output = "";
        int carry = 0;
        int lengthA = a.length()-1;
        int lengthB = b.length()-1;

        while(lengthA >= 0 || lengthB >= 0 || carry){
            int sum = 0;
            if(lengthA >= 0){
                sum+=a[lengthA] - '0';
            }
            if(lengthB >= 0){
                sum+=b[lengthB] - '0';
            }
            sum+=carry;
            carry = 0;
            cout << sum << endl;
            if(sum == 0 || sum ==2){
                output+='0';
            }
            else if(sum == 1 || sum ==3){
                output+='1';
            }
            if(sum == 2 || sum==3){
                carry = 1;
            }

            lengthA--;
            lengthB--;
        }

        reverse(output.begin(), output.end());
        return output;

    }
