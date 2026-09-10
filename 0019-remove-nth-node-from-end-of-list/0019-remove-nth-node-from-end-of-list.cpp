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
        if (head == NULL)
            return head;

        ListNode* s = head;
        ListNode* f = head;
        int i = 0;
        while (f != NULL) {
            if (i > n) {
                s = s->next;
            }
            f = f->next;
            i++;
        }
        if (s == NULL)
            return s;
        // return l2;
        if(i==n) return head->next;
        if (s->next == NULL)
            return NULL;
        s->next = s->next->next;

        return head;
    }
};