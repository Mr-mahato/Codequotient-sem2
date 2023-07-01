#include<stdio.h>
int decimalToBinary(int n)
{
   if(n==0) return 0;
  else
  {
    return n%2 + decimalToBinary(n/2)*10;
  }
}

int main()
{
   int T, no;
   scanf("%d",&T);
   while(T--)
   {
     scanf("%d",&no);
     printf("%d\n",decimalToBinary(no));
   }
 return 0;
}
