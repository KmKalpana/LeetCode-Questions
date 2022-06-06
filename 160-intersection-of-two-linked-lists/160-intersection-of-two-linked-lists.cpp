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
    int count(ListNode* head)
    {
        ListNode* temp=head;
        int count=0;
        while(temp!=nullptr)
        {
            count++;
            temp=temp->next;
        }
        return count;
    }
    
     ListNode *findIntersection(int bigger,int smaller ,ListNode *headA, ListNode *headB){
         ListNode * temp1=headA;
         while(bigger>smaller){
             temp1=temp1->next;
             bigger--;
         }
         ListNode* temp2=headB;
         
         while(temp1 && temp2){
             if(temp1==temp2)return temp1;
             temp1=temp1->next;
             temp2=temp2->next;
         }
         
         return NULL;
         
     }
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) 
    {
        int count1=count(headA);
        int count2=count(headB);
        // cout<<count1<<" "<<count2;
        int check=0;
        if(count1>count2)
        {
           return findIntersection(count1,count2,headA,headB); 
        }
        if(count2>=count1)
        {
           return findIntersection(count2,count1,headB,headA);
        } 
    return NULL;}
    
    
};