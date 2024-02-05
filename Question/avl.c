#include <stdio.h>
#include <stdlib.h>
#include<malloc.h>
#include<math.h>

struct node
{
    int key;
    struct node *left;
    struct node *right;
    int height;
};
int getheight(struct node *n)
{
    if (n == NULL)
    {
        return 0;
    }
    return n->height;
}
struct node *createnode(int key)
{
    struct node *node = (struct node *)malloc(sizeof(struct node));
    node->key=key;
    node->left=NULL;
    node->right=NULL;
    node->height=1;
    return node; 
}
int getbalancedfactor(struct node*n)
{
    if(n==NULL)
    {
        return 0;
    }
    return getheight(n->left)-getheight(n->right);
}

//left rotation of a tree
struct node* rightrotation( struct node*y)
{
     struct node*x=y->left;
     struct node*t2=x->right;

    x->right=y;
    y->left=t2;

    y->height=max(getheight(y->right),getheight(y->left)+1);
    x->height=max(getheight(x->left),getheight(x->right)+1);


return x;

}
struct node*leftrotation(struct node*x)
{
    struct node*y=x->right;
    struct node*t2=y->left;

    y->left=x;
    x->right=t2;

    x->height=max(getheight(x->left),getheight(x->right)+1);
    y->height=max(getheight(y->left),getheight(y->right)+1);

return y;
}

//insertion on a node 

//struct node* insert(struct node*node,int key)
//{
//    struct node*prev=NULL;
//    while(node!=NULL)
//    {
//        node=prev;
//        if(node==NULL)
//        {
//            return createnode(key);
//        
//        }
//        else if(key<node->key)
//        {
//            node->left= insert(node->left,key);
//        }
//        else
//        {
//            node->right=insert(node->right,key);
//        }
//        return node;
//        
//        
//
//    }
//}

//copied code of insert in avl
 


int main()
{
    struct node*root=NULL;
   // root=insert(root,1);
   // root=insert(root,2);
   // root=insert(root,3);
   // root=insert(root,4);
   // root=insert(root,5);
   // root=insert(root,6);
   // 


}