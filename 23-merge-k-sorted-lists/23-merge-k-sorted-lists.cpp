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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if( lists.size()==0)
            return nullptr;
        
        ListNode *head = new ListNode;
        ListNode *temp = head;
        
       while(true)
       {
           int p=0;
           for(int i=0; i<lists.size(); i++)
               if(lists[p]==nullptr || (lists[i] != nullptr && lists[p]->val>lists[i]->val))
                   p = i;
          if(lists[p]==nullptr)
              break;
           temp->next = lists[p];
           temp = temp->next;
           lists[p] = lists[p]->next;
       }
        
       
        return head->next;
        
    }
};