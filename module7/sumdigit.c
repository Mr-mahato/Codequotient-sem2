// this program will sum every digit using recursion 
#include<stdio.h>

int sumOfDigits(int n)
{
  if(n==0) return 0;
  else
    return n%10 + sumOfDigits(n/10);
}

int main()
{
   int T, no;
   scanf("%d",&T);
   while(T--)
   {
     scanf("%d",&no);
     printf("%d\n",sumOfDigits(no));
   }
  return 0;
}
