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
        if(head==NULL)
            return NULL;
        ListNode* NewNode = new ListNode();
        NewNode->next=head;
        ListNode* First=NewNode;
        for(int i=0;i<n;i++){
            if(First==NULL) return NULL;
            First=First->next;
        }
        ListNode* Second=NewNode;
        while(First->next!=NULL){
            Second=Second->next;
            First=First->next;
        }
        Second->next=Second->next->next;
        return NewNode->next;
    }
};