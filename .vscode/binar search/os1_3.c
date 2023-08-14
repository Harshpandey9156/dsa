#include<stdio.h>
void main()
{
   int pid1,pid2,pid3;
   printf("parent id is %d and root id is %d\n",getpid(),getppid());
   pid1=fork();
   if(pid1==0)
   {
     printf("process1 id is%d and its parent id is %d\n",getpid(),getppid());
     pid2=fork();
     }
     if(pid2==0)
   {
     printf("process2 id is%d and its parent id is %d\n",getpid(),getppid());
     pid3=fork();
     }
     if(pid1==0 && pid2==0 && pid3==0)
     {
     printf("process3 id is%d and its parent id is %d\n",getpid(),getppid());
     }
     }

