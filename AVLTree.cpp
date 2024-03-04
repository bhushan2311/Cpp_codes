#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node *left;
    struct node *right;
};

struct node* createnode(int val)
{
    struct node *temp;
    temp=new node;
    temp->data=val;
    temp->left=temp->right=NULL;
    return temp;
}

struct node *insert(struct node *root,int val)
{
    if(root==NULL)
        root=createnode(val);
    else if(val<root->data)
        root->left=insert(root->left,val);
    else
        root->right=insert(root->right,val);
    return root;
};

void preorder(struct node *root)
{
    if(root==NULL)
        return;
    cout<<" "<<root->data;
    preorder(root->left);
    preorder(root->right);

};

int main()
{
    struct node *root=NULL;
    root=insert(root,15);
    root=insert(root,20);
    root=insert(root,5);
    root=insert(root,12);
    root=insert(root,55);
    preorder(root);
    return 0;
}
