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
    ListNode* swapPairs(ListNode* head) {
        if(head == nullptr || head->next == nullptr)
            return head;
       if(!head->next->next){
           ListNode*p = head->next;
           p->next = head;
           head->next = nullptr;
           return p;
       }
        ListNode* p = head;
        ListNode* head1 = head->next;
        ListNode*q = head1;
        ListNode* r = head->next->next;
        while(r){
            q->next = p;
            if(r->next == nullptr){
                p->next = r;
                break;
            }
            p->next = r->next;
            p = r;
            q = r->next;
            if(r->next == nullptr)
                break;
            r = r->next->next;
        }
        if(r == nullptr){
             q->next = p;
        p->next = nullptr;
        }
       return head1;
       
    }
};