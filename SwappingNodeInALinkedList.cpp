

class Solution {
public:
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* curr=head;
        vector<int> a;
        while(curr){a.push_back(curr->val);
        curr=curr->next;}
        swap(a[k-1],a[a.size()-k]);
        curr=head;
        for(int i=0;i<a.size();i++)
        {
            curr->val=a[i];
            curr=curr->next;
        }
        return head;
    }
};
