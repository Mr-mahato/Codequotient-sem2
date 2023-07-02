void merge(int a[], int l , int mid , int r)
{
  int i = l ,  j = mid+1,k = l;
  int temp[r];
  while(i<=mid && j<=r)
  {
    if(a[i]<a[j])
    {
      temp[k++]=a[i++];
    }
    else 
    {
      temp[k++] = a[j++];
    }
  }
  if(j>r)
  {
    while(i<=mid)
    {
      temp[k++] = a[i++];
    }
  }
  else 
  {
	while(j<=r)
    {
      temp[k++]  =  a[j++];
    }
  }
  for(int i=l;i<=r;i++)
  {
    a[i] = temp[i];
  }
}
 void mergesort(int array[] , int l , int r)
{
  if(l<r)
  {
    int mid = (l+r)/2;
    mergesort(array,l,mid);
    mergesort(array,mid+1,r);
    merge(array,l,mid,r);
  }
}
int kthLargest(int arr[], int size, int k) {
  // Write your code here
  int l = 0 , h = size-1;
  mergesort(arr,l,h);
  return arr[size-1-k];
}

int main()
{
    int T, i, k, size = 0;
    scanf("%d", &T);

  while (T--)
  {
    scanf("%d", &k);
    scanf("%d", &size);

    int arr[size];
    for( i = 0; i < size; i++) 
        scanf("%d", &arr[i]);
    
        printf("%d\n",kthLargest(arr, size, k));
  }
  return 0;
}