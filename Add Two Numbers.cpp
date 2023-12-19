//Time Complexity: O(n) [where n is the length of the longer linked list] -> Space Complexity: O(n) [where n is the length of the longer linked list]



 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {

        ListNode* output = new ListNode();
        ListNode* head = output;
        int carry = 0;
        while((l1 != nullptr) || (l2 != nullptr) || carry){
            int sum = 0;
            if(l1!= nullptr){
                sum+= l1->val;
                l1 = l1->next;
            }
            if(l2!=nullptr){
                sum+=l2->val;
                l2 = l2->next;
            }
            sum+=carry;
            carry = 0;
            if(sum > 9){
                carry = (sum/10);
            }
            ListNode* newElement = new ListNode(sum%10);
            output->next = newElement;
            output = output->next;
        }
       
        return head->next;
    }
};
