/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        ListNode * sum = addHelper(l1, l2, 0);
        return sum;
    }
    
    ListNode* addHelper(ListNode* l1, ListNode* l2, int carry){
        if(l1==NULL && l2==NULL){
            if(carry == 1){
                ListNode * rem = new ListNode(carry);
                return rem;
            }
            return NULL;
        }
        int l1Val = 0;
        int l2Val = 0;
        if(l1 != NULL){
            l1Val = l1->val;
        }
        if(l2 != NULL){
            l2Val = l2->val;
        }
        
        int sum = l1Val + l2Val + carry;
        ListNode * result = new ListNode(sum%10);
        carry = sum>=10? 1:0;
        result->next = addHelper(l1 == NULL || l1->next == NULL ? NULL: l1->next,
                                 l2 == NULL || l2->next == NULL ? NULL: l2->next,
                                 carry);
        return result;
    }
};
