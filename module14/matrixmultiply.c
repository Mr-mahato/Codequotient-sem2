// Print the resultant matrix after (A * B)
void multiplyMatrix(int A[SIZE][SIZE],int B[SIZE][SIZE],int R1,int C1,int R2,int C2)
{
  // Write your code here
  int sum = 0;
  int res[R1][C2];
  for(int i =0;i<R1;i++)
  {
	for(int j = 0;j<C2;j++)
    {
      sum = 0;
      for(int k = 0;k<R2;k++)
      {
        sum +=A[i][k]*B[k][j];
      }
      res[i][j] = sum;
    }
  }
 // printf("Hello world");
  for(int i =0;i<R1;i++)
  {
    for(int j = 0;j<C2;j++)
    {
      printf("%d ",res[i][j]);
    }
    printf("\n");
  }

}