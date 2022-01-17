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
        ListNode* p = head;
        int size = 0;
        while(p)
        {
            p = p->next;
            size++;
        }
       if(n == size){
           ListNode *temp = head;
             head = head->next;
           delete temp;
           return head;
       }
        if(n==1){
             ListNode *temp = head;
            while(temp->next->next)
               temp = temp->next;
            temp->next = nullptr;
            return head;
        }
         size = size-n;
        int j=1;
         ListNode *temp = head;
        while(temp)
        {
          if(j == size){
              temp->next = temp->next->next;
              return head;
          }
            temp = temp->next;
            j++;
        }
          
        
        
        return head;
    }
};