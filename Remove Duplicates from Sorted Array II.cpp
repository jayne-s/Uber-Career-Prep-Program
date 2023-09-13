
// Method 1 -> Time Complexity: O(n) -> Space Complexity: O(n)

    int removeDuplicates(vector<int>& nums) {
       
   
    map<int, int> frequency;
        int count = 0;

        for(int i = 0; i < nums.size(); i++){
            if(frequency.find(nums[i]) != frequency.end()){
                frequency[nums[i]]++;
            }
            else{
                frequency.insert({nums[i], 1});
            }
        }

     map<int, int>::iterator it = frequency.begin();
 
   while (it != frequency.end())
   {
     std::cout << "Key: " << it->first << ", Value: " << it->second << std::endl;
    ++it;
   }


        for(int j = 0; j < nums.size(); j++){
         
            if(frequency[nums[j]] <= 2) {
               nums[count] = nums[j];
               count++;
            }
            else{
               
                frequency[nums[j]]--;
            }
       
    }
return count;
    }
  
       
// Method 2 -> Time Complexity: O(n) -> Space Complexity: O(1)

   int removeDuplicates(vector<int>& nums) {

     bool seenDuplicate = false;
        int lastSeen = nums[0];
        int count = 0;

         for(int i = 0; i < nums.size(); i++){
             if(nums[i] == lastSeen && i != 0){
                 if(seenDuplicate){
                     continue;
                }
                 else{
                     seenDuplicate = true;
                     cout << nums[i];
                    nums[count] = nums[i];
                     count++;
                   
                 }
             }
            else{
                seenDuplicate = false;
                 lastSeen = nums[i];
                cout << nums[i];
                nums[count] = nums[i];
                 count++;
             }
         }
         return count;
     }










