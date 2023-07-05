#include<stdio.h>
int getMissingElement(int A[], int A_size, int B[], int B_size) {
  // Write your code here
  int sum1=0;
  int sum2 = 0;
  for(int i=0;i<A_size;i++)
  {
	sum1 +=A[i];
  }
  for(int j=0;j<B_size;j++)
  {
    sum2 +=B[j];
  }
  return sum1-sum2;
}

int main(){
  int t;
  scanf("%d",&t);
  while(t--){
    int n,m;
    scanf("%d%d",&n,&m);
    int *a = (int*)calloc(n,sizeof(int));
    int *b = (int*)calloc(m,sizeof(int));
    for(int i = 0;i<n;i++){
      scanf("%d",&a[i]);
    }
    for(int j = 0;j<m;j++){
      scanf("%d",&b[j]);
    }
    printf("%d\n",getMissingElement(a,n,b,m));
  }
  return 0;
}