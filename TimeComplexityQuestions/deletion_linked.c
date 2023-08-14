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
struct node*insertionatnode(struct node*head,int data,struct node*prevnode)
{
    struct node*ptr=(struct node*)malloc(sizeof(struct node));
    ptr =ptr->data;
    ptr->next=prevnode->next;
    prevnode->next=ptr;
    return ptr;

}
struct node*deletion(struct node*head)
{
    struct node*ptr=head;
    head=head->next;
    free(ptr);
    return head;


}
struct node*delete_for_index(struct node*head,int index)
{
    struct node*p=head;
    struct node*q=p->next;
    for (int i = 0; i < index-1; i++)
    {
        p=p->next;
        q=q->next;

    }
    p->next=q->next;
    free(q);
    return head;
    
}
struct node*delete_for_end(struct node*head )
{
    struct node*p=head;
    struct node*q=p->next;
    while(q->next!=NULL)
    {
        p=p->next;
        q=q->next;

    }
    p->next=NULL;
    free(q);
    return head;
    
}
struct node*delete_for_value(struct node*head,int value )
{
    struct node*p=head;
    struct node*q=p->next;
    while(q->data!=value &&q->next!=NULL)
    {
        p=p->next;
        q=q->next;

    }
    if(q->data==value)
    {
        p->next=q->next;
        free(q);

    }
    //p->next=NULL;
    //free(q);
    return head;
    
}





int main ()
{
    struct node*head;
    struct node*second;
    head=(struct node*)malloc(sizeof(struct node));
    head->data=25;
    head->next=second;
    second->data=12;
    second->next=NULL;
    head=insertionbeg(head,11);
    //insertion(head); 
    head=insertionatmid(head,33,1);
    //head=insertionatnode(head,88,second);
    insertion(head);
    printf("before deletion\n");
    //head=deletion(head);
    head=delete_for_value(head, 33);
    insertion(head);    

}