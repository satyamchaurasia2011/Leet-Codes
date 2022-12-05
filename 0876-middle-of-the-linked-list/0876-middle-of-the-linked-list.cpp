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
    ListNode* middleNode(ListNode* head) {
         int size=0;
        ListNode *p = head;
        while(p)
        {
           p = p->next;
            size++;
        }
        size = size/2;
        int j=0;
        while(head)
        {
            if(size==j)
            {
                return head;
            }
            head = head->next;
            j++;
        }
           return head;
    }
};