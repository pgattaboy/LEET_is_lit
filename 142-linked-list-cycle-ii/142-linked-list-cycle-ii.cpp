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
    ListNode *detectCycle(ListNode *head) {
        ListNode *fast=head,*slow=head;
        bool b=false;
        while(fast && fast->next){
            fast=fast->next;
            slow=slow->next;
            if(fast->next){
                fast=fast->next;
                b=true;
            }
            if(fast==slow && b){
                slow=head;
                while(fast!=slow){
                    fast=fast->next;
                    slow=slow->next;
                }
                return slow;
            }
            
        }
        return nullptr;
    }
};