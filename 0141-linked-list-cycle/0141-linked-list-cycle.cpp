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
    bool hasCycle(ListNode* head) {
        if (head == NULL || head->next == NULL)
            return false;
        ListNode* s = head;
        ListNode* f = head;
        f = f->next;
        while (s != f && f->next != NULL && f->next->next != NULL) {
            f = f->next->next;
            s = s->next;
        }
        if (f == NULL || f->next == NULL || f->next->next == NULL)
            return false;
        return true;
    }
};