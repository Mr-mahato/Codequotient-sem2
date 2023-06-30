//  this also being solved through recursion

#include<stdio.h>
int evenDigits(int n)
{
  if(n==0) return 0;
  else
  {
    if((n%10)%2==0)
    {
      return n%10 + evenDigits(n/10)*10;
    }
    else
      evenDigits(n/10);
  }
}



int main()
{
   int T, no;
   scanf("%d",&T);
   while(T--)
   {
     scanf("%d",&no);
     printf("%d\n",evenDigits(no));
   }
 return 0;
}

