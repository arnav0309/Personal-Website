#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int val)
    {
        data=val;
        left=NULL;
        right=NULL;
    }
};
int height(Node* root)
{
    if(root==NULL)
    {
        return 0;
    }
    return max(height(root->left),height(root->right))+1;
}
int diameter(Node* root)
{
    if(root==NULL)
    {
        return 0;
    }
    int currdia=height(root->left)+height(root->right)+1;
    return max(currdia,max(diameter(root->left),diameter(root->right)));
}
//optimisedway
int diameter1(Node* root,int* height)
{
    if(root==NULL)
    {
        *height=0;
        return 0;
    }
    int lh=0,rh=0;
    int ldiameter=diameter1(root->left,&lh);
    int rdiameter=diameter1(root->right,&rh);
    *height=max(lh,rh)+1;
    int currdia=lh+rh+1;
    return max(max(ldiameter,rdiameter),currdia);
}
int main()
{
    Node* root=new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    root->left->left=new Node(4);
    root->left->right=new Node(5);
    root->right->left=new Node(6);
    root->right->right=new Node(7);

    int height=0;
    cout<<diameter(root)<<endl;
    cout<<diameter1(root,&height);
    return 0;
}