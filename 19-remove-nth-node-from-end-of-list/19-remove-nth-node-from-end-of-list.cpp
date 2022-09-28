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
        int size = 0;
         if(!head || !head->next)
            return nullptr;
        ListNode* temp = head;
        while(temp){
            temp = temp->next;
            size++;
        }
        int pos = size-n;
        int i=0;
        ListNode* p = head;
        while(i < pos-1){
            p = p->next;
            i++;
        }
        if(pos == 0) head = head->next;
        if(p->next)
          p->next = p->next->next;
        return head;
    }
};