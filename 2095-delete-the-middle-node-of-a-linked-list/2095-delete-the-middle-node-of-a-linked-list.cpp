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
    ListNode* deleteMiddle(ListNode* head) {
        int size = 0;
        if(!head || !head->next) return nullptr;
        ListNode* p = head;
        while(p){
            p = p->next;
            size++;
        }
        int mid = size/2;
        p = head;
        int i=0;
        while(p && i<mid-1){
            p = p->next;
            i++;
        }
        p->next = p->next->next;
        return head;
            
    }
};