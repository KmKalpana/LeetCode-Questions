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
    ListNode* swapNodes(ListNode* head, int k) 
    {
     ListNode* temp=head;
      int count=0;
      ListNode* hold;
         ListNode* prev=nullptr;
      while(temp)
        {
          count++;
          if(count==k)
          {
              hold=temp;
          }
             prev=temp;
            temp=temp->next;
        }
        if(k==1)
        {
          swap(prev->val,hold->val);
            return head;
        }
       int diff=count-k;
      prev=nullptr;
      temp=head;
        int c=0;;
        while(temp)
        {
          if(c==diff+1)
          {
              swap(prev->val,hold->val);
          }
            prev=temp;
            temp=temp->next;
            c++;
        }
        return head;
    }
};