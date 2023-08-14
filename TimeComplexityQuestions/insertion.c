#include<stdio.h>
#include <stdlib.h>
struct node {
    int data;
    struct node*next;
};
void insertion(struct node*ptr)
{
    while(ptr!=NULL)
    {
        printf("element : %d\n",ptr->data);
        ptr=ptr->next;
    }
}
struct node*insertionbeg(struct node*head,int data)
{
    struct node*ptr=(struct node*)malloc(sizeof(struct node));
    ptr->next=head;
    ptr->data=data;
    return ptr;
}
struct node*insertionatmid(struct node*head,int data,int index)
{
     struct node*ptr=(struct node*)malloc(sizeof(struct node));
     struct node*p=head;
     int i=0;
     while(i!=index-1)
     {
        p=p->next;
        i++;
     }
      ptr->data=data;


    
     ptr->next=p->next;
      p->next=ptr;
    
}
insertionatnode(struct node*head,int data,struct node*prevnode)
{
    struct node*ptr=(struct node*)malloc(sizeof(struct node));
    ptr=ptr->data;
    ptr->next=prevnode->next;
    prevnode->next=ptr;

}
int main ()
{
    struct node*head;
    struct node*second;
    //dynammic  element is located
    head=(struct node*)malloc(sizeof(struct node));
    head->data=25;
    head->next=second;
    //second insertion the list is as follpow


    second->data=12;
    second->next=NULL;
    //the elkemrbnt is insertes

    head=insertionbeg(head,11);
    insertion(head); 
    head=insertionatmid(head,33,1);
    insertion(head);
}