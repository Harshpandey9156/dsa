#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*prev;
    struct node*next;

};
void insertion(struct node *ptr)
{
    while(ptr!=NULL)
    {
        printf("element is %d\n",ptr->data);
        ptr=ptr->next; 
    }
}
//  struct node *circular(struct node*head)
//  {
//      struct node*ptr=(struct node*)malloc(sizeof(struct node));
//  }
struct node *insertion_at_beg(struct node*first ,int data)
{
   struct node* ptr=(struct node*)malloc(sizeof(struct node));
   struct node* p=(struct node*)malloc(sizeof(struct node));
   p->data=data;
   
   if(ptr==NULL)
   {
        ptr->next=p;
   }
   p->prev=NULL;
   struct node*temp=first;
   temp->data=data;
   temp->next=first;
   temp->prev=first;
   
}

int main()
{
    struct node *first;
    struct node*second;
    struct node*third;
    struct node*fourth;

    first=(struct node*)malloc(sizeof(struct node));
    second=(struct node*)malloc(sizeof(struct node));
    third=(struct node*)malloc(sizeof(struct node));
    third=(struct node*)malloc(sizeof(struct node));

    first ->data=7;
    first->next=second;
    first->prev=NULL;

    second->data=11;
    second->next=third;
    second->prev=second;

    third->data=14;
    third->next=fourth;
    third->prev=NULL;

    insertion(first);
    insertion_at_beg(first,33);
    insertion(first);

}