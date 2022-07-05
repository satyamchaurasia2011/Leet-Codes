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
        ListNode* p;
        p = head;
        while(p){
            ListNode* q = p->next;
            while(q && p->val == q->val)
                q = q->next;
            p->next = q;
            p = q;
        }
        return head;
    }
};