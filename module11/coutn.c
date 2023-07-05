#include <stdio.h>
/* Include other headers as needed */
int main()
{
  int t;
  scanf("%d",&t);
  while(t--)
  {
    int n,k,c=0;
    scanf("%d%d",&n,&k);
    int arr[n];
    for(int i=0;i<n;i++)
    {
      scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
      if(arr[i]==k)
      {
        c++;
      }
    }
    printf("%d\n",c);
  }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}