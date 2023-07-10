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
    int min = 0,c=0;
    for(int i=0;i<n;i++)
    {
      min = i;
	for(int j=i;j<n;j++)
    {
      if(arr[j]<arr[min])
      {
        min = j;
      }
    }
      if(min!=i)
      {
        int temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
        c++;
      }
    }
    printf("%d\n",c);
  }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}