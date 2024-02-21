#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data ;
     struct node* next;
};


int insertionlinkedlist(struct node *ptr)
{
    while(ptr!=NULL)
    {
        printf("element : %d\n  " , ptr->data);
        ptr=ptr->next;
    }
}
     struct node *deletionfirst(struct node *first, int data)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = ptr;
    ptr->next = ptr->first;
    return first; 
}


int main()
{
    struct node*first;
    struct node*second;
    struct node*third;
    struct node*fourth;
    struct node*five;


    //memory
    first =(struct node *)malloc(sizeof(struct node));
    second =(struct node *)malloc(sizeof(struct node));
    third =(struct node *)malloc(sizeof(struct node));
    fourth =(struct node *)malloc(sizeof(struct node));
    five=(struct node*)malloc(sizeof(struct node));


    first-> data= 6;
    first->next= second;
    //second->

    second->data=14;
    second->next=third;

    third->data=25;
    third->next=fourth;

    fourth->data=88;
    fourth->next=five;

    five->data =26;
    five->next=NULL;
     

    
     insertionlinkedlist(first);

     return 0;
   
}