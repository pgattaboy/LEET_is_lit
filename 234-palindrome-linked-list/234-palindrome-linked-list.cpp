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
    bool isPalindrome(ListNode* head) {
        ListNode *faster,*slower,*prev,*current=NULL,*future;
        faster=head,slower=head;
        while(faster->next){
            faster=faster->next;
            if(faster->next == NULL)
                break;
            slower=slower->next;
            faster=faster->next;
        }
        if(slower!=faster){
        slower=slower->next;
        prev=slower;
        current=prev->next;
        }
        while(current){
            future=current->next;
            current->next=prev;
            prev=current;
            current=future;
        }
        slower->next=NULL;
        while(head&&faster){
            if(head->val != faster->val)
                return false;
            head=head->next;
            faster=faster->next;
        }
        return true;
    }
};