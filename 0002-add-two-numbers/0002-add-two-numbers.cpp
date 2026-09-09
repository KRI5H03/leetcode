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

        ListNode *p1=l1,*p2=l2;

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
        return h->next;
    }
};