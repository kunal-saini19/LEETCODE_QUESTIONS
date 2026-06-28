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
    ListNode* deleteDuplicates(ListNode* head) {
        vector<int>arr;
        while(head){
            arr.push_back(head->val);
            head=head->next;
        }
        vector<int> uniquevals;
        int n=arr.size();

        for(int i=0;i<n;i++){
            if((i==0 || arr[i]!=arr[i-1]) &&
            (i==n-1 || arr[i] !=arr[i+1])) {
                uniquevals.push_back(arr[i]);
            }
        }
        ListNode* dummy =new ListNode(0);
        ListNode* tail = dummy;
        
        for(int x:uniquevals){
            tail->next =new ListNode(x);
            tail=tail->next;
        }
        return dummy->next;
    }
};