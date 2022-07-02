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
    ListNode* mergeNodes(ListNode* head) 
    {
       ListNode* temp= new ListNode(0);
      ListNode* ans=temp;
       int sum=0;
       while(head!=nullptr)
       {
           if(head->val==0 && sum==0)
           {
               head=head->next;
           }
           if(head!=nullptr && head->val==0)
           {
               ans->next=new ListNode(sum);
               ans=ans->next;
               sum=0;
           }
           else
           {
               if(head!=nullptr)
               {
                   sum+=head->val;
                    head=head->next;
               }
           }
       }
        return temp->next;
    }
};