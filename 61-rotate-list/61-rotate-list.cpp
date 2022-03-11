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
    ListNode* rotateRight(ListNode* head, int k) {
        // if(!head || !head->next) return head;
        // int size=0;
        // ListNode* p;
        // p = head;
        // while(p){
        //     size++;
        //     p = p->next;
        // }
        // if(size <= k)
        //     k = k % size;
        // if(k == 0)
        //     return head;
        // int counter=0;
        // ListNode* s = NULL;
        // ListNode* f = head;
        // while(counter != size-k){
        //     s = f;
        //     f = f->next;
        //     counter++;
        // }
        // s->next = NULL;
        // s = f;
        // while(f->next){
        //     f = f->next;
        // }
        // f->next = head;
        // head = s;
        // return head;
        
        //More optimise and clean code --
        if(!head) return head;
        int size=1;
        ListNode *newH, *tail;
        newH = tail = head;
        while(tail->next){
            size++;
            tail = tail->next;
        }
        tail->next = head;
        if(k %= size){
            for(int i=0; i<size-k; i++)
                tail = tail->next;
        }
         newH = tail->next;
         tail->next = NULL;
        return newH;
    }
};