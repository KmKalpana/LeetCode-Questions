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
    ListNode* partition(ListNode* head, int x)
    {
      ListNode* ans= new ListNode(0);
      ListNode* temp=ans;
      ListNode* append= new ListNode(0);
      ListNode* temp2=append;
       while(head!=nullptr)
       {
           if(head->val<x)
           {
               temp->next=new ListNode(head->val);
               temp=temp->next;
           }
           else
           {
              temp2->next=new ListNode(head->val);
               temp2=temp2->next;  
           }
           head=head->next;
       }
       temp->next=append->next;
         return ans->next;
    }
};