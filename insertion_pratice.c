#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
void insertionlist( struct node *ptr)
{
    while(ptr!=NULL)
    {
        printf("element is %d", ptr->data);
        ptr=ptr->next;
    }
}
struct node *insertatfirst(struct node *first, int data)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->next = first;
    ptr->data = data;
    return ptr;
}
int main()
{
    
}
