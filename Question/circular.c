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

    head->data=6;
    head->next=second;

    second->data=11;
    second->next=third;

    third->data=45;
    third->next=fourth;

    fourth->data=49;
    fourth->next=head;

    insertionlist(head);




}