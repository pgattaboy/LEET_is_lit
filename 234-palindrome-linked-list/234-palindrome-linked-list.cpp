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
        ListNode *temp=head;
        vector<int> s,t;
        while(temp){
            s.push_back(temp->val);
            temp=temp->next;
        }
        t = s;
        reverse(s.begin(), s.end());
        if(s != t)
            return false;
        return true;
    }
};