#include <stdio.h>
int main(){
  // Write your code here
  int cse,num;
  int res=0;
  scanf("%d",&cse);
  for(int i=0;i<cse;i++)
  {
	scanf("%d",&num);
    res=res*10+num;
  }
  printf("%d",res);
  return 0;
}