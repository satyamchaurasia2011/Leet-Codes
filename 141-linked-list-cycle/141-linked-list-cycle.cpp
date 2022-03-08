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
    bool hasCycle(ListNode *head) {
        //jugaad
        // while(head){
        //     if(head->next && head->next->val == 100001)
        //         return true;
        //     head->val = 100001;
        //     head = head->next;
        // }
        //return false;
        
        //two pointers
        ListNode *slow = head;
        ListNode *fast = head;
        while(fast && fast->next){
            slow = slow->next;
            fast = fast->next->next;
            if(slow == fast) return true;
        }
        return false;
    }
};