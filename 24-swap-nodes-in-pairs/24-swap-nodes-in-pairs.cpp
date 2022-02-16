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
        ListNode *p = head;
        ListNode *p1 = p->next;
        p->next = p1->next;
        p1->next = p;
        head = p1;
        if(p->next == nullptr)
            return head;
        p1 = p->next->next;
        while(p != nullptr && p1 != nullptr)
        {
            p->next->next = p1->next;
            p1->next = p->next;
            p->next = p1;
            p = p->next->next;
            if(p->next == nullptr || p->next->next == nullptr)
                break;
            else
                p1 = p->next->next;
        }
        return head;
    }
};