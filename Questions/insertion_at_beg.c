    #include <stdio.h>
    #include <stdlib.h>
    struct node
    {
        int data;
        struct node *next;
    };
void insertionlist(struct node *ptr)
{
    while (ptr != NULL)
    {
        printf("elemrnt  %d\n", ptr->data);
        ptr = ptr->next;
    }
}
struct node *insertatfirst(struct node *first, int data)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->next = first;
    ptr->data = data;
    return ptr;   
}
struct node *insertatmid(struct node *first, int data, int index)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    struct node *p = first;
    int i = 0;
    while (i != index - 1)
    {
        p = p->next;
        i++;
    }
    ptr->data = data;

    ptr->next = p->next;
    p->next = ptr;

    return first;
}
struct node *afternode(struct node *first,struct node* prevnode, int data)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    //struct node *p = first;
    //int i = 0;
    //while (p->next!=NULL)
    //{
    //    p = p->next;
    //   // i++;
    //}
    ptr->data = data;

    //ptr->next = p->next;
    ptr->next = prevnode->next;
    prevnode->next=ptr;

    return first;
}




struct node *insertatend(struct node *first, int data)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    struct node *p = first;
    int i = 0;
    while (p->next!=NULL)
    {
        p = p->next;
       // i++;
    }
    ptr->data = data;

    //ptr->next = p->next;
    p->next = ptr;
    ptr->next=NULL;

    return first;
}
int main()
{

    struct node *first;
    struct node *second;
    struct node *third;
    struct node *fourth;

    // memory
    first = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    fourth = (struct node *)malloc(sizeof(struct node));

    first->data = 6;
    first->next = second;

    second->data = 14;
    second->next = third;

    third->data = 25;
    third->next = fourth;

    fourth->data = 88;
    fourth->next = NULL;
    //
    //  insertionlist(first);
    //  first=insertatfirst(first,42);
    insertionlist(first);

    first = insertatmid(first, 42, 1);
    insertionlist(first);
   first = insertatend(first,89);
       insertionlist(first);
       first=afternode(first,second,44);
       insertionlist(first);


    return 0;
}