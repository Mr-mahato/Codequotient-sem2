// this program is gonna add 1 to each digit 
#include <stdio.h>
/* Include other headers as needed */
int main()
{
  int n;
  scanf("%d",&n);
  while(n--)
  {
    int num;
    scanf("%d",&num);
    int c = 0;
    int temp = num;
    while(num!=0)
    {
      c++;
      num /=10;
    }
    int sum =0;
    while(c!=0)
    {
      sum = sum *10 + 1;
      c = c-1;
    }
    printf("%d\n",sum + temp);
  }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}