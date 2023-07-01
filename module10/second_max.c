#include <stdio.h>
/* Include other headers as needed */
int main()
{
  int n;
  scanf("%d",&n);
  int arr[n];
    int max = -100000000;
  for(int i=0;i<n;i++)
  {
    scanf("%d",&arr[i]);
    if(arr[i]>max)
    {
      max = arr[i];
    }
  }
  int check = arr[0],c=0;
  int sec_max = -1000000;
  for(int i=0;i<n;i++)
  {
    if(arr[i]>sec_max && arr[i]<max)
    {
      sec_max = arr[i];
    }
    if(arr[i]==check)
    {
      c++;
    }
  }
  if(c==n)
  {
    printf("0");
  }
  else
  printf("%d",sec_max);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}