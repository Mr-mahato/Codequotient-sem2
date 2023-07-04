// this program will find the first occure 
#include <stdio.h>
/* Include other headers as needed */
int main()
{
  int t;
  scanf("%d",&t);
  while(t--)
  {
    int n , k;
    scanf("%d%d",&n,&k);
    int ar[n];
    for(int a = 0;a<n;a++)
    {
      scanf("%d",&ar[a]);
    }
    int flag = 0;
    for(int $=0;$<n;$++)
    {
      if(ar[$]==k)
      {
        printf("%d\n",$);
        flag = 1;
        break;
      }
    }
    if(flag==0)
    printf("-1\n");
  }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}