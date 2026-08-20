/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* temp = new ListNode(0);
        ListNode* current = temp;
        int carry = 0;
        while(l1 != nullptr || l2 != nullptr || carry != 0){
            int val1 = 0;
            int val2 = 0;
            if(l1 != nullptr){
                val1 = l1->val;
            }
            if(l2 !=nullptr){
                val2 = l2->val;
            }
            int total = val1 + val2 + carry;
            int digit = total % 10;
            carry = total/10;
            current->next = new ListNode(digit);
            current = current->next;
            if(l1 != nullptr){
                l1 = l1->next;
            }
            if(l2 != nullptr){
                l2 = l2->next;
            }


        }
    return temp->next;
    }
};