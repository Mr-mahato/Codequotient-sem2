// this is swapping without use of third variable

#include <stdio.h>
/* Include other headers as needed */
int main()
{
int a,b;
  scanf("%d%d",&a,&b);
  a = a+b;
  b = a-b;
  a = a-b;
  printf("%d\n%d",a,b);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}