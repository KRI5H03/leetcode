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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {

        ListNode *c1 = l1, *c2 = l2, *p1=NULL, *p2=NULL, *t1, *t2;

        while (c1 != NULL || c2 != NULL) {
            if (c1 != NULL) {
                t1 = c1->next;
                c1->next = p1;
                p1 = c1;
                c1 = t1;
            }
            if (c2 != NULL) {
                t2 = c2->next;
                c2->next = p2;
                p2 = c2;
                c2 = t2;
            }
        }
        ListNode* s = new ListNode(0);
        ListNode* h=s;
        int c = 0;
        while (p1 != NULL || p2 != NULL) {
            int a = 0, b = 0;
            if (p1 != NULL) {
                a = p1->val;
                p1 = p1->next;
            }
            if (p2 != NULL) {
                b = p2->val;
                p2 = p2->next;
            }
            int sum=a+b+c;
            c=sum/10;
            ListNode* x = new ListNode(sum%10,NULL);
            s->next = x;
            s = s->next;
        }
        if(c>0){
            ListNode* x = new ListNode(c,NULL);
            s->next = x;
            s = s->next;
        }
        // return h;
        ListNode *c3 = h->next, *t3, *p3=NULL;
        while (c3 != NULL) {
            t3 = c3->next;
            c3->next = p3;
            p3 = c3;
            c3 = t3;
        }
        return p3;
    }
};