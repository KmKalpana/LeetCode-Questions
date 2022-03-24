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
    ListNode* reverseKGroup(ListNode* head, int k)
    {
     if(head==NULL || head->next==NULL)
     {
         return head;
     }
     ListNode* hold=head;
     ListNode* temp=head;
    int count=k;
     while(count>0 && temp!=nullptr)
     {
         temp=temp->next;
         count--;
     }
      if(count>0)
        {
            return head;
        }
        ListNode* prev=nullptr;
        ListNode* current=head;
        while(current!=temp )
        {
            ListNode* next=current->next;
            current->next=prev;
            prev=current;
            current=next;
        }
         hold->next=reverseKGroup(current,k);
        return prev;
    }
};