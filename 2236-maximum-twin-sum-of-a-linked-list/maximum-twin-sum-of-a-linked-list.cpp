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
    int pairSum(ListNode* head) {
        vector<int>arr;
        while(head){
            arr.push_back(head->val);
            head=head->next;
        }
        int left=0;
        int right=arr.size()-1;
        int sum=INT_MIN;
        while(left<right){
            sum=max(sum,arr[left]+arr[right]);
            left++;
            right--;
        }
        return sum;
    }
};