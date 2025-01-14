#include<stdio.h>
#include<conio.h>
//int count=0;
void tower(int n,char source,char dest,char spare)
{
   if(n==1)
   {
     printf("Move disc  from %c to %c\n",source,dest);
    // count++;
     return;
   }
  else
   {
      tower(n-1,source,spare,dest);
      tower(1,source,dest,spare);
      tower(n-1,spare,dest,source);
   }
}

void main()
{
  int  n;
  clrscr();
  printf("Enter the number of disc\n");
  scanf("%d",&n);
  tower(n,'A','C','B');
  //printf("Total number of disc moves=%d",count);
  getch();
}