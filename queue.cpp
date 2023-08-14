#include<stdio.h>
#include<malloc.h>
struct queue{
    int size;
    int f;
    int r;
    int*arr;
};


int main()
{
    struct queue *q;
    q->size=6;
    //q.f=r.q=-1;
    q->arr=(int *)malloc(q->size*sizeof(int));


}