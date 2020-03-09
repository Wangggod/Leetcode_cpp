// Source: https://leetcode.com/problems/remove-linked-list-elements/
// Author: Wangggod
// Date: 2020.3.9
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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode *dummy = new ListNode(-1), *pre = dummy;
        dummy -> next = head;
        while(pre->next) {
            if (pre->next->val == val) {
                ListNode *t = pre->next;
                pre->next = t->next;
                t->next = NULL;
                delete t;
            } else {
                pre = pre -> next;
            }
        }
        return dummy->next;
    }
};
