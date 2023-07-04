// this program will find the pair of element equal to sum
int getPairsCount(int arr[], int n, int k) {
  // Write your code here
  int l = 0, r = n-1,c=0;
  while(l<r)
  {
    if(arr[l]+arr[r]>k)
    {
      r--;
    }
    else if(arr[l]+arr[r]<k)
    {
      l++;
    }
    else
    {
      int x = arr[l];
      int xcount =0;
      int y  = arr[r];
      int ycount = 0;
      while(l<=r && arr[l]==x)
      {
        xcount++;
        l++;
      }
      if(x!=y)
      {
        while(l<=r && arr[r]==y)
        {
          r--;
          ycount++;
        }
        c = c+ xcount*ycount;
      }
      else
      {
        c+=xcount*(xcount-1)/2;
      }
    }
  }
  return c;
}

int main()
{
  int T, n, k;
  scanf("%d", &T);
  while(T--)
  {
    scanf("%d%d", &n, &k);
    int arr[n];
    for(int i=0; i<n; i++)
      scanf("%d", &arr[i]);
    printf("%d\n", getPairsCount(arr, n, k));
  }
  return 0;
}