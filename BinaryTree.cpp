#include<iostream>
using namespace std;

struct btnode
{
    int info;
    struct btnode *left;
    struct btnode *right;
};

struct btnode *create()
{
    int x;
    struct btnode *n;
    n=new btnode;
    cout<<"\nEnter data in node (enter -1 for no data)"<<endl;
    cin>>x;
    if(x==-1)
        return 0;

    else
    {
        n->info=x;
        cout<<"\nEnter Data in Left Node of "<<x;
        n->left=create();

        cout<<"\nEnter Data in Right Node of "<<x;
        n->right=create();
    }

    return n;
};

void pre_order(struct btnode *root)
{
    if(root==NULL)
        return;
    cout<<"\npre_order"<<root->info;
    pre_order(root->left);
    pre_order(root->right);
}

void in_order(struct btnode *root)
{
    if(root==NULL)
        return;
    in_order(root->left);
    cout<<"\nin_order"<<root->info;
    in_order(root->right);
}

void post_order(struct btnode *root)
{
    if(root==NULL)
        return;
    post_order(root->left);
    post_order(root->right);
    cout<<"\npost_order"<<root->info;
}

int main()
{
    struct btnode *root;
    root=create();
    pre_order(root);
    in_order(root);
    post_order(root);
}
