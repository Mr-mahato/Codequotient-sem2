#include <stdio.h>
/* Include other headers as needed */
int main()
{
  int t;
  scanf("%d",&t);
  while(t--)
  {
    int n;
    scanf("%d",&n);
    printf("%0.2f\n",(float)sqrt(n));
  }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}