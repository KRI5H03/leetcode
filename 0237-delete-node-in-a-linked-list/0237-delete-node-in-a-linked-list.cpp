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
    void deleteNode(ListNode* n) {
        if(n->next!=NULL){
            n->val=n->next->val;
            n->next=n->next->next;
        }
    }
};