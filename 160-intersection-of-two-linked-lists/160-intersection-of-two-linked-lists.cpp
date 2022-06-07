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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int count1 = 0, count2=0;
        ListNode *xa = headA;
        ListNode *xb = headB;
        while(xa)
        {
            count1++;
            xa = xa->next;
        }
        while(xb)
        {
            count2++;
            xb = xb->next;
        }
        if(count1 > count2)
        {
            int p = count1 - count2;
            while(p--)
                headA = headA->next;
        }
        else {
            int p = count2 - count1;
            while(p--)
                headB = headB->next;
        }
        while(headA != headB && headA && headB)
        {
            headA = headA->next;
            headB = headB->next;
        }
        if(headA == headB)
            return headA;
        else 
            return nullptr;
    }
};