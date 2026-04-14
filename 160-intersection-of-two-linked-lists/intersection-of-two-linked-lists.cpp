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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if (headA == NULL || headB == NULL) return NULL;

        unordered_map<ListNode*, bool> mp;

        // store nodes of A
        while (headA != NULL) {
            mp[headA] = true;
            headA = headA->next;
        }

        // check nodes of B
        while (headB != NULL) {
            if (mp.find(headB) != mp.end()) {
                return headB;
            }
            headB = headB->next;
        }

        return NULL;


    }
};