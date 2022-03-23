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
    bool hasCycle(ListNode *head) {
        ListNode* F=head,*S=head;
        if(head==NULL)
            return false;
        while(F&&F->next){
            S=S->next;
            F=F->next->next;
            if(S==F)
                return true;
        }
        return false;
    }
};