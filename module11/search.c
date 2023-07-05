#include<stdio.h>
int searchRotatedSortedArray(int arr[], int n, int k) {
  // Write your code here
  int l = 0 , r = n-1;
  int flag = 1;
    for(int i=0;i<n;i++)
    {
      if(arr[i] == k)
      {
        return i;
        flag = 0;
      }
    }
  if(flag ==1)
  {
    return -1;
  }
}
int main()
{
  int T, i, size = 0,target;
  scanf("%d", &T);

  while (T--)
  {
    scanf("%d", &target);
    scanf("%d", &size);

    int arr[size];
    for( i = 0; i < size; i++) 
      scanf("%d", &arr[i]);

    printf("%d\n",searchRotatedSortedArray(arr, size, target));
  }
  return 0;
}

