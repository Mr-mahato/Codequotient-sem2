// this program is gonna find the factorial of any nunmber

/*
 * Complete the function 'factorial' given below
 * @params
 *  n -> an integer whose factorial is to be calculated
 * @return
 *  The factorial of integer n
 */
#include<stdio.h>
int factorial(int n) {
  // Write your code here
  if(n==0) return 1 ;
  else
    return n*factorial(n-1);
}

int main()
{
   int T, no;
   scanf("%d",&T);
   while(T--)
   {
     scanf("%d",&no);
     printf("%d\n",factorial(no));
   }
 return 0;
}