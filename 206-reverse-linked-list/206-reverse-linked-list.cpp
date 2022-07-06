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
    ListNode* reverseList(ListNode* head) {
        if(head == nullptr) return head;
        ListNode* prev = nullptr;
        ListNode* p = head;
        ListNode* nxt = p->next;
        while(nxt){
             p->next = prev;
             prev = p;
             p = nxt;
             nxt = nxt->next;
        }
       p->next = prev;
        return p;
    }
};