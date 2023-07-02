int maxFrequency(int A[], int n) {
  // Write your code here
  int temp[1001] = {0};
  for(int i=0;i<n;i++)
  {
    temp[A[i]]++;
  }
  int max = -100,res=0;
  for(int i=0;i<1001;i++)
  {
    if(temp[i]>0 && temp[i]>max)
    {
      max = temp[i];
      res = i;
    }
  }
  return res;
}

int main()
{
  int t, n, i, k;
  scanf("%d", &t);
  while(t--)
  {
    scanf("%d", &n);
    int a[n];
    for(i=0;i<n;i++)
      scanf("%d", &a[i]);
    printf("%ld\n", maxFrequency(a, n));
  }
  return 0;
}