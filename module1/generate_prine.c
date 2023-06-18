// 
// Write a program to generate and print all the primes in the first n positive integers. 
#include <stdio.h>
/* Include other headers as needed */
int main()
{
  int limit,flag=1;
  scanf("%d",&limit);
  for(int i=2;i<=limit;i++)
  {
    for(int j=2;j<=i/2;j++)
    {
      flag=1;
      if(i%j==0)
      {
        flag=0;
        break;
      }
    }
    if(flag==1)
    {
      printf("%d\n",i);
    }
  }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}