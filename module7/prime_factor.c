//  this is the problem which is done through recursion
#include <stdio.h>
void primeFactor(int no , int k)
{
  if(no<2) return ;
  else
  {
    if(no%k==0)
    {
      printf("%d\n",k);
      primeFactor(no/k , k);
    }
    else 
    {
      k++;
      primeFactor(no,k);
    }
  }
}
int main()
{
   int no;
   scanf("%d",&no);
	int k = 2;
  primeFactor(no , k);
   return 0;
}