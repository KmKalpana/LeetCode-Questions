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
    // typedef pair<int,int>ind;
    typedef pair<int,int>pi;
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) 
    {
        priority_queue<pi,vector<pi>,greater<pi> >pq;
        ListNode* list=new ListNode(0);
        ListNode* temp=list;
        for(int i=0; i<lists.size(); i++)
        {
            //cout<<lists[i]->val<<" ";
            if(lists[i])
             pq.push({lists[i]->val,i});
           // lists[i]=lists[i]->next ;
          //  cout<<lists[i]->val<<" ";
       //cout<<pq.top().first<<" "<<pq.top().second.first<<" "<<pq.top().second.second<<endl;
        }
        while(!pq.empty())
        {
            auto node=pq.top().first;
             int i=pq.top().second;
            pq.pop();
            cout<<node<<" ";
            temp->next=new ListNode(node);
            temp=temp->next;
            if(lists[i]->next)
            {
                lists[i]=lists[i]->next;
                pq.push({lists[i]->val,i});
            }
        }
        return list->next;
    }
};