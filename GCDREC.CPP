#include<stdio.h>
#include<conio.h>
int gcd(int m,int n)
{
  int rem;
  rem=m%n;
  if(rem==0) return n;
  else
     return (gcd(n,rem));
}
void main()
{
  int n,m,res;
  clrscr();
  printf("Enter Two number\n");
  scanf("%d%d",&m,&n);
  res=gcd(m,n);
  printf("GCD of %d and %d = %d\n",m,n,res);
  getch();
}