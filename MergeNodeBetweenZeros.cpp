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
    ListNode* mergeNodes(ListNode* head) {
ListNode* curr=head;
vector<int>a;
curr=curr->next;
ListNode* w=head;
int sum=0;
while(curr){
if(curr->val==0){
    w->val=sum;
    if(curr->next==0)break;
    w=w->next;
    sum=0;
}sum=sum+(curr->val);
curr=curr->next;}
w->next=NULL;
return head;}
};
