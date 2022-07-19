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
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* sortedListToBST(ListNode* head)
    {
        if(head==NULL)
            return NULL;
        if(head->next==NULL)
        {
            return new TreeNode(head->val);
        }
        ListNode* temp=head;
        int count=0;
        while(temp)
        {
           temp=temp->next;
            count++;
        }
        int mid=count/2;
        temp=head;
        int i=0;
        ListNode* prev;
        while(i<mid && temp)
        {
            prev=temp;
            temp=temp->next;
            i++;
        }
        TreeNode* root=new TreeNode(temp->val);
        ListNode* temp2=temp->next;
        prev->next=NULL;
        root->left=sortedListToBST(head);
        root->right=sortedListToBST(temp2);
        return root;
        
    }
};