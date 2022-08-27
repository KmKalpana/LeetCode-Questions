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
    ListNode* removeZeroSumSublists(ListNode* head)
    {
        ListNode* root=new ListNode(0);
        unordered_map<int,ListNode*>mp;
        int psum=0;
        root->next=head;
        mp[0]=root;
        while(head!=NULL)
        {
            psum+=head->val;
            if(mp.find(psum)!=mp.end())
            {
               ListNode* start=mp[psum];
               int temp=psum;
                while(start!=nullptr && start!=head)
                {
                    start=start->next;
                    temp+=start->val;
                    if(start!=head)
                        mp.erase(temp);
                }
                mp[psum]->next=head->next;
            }
            else
            {
              mp[psum]=head;  
            }
            head=head->next;
        }
        return root->next;
    }
};