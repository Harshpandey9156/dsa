#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*next;
};

void insertionlist(struct node*head)
{
    struct node * ptr=head;
    //ptr=ptr->next;

    do
    {
        printf("element is : %d \n",ptr->data);
        ptr=ptr->next;
    }while(ptr!=head);
}
struct node *insertionatfirst(struct node* head,int data)
{
    struct node *ptr=(struct node*)malloc(sizeof(struct node));
    ptr->data=data;

    struct node*p=head->next;
    while(p->next!=head)
    {
        p=p->next;
    }
        p->next=ptr;
        ptr->next=head;
        head=ptr;

    return head;
}
struct node* insertionbwtnnode(struct node* head,int data ,int index)
{
  struct node *p =(struct node *)malloc(sizeof(struct node));
  struct node *ptr=p->next;
  //while()


}
int main()
{
    struct node*head;
    struct node*second;
    struct node*third;
    struct node*fourth;

    head=(struct node *)malloc(sizeof(struct node));
    second=(struct node *)malloc(sizeof(struct node));
    third=(struct node *)malloc(sizeof(struct node));
    fourth=(struct node *)malloc(sizeof(struct node));
    //the value tn
    head->data=6;
    head->next=second;

    second->data=11;
    second->next=third;

    third->data=45;
    third->next=fourth;

    fourth->data=49;
    fourth->next=head;
    //before insertion the list is listed 
    printf("before insertion");
    insertionlist(head);
    insertionatfirst(head,97);
    //after insertion in first;
    printf("after insertion \n");\
    insertionlist(head);




}