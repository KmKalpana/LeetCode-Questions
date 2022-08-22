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
        /*priority_queue<pi,vector<pi>,greater<pi> >pq;
        ListNode* list=new ListNode(0);
        ListNode* temp=list;
        for(int i=0; i<lists.size(); i++)
        {
            if(lists[i])
             pq.push({lists[i]->val,i});
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
        return list->next;*/
        if(lists.empty())
            return nullptr;
        while(lists.size()>1)
        {
            lists.push_back(mergeTwoList(lists[0],lists[1]));
            lists.erase(lists.begin());
            lists.erase(lists.begin());
        }
        return lists.front();
    }
    ListNode* mergeTwoList(ListNode* l1, ListNode* l2)
    {
        if(l1==nullptr)
            return l2;
        if(l2==nullptr)
            return l1;
        if(l1->val<=l2->val)
        {
            l1->next=mergeTwoList(l1->next,l2);
            return l1;
        }
       else
       { l2->next=mergeTwoList(l1,l2->next);
            return l2;
       }
    }
};