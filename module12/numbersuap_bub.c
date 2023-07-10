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
    int arr[n];
    for(int i=0;i<n;i++)
    {
      scanf("%d",&arr[i]);
    }
    int c= 0;
    for(int i=0;i<n-1;i++)
    {
      for(int j=0;j<n-1-i;j++)
      {
        if(arr[j]>arr[j+1])
        {
          int temp = arr[j];
          arr[j] = arr[j+1];
          arr[j+1] = temp;
          c++;
        }
      }
    }
    printf("%d\n",c);
  }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}