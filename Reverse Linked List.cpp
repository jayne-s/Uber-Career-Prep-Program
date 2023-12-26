//Time Complexity: O(n) -> Space Complexity: O(n)


 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };

    ListNode* reverseList(ListNode* head) {
        ListNode* newNode = new ListNode();
        ListNode* tempNode = new ListNode();
        tempNode = head;
        vector<int> tempVec;
        while(head != nullptr){
           tempVec.push_back(head->val);
           head = head->next;
        }
        reverse(tempVec.begin(), tempVec.end());

        int i = 0; 
        ListNode* t = new ListNode();
        t = tempNode;
        while(tempNode != nullptr){
            tempNode->val = tempVec[i];
            cout << tempNode->val << " " << tempVec[i]<< endl;
            tempNode = tempNode->next;
            i++;
        }
        
        return t;
    }
