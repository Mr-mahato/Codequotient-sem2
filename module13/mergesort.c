// Merges two subarrays of arr[].
// First subarray is arr[l..m] and Second subarray is arr[m+1..r]
void merge(int array[], int l, int m, int r) {
  int i = l , j = m+1 , k=l;
  int temp[r];
  while(i<=m && j<=r)
  {
    if(array[i]<array[j])
    {
      temp[k++] = array[i++];
    }
    else {
      temp[k++] = array[j++];
    }
  }
  if(j>r)
  {
    while(i<=m)
    {
      temp[k++] = array[i++];
    }
  }
  else
  {
	while(j<=r)
    {
      temp[k++] = array[j++];
    }
  }
  for(int i=l;i<=r;i++)
  {
    array[i] = temp[i];
  }
}
/* l is for left index and r is right index of the sub-array of arr to be sorted */
void mergeSort(int array[], int l, int r) {
 if(l<r)
 {
   int mid = (l+r)/2;
   mergeSort(array,l,mid);
   mergeSort(array,mid+1,r);
   merge(array,l,mid,r);
 }
}

int main()
{
  int i,n, arr[50];
  scanf("%d",&n);
  for(i=0;i<n;i++)
    scanf("%d",&arr[i]);

  mergeSort(arr, 0, n-1);
  for (i=0; i < n; i++)
    printf("%d ", arr[i]);
  return 0;
}