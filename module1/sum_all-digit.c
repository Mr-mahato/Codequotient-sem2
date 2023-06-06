#include <stdio.h>
/* Include other headers as needed */
int main()
{
	int n ;
  scanf("%d",&n);
  while(n--)
  {
	int a;
    int sum =0;
    scanf("%d",&a);
    while(a!=0)
    {
      sum = sum + a%10;
      a = a/10;
    }
    printf("%d\n",sum);
  }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}