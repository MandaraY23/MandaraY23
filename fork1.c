#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
int main()
{
printf("Before fork()\n");
pid_t p=fork();
if (p<0)
{
printf("fork failed\n");
}
else if(p==0)
{
printf("My ID is:%d\n",getpid());
printf("My parents ID is:%d\n",getppid());
}
else
{
printf("My ID is:%d\n",getpid());
printf("My child's ID is:%d\n",p);
}
printf("Done\n");
}
