int rotationCount(int arr[], int n)
{
  int min,c=0,flag=0;
  for(int i=0;i<n;i++)
  {
    min =i;
    for(int j=i+1;j<n;j++)
    {
      if(arr[min]>arr[j])
      {
        min = j;
        flag=1;
      }
    }
    if(min!=i)
    {
      c++;
    }
  }
  if(flag==1)
  return c;
  else
    return -1;
}

int main()
{
  int T, i, size = 0;
  scanf("%d", &T);

  while (T--)
  {
    scanf("%d", &size);

    int arr[size];
    for( i = 0; i < size; i++) 
      scanf("%d", &arr[i]);

    printf("%d\n",rotationCount(arr, size));
  }
  return 0;
}
