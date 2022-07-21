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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        ListNode* dummy = new ListNode;
        dummy->next = head;
        ListNode* leftPrev = dummy;
        ListNode* curr = head;
        ListNode* p = nullptr;
        for(int i=0; i<left-1; i++)
        {
            leftPrev = curr;
            curr = curr->next;
        }
        for(int i=0; i<right-left+1; i++){
            ListNode* tmp = curr->next;
            curr->next = p;
            p = curr;
            curr = tmp;
        }
        leftPrev->next->next = curr;
        leftPrev->next = p;
        return dummy->next;
    }
};