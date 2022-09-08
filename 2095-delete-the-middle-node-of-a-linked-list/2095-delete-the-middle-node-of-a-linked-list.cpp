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
    ListNode* deleteMiddle(ListNode* head) {
         ListNode *faster,*slower,*prev;
        if(head->next==NULL)
            return head=NULL;
        faster=head;
        slower=head;
        while(faster->next){
            faster=faster->next;
            prev=slower;
            slower=slower->next;
            if(faster->next)
                faster=faster->next;
        }
        prev->next=slower->next;
        return head;
    }
};