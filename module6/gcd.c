
#include<stdio.h>
int gcd(int i, int j){
  // Write your code here
  if(j==0) return i;
  else 
    return gcd(j,i%j);
}

int main(){
  int i, j;
  scanf("%d",&i);
  scanf("%d",&j);
  printf("%d\n",gcd(i, j));
  return 0;
}