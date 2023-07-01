#include<stdio.h>
#include<math.h>
#include<string.h>
int binaryToDecimal(char binary[]) {
  // Write your code here
  int size = strlen(binary);
  int temp =0,sum =0,k=0;
  for(int i=size-1;i>=0;i--)
  {
    temp = (binary[i]=='0')?0:1;
    sum += temp*pow(2,k++);
  }
  return sum;
}

int main(){
    int T;
    char no[32];
    scanf("%d",&T);
    while(T--){
        scanf("%s",no);
        printf("%d\n",binaryToDecimal(no));
    }
 	return 0;
}
