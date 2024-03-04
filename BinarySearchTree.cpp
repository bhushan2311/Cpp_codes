#include<iostream>
using namespace std;
/*
struct bstnode
{
    int data;
    struct bstnode *left;
    struct bstnode *right;
};

struct bstnode *createnode(int data)
{
    struct bstnode *getnode=new bstnode;
    getnode->data=data;
    getnode->left=getnode->right=NULL;
    return getnode;
}

struct bstnode *insert(struct bstnode *root,int data)
{
    if(root==NULL)
    {
        root=createnode(data);
    }
    else if(data<root->data)
        root->left=insert(root->left,data);
    else
        root->right=insert(root->right,data);
    return root;
};

void pre_order(struct bstnode *root)
{
    if(root==NULL)
        return;
    cout<<root->data;
    pre_order(root->left);
    pre_order(root->right);

}
int main()
{
    struct bstnode *root=NULL;
    root=insert(root,5);
    root=insert(root,3);
    root=insert(root,7);
    root=insert(root,1);
    root=insert(root,6);
    root=insert(root,9);
    pre_order(root);
}*/


struct bstnode
{
    int info;
    struct bstnode *left;
    struct bstnode *right;
};
struct bstnode *root=NULL;

struct bstnode *createnode(int info)
{
    struct bstnode *n=new bstnode;
    n->info=info;
    n->left=n->right=NULL;
    return n;
}
struct bstnode * insert(int info)
{
    if(root==NULL)
    {
        root=createnode(info);
    }
    else if(info<root->info)
    root->left=insert(info);
    else
    root->right=insert(info);
    return 0;
}

/*void in_order(struct bstnode *root)
{
    if(root==NULL)
    return ;
    in_order(root->left);
    cout<<root->info;
    in_order(root->right);

}*/

void pre_order(struct bstnode *root)
{
    if(root==NULL)
        return;
    cout<<root->info;
    pre_order(root->left);
    pre_order(root->right);

}

int main()
{
    insert(8);
    insert(3);
    insert(5);
    insert(12);
    insert(2);
    insert(9);
    pre_order(root);
    return 0;
}

