long solveQuery(int N, int W, int i, char ch)
{
  long sum=0;
  int x;
 if(ch=='C' && i>W)
   return sum;
  if(ch=='C')
  {
    for(x=i;x<=N;x=x+W)
      sum=sum+x;
  }
  else
    for(x=W*(i-1)+1;x<=N && x<=W*i;x++)
      sum=sum+x;
  return sum;
}
int main()
{
  int t,n,w,i;
  char c;
  scanf("%d",&t);
  for(int k=0;k<t;k++){
    scanf("%d %d %d %c",&n,&w,&i,&c);
    printf("%ld\n",solveQuery(n,w,i,c));
  }
  return 0;
}