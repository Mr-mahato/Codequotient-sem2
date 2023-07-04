// this program will merge two array
#include<stdio.h>
int * mergeArrays(int a[], int b[], int asize, int bsize) 
{
  int total = (asize+bsize);
    int k=0;
  for(int i=asize;i<total;i++)
  {
    a[i] = b[k++];
  }
  for(int i=0;i<total-1;i++)
  {
	for(int j = 0; j<total-1-i;j++)
    {
      if(a[j]>a[j+1])
      {
        int temp = a[j];
        a[j] = a[j+1];
        a[j+1] = temp;
      }
    }
  }
  return a;
}

int main()
{
    int i, k, size = 0, size1 = 0, *final;
   
    scanf("%d", &size);
    int a[size];
    for( i = 0; i < size; i++) 
        scanf("%d", &a[i]);

    scanf("%d", &size1);
    int b[size1];
    for( i = 0; i < size1; i++) 
        scanf("%d", &b[i]);
     
    final = mergeArrays(a, b, size, size1);
    
    for (i = 0; i < (size + size1); i++) 
        printf("%d\n", final[i]);

  return 0;
}
