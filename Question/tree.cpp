#include<stdio.h>
#include<malloc.h>
struct node {
    int data ;
    struct node*left;
    struct node*right;

};
void preorder (struct node*root)
{
    if(root!=NULL)
    {
        printf(" %d",root->data);
        preorder(root->left);
        preorder(root->right);

    }

}
void postorder(struct node*root)
{
    if(root!=NULL)
    {
        postorder(root->left);
        postorder(root->right);
        printf( "%d ",root->data);
        
    }
}
 


void inorder(struct node*root)
{
    if(root!=NULL)
    {
        postorder(root->left);
        printf( "%d ",root->data);
        postorder(root->right);

        
    }

}
//making a node
struct node *createnode(int data)
{
    struct node*p;
    p=(struct node*)malloc(sizeof(struct node));
    p->data=data;
    p->left =NULL;
    p->right=NULL;
    return p;
}
//checking for binary tree searching
int isBST(struct node*root)
{
    static struct node *prev=NULL;
     
    if(root!=NULL)
    {
        if(!isBST(root->left))
        {
            return 0;
        }
        if(prev!=NULL &&root->data<=prev->data)
        {
            return 0;
        }
        prev=root;
        return isBST(root->right);
    }
    else return 1;
} 

// binary search in a tree  for the 
struct node*binarysearch(struct node*root,int key)
{
    if(root==NULL)
    {
        return NULL;
    }
    if(key==root->data) 
    {
        return root;
    }
    else if(root->data>key)
    {
        return  binarysearch(root->left,key);
    }
    else{
        return binarysearch(root->right,key);
    }
    
}
// BST by iter
struct node*binarysearchiter(struct node*root,int key)
{
    while(root!=NULL)
    {
        if (key==root->data)
        return root;
        else if(key>root->data)
        {
            root=root->right;
        }
        else{
            root=root->left;
        }
    }
return NULL;
}

//insertion in binary search tree
void insertion(struct node*root ,int key)
{
    struct node*prev=NULL;
    
    while(root!=NULL)
    {
        prev=root;
        if(key==root->data)
        {
            printf("can not insert %d",key);
            return ;
        }
        else if(key<root->data)
        {
            root=root->left;
        }
        else{
            root=root->right;
        }
    }
    struct node* abc =createnode(key);
    if(key<prev->data)
    {
        prev->left=abc;
}
else{
    prev->right=abc;
}
//insertion on binary search tree copy  




}



//void insert(struct node *root, int key){
//   struct node *prev = NULL;
//   while(root!=NULL){
//       prev = root;
//       if(key==root->data){
//           printf("Cannot insert %d, already in BST", key);
//           return;
//       }
//       else if(key<root->data){
//           root = root->left;
//       }
//       else{
//           root = root->right;
//       }
//   }
//   struct node* ne = createnode(key);
//   if(key<prev->data){
//       prev->left = ne;
//   }
//   else{
//       prev->right = ne;
//   }
//}
//

 



int main()
{
    struct node *p;
    struct node *p2;
    struct node *p3;
    struct node *p4;

    p4=createnode(5);

    p=(struct node*)malloc(sizeof(struct node));
    p->data=10;
    p->left=NULL;
    p->right=NULL;

    p2=(struct node*)malloc(sizeof(struct node));
    p2->data=8;
    p2->left=NULL;
    p2->right=NULL;

    p3=(struct node*)malloc(sizeof(struct node));
    p3->data=14;
    p3->left=NULL;
    p3->right=NULL;

    p->left=p2;
    p->right=p3;
    p2->left=p4;
   // p->next;// that will be the calling function

    //for(int i=0;i<=2;i++)
    //{
    //printf("%d",p->left);

    //}

   // preorder(p);
    //printf("\n");
    //postorder(p);
    //printf("\n");
    inorder(p);
    printf("\n");
    printf("%d",isBST(p));
    printf("\n");
    //struct node*a=binarysearch(p,14);
    struct node*a=binarysearchiter(p,14);
    if(a!=NULL)
    {
        printf("found : %d",a->data);
    }
    else{
        printf("not found");
    }

    insertion(p,4);
    printf("\n");
    inorder(p);

return 0;   
}