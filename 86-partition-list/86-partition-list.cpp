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
    ListNode* partition(ListNode* head, int x) {   
        ListNode* dummy = new ListNode;
        dummy->next = head;
        ListNode* prev = dummy;
        ListNode* curr = dummy;
        while(curr){
            if(curr->next && prev != curr && curr->next->val < x){
                ListNode* temp = curr->next;
                curr->next = temp->next;
                // curr = curr->next;
                temp->next = prev->next;
                prev->next = temp;
                prev = prev->next;
            }
            else if(curr->next && curr->next->val >= x){
                curr = curr->next;
            } else{
                prev = prev->next;
                curr = curr->next;
            }
                
        }
        return dummy->next;
    }
};