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
    int temp = n;
    int res = 0;
    while(temp!=0)
    {
      res  = res*10 + temp%10;
      temp = temp/10;
    }
    if(res==n) printf("Equal\n");
    else printf("Not Equal\n");
  }

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}