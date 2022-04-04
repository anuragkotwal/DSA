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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode* res=NULL;
        vector<int> arr;
        while(l1!=NULL){
            arr.push_back(l1->val);
            l1=l1->next;
        }
        while(l2!=NULL){
            arr.push_back(l2->val);
            l2=l2->next;
        }
        sort(arr.begin(),arr.end());
        for(auto i:arr)
            cout<<i<<" ";
        for(int i=0;i<arr.size();i++){
            ListNode* n= new ListNode(arr[i]);
            if(res==NULL)
                res=n;
            else{
                ListNode* nextNode = res;
                while(nextNode->next!=NULL)
                    nextNode=nextNode->next;
                nextNode->next=n;
            }
        }
        return res;
    }
};