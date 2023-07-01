// this program will find the consecutinve three number
/*
 * Complete the function 'threeConsecutive' below
 * @params
 *   a,b,c -> integers which are to be checked
 * @return
 * An integer, 1 if the numbers are consecutive else 0
 */
#include<stdio.h>
int threeConsecutive(int a, int b, int c){
  // Write your code here
  int arr[3] = {a,b,c};
  for(int i=0;i<3;i++)
  {
    for(int j=i;j<3;j++)
    {
      if(arr[i]>arr[j])
      {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
      }
    }
  }
    if(arr[1]-arr[0]==1 && arr[2]-arr[1]==1)
    {
      return 1;
    }
    else return 0;
}

int main()
{
   int T, a, b,c;
   scanf("%d",&T);
   while(T--)
   {
      scanf("%d",&a);
      scanf("%d",&b);
      scanf("%d",&c);
     
     printf("%d\n",threeConsecutive(a, b, c));
   }
  
    return 0;
}
