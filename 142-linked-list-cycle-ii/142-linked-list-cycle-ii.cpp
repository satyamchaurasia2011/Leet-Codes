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
    ListNode *detectCycle(ListNode *head) {
      while(head) { 
          if(head->val==1000000)
            return head;
          head->val = 1000000;
          head  = head->next; 
      }
        return NULL;
    }
};