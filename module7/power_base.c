#include<stdio.h>
long power(int base, int exp) {
  // Write your code here
  if(exp<0) return -1;
  if(exp==0) return 1;
  else
  {
	return base * power(base , exp-1);
  }
}

int main()
{
   int T, base, exp;
   scanf("%d",&T);
   while(T--)
   {
      scanf("%d",&base);
      scanf("%d",&exp);
     
     printf("%ld\n", power(base, exp));
   }
    return 0;
}