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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *prev=head,*temp=head;
        int c=0,t=0;
         while(temp){
            c++;
            temp=temp->next;
          }
        if(c==n){
            if(prev->next){
                head=head->next;
            }
            else
                head=nullptr ;
        }
        else{
          temp=prev;
          while(t+n<c){
            t++;
            prev=temp;
            temp=temp->next;
          }
          prev->next=temp->next;
        }
        return head;
    }
};