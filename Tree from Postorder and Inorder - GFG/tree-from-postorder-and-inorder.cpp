// { Driver Code Starts
/* program to construct tree using inorder and postorder traversals */
#include <bits/stdc++.h>
using namespace std;

/* A binary tree node has data, pointer to left child
   and a pointer to right child */
struct Node {
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x) {
        data = x;
        left = right = NULL;
    }
};

/* This funtcion is here just to test buildTreeUtil() */
void preOrder(Node* node) {
    if (node == NULL) return;

    /* then print the data of node */
    printf("%d ", node->data);

    /* first recur on left child */
    preOrder(node->left);

    /* now recur on right child */
    preOrder(node->right);
}

Node* buildTree(int in[], int post[], int n);

int main() {
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        int in[n], post[n];
        for (int i = 0; i < n; i++) cin >> in[i];
        for (int i = 0; i < n; i++) cin >> post[i];
        Node* root = buildTree(in, post, n);
        preOrder(root);
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends


/* Tree node structure

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
};*/
Node* newnode(int num)
{
    Node* root=new Node(num);
     return root;
}
Node* construct(int in[], int post[], int start, int end, int &p)
{
  if(start>end)
  {
      return nullptr;
  }
    Node* root=newnode(post[p]);
    p=p-1;
    if(start==end)
     {
         return root;
     }
     int i;
     for(i=start; i<=end; i++)
     {
         if(in[i]==root->data)
         break;
     }
     root->right=construct(in,post,i+1,end,p);
     root->left=construct(in,post,start,i-1,p);
     return root;
}
Node *buildTree(int in[], int post[], int n)
{
    int p=n-1;
  return construct(in,post,0,n-1,p); 
}
