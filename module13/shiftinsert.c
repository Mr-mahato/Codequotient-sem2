#include <stdio.h>
/* Include other headers as needed */
int main()
{
  int t;
  scanf("%d",&t);
  while(t--)
  {
    int n,c=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
	scanf("%d",&arr[i]);
    }
    for(int i=1;i<n;i++)
    {
      int key =  arr[i];
      int j = i-1,flag=0;
      while(key<=arr[j] && j>=0)
      {
        c++;
        flag =1;
        arr[j+1] = arr[j];
        j = j-1;
      }
      if(flag==1) c++;
      arr[j+1] = key;
    }
 printf("%d\n",c);
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}