#include <stdio.h>
/* Include other headers as needed */
int main()
{
  int t;
  scanf("%d",&t)
    ;
  while(t--)
  {
    int n;
    scanf("%d",&n);
    int matrix[n][n];
    for(int i=0;i<n;i++)
    {
      for(int j=0;j<n;j++)
      {
	scanf("%d",&matrix[i][j]);
        }
    }
    for(int i=0;i<n;i++)
    {
      for(int j=n-1;j>=0;j--)
      {
        printf("%d",matrix[j][i]);
      if(j!=0) printf(" ");
         }
      printf("\n");
    }
    printf("\n");
  }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}