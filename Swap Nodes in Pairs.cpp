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
    ListNode* swapPairs(ListNode* head) {
        ListNode*temp=head;
        int faltu=0;
       
            while(temp!=0)
            {
                faltu=temp->val;
                if(temp->next==0)
                {
                    return head;
                }
                else
                {
                temp->val=temp->next->val;
                temp->next->val=faltu;
                temp=temp->next->next; }
            }
      
        return head;
        
    }
};
