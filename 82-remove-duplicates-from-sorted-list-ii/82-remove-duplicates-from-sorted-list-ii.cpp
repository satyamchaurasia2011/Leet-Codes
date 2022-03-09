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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode *p;
        ListNode *q;
        if(!head) return nullptr;
        if(!head->next) return head;
        p = nullptr;
        q = head;
        int rpval = INT_MIN;
        if(q->val == q->next->val){
            rpval = q->val;
            q = q->next;
        }
        while(q && q->next){
             if(rpval == q->val || q->val == q->next->val){
                rpval = q->val;
                q = q->next;
            }
           else if(q->val != q->next->val){
               if(p == nullptr)
                    head = q;
                  else
                    p->next = q;  
                p = q;
                q = q->next;
             }
               
            }
        if(p && rpval == q->val)
             p->next = nullptr;
        if(p && rpval != q->val)
            p->next = q; 
        else if(p == nullptr && rpval != q->val)
             head = q;
        if(p == nullptr && rpval == q->val)
            return nullptr;
         return head;
        }
};