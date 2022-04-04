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
        ListNode *ptr1 = head, *ptr2 = head, *kth = NULL;
        while (--k)
            ptr1 = ptr1->next;
        
        kth = ptr1;
        ptr1 = ptr1->next;
        
        while (ptr1) {
            ptr1 = ptr1->next;
            ptr2 = ptr2->next;
        }
        swap(ptr2->val, kth->val);
        return head;
    }
};