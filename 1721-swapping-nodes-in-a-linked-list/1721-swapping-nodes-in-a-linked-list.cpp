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
    ListNode* swapNodes(ListNode* head, int k) {
        // ListNode* curr=head,*temp=head,*curr2=head;
        // int n=0;
        // while(temp!=NULL){
        //     n++;
        //     temp=temp->next;
        // }
        // for(int i=0;i<k-1;i++)
        //     curr=curr->next;
        // for(int i=0;i<n-k;i++)
        //     curr2=curr2->next;
        // swap(curr->val,curr2->val);
        // return head;
        ListNode *n1 = nullptr, *n2 = nullptr;
        for (auto p = head; p != nullptr; p = p->next) {
            n2 = n2 == nullptr ? nullptr : n2->next;
            if (--k == 0) {
                n1 = p;
                n2 = head;
            }
        }
        swap(n1->val, n2->val);
        return head;   
    }
};