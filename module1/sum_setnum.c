// Given a set of n numbers , write a program to add these numbers and return the resultant sum.

#include <stdio.h>
/* Include other headers as needed */
int main()
{
  int num,sum=0;
  int cse;
  scanf("%d",&cse);
  for(int i=0;i<cse;i++)
  {
    scanf("%d",&num);
    sum = sum+num;
  }
	printf("%d",sum);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}