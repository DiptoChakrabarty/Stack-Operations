#include<stdio.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define max 20
 
int top = -1, front = 0;
int a[max],b[max];
void push()
{
    int t;
    if(top==max)
    {
        printf("Stack Overflow ");
    }
    else
    {
        printf("Give element ");
        scanf("%d",&t);
        top++;
        a[top]=t;
        printf("NO added is %d\n",a[top]);
    }
}
void display()
{
    int i=0;
    for(i=0;i<=top;i++)
    {
        printf("%d\n",a[i]);
    }
}

void show()
{
    int j,i,k,p=0;
    for(i=0;i<=top;i++)
    {
        k=0;
        for(j=0;j<=top;j++)
        {
            if(a[j]==a[i])
            {
                k++;
            }
        }
        if(k==1)
        {
            b[p]=a[i];
            p++;
        }
        
    }
    for (i=0;i<p;i++)
    {
        printf("%d\n",b[i]);
    }
}

int main()
{
    int n;
    while(1>0)
    {
        printf("Choices are\n 1)Push\n 2)Show without duplicates\n 3)Show stacks\n 4)Exit\n");
  printf("Give your choice ");
  scanf("%d",&n);
  if(n==1)
  {
      push();
  }
  else if (n==2)
  {
      show();
  }
  else if(n==3)
  {
      display();
  }
  else if(n==4)
  {
     break;
  }
    }
  
  return 0;
}























