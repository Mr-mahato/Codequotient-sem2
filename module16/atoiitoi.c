void itoa(int num, char* result) {
  // Write your code here
  if(num==0)
  {
    result[0]='0';
    result[1]='\0';
    return;
  }
  	int temp = num,c=0;
  while(temp!=0)
  {
    c++;
    temp = temp/10;
  }
	for(int i=c-1;i>=0;i--)
    {
      result[i] = (num%10 + '0');
      num = num/10;
    }
  result[c]='\0';
}
int atoi(char *str) {
  // Write your code here
  int num,res=0;
  int len = strlen(str);
for(int i=0;i<len;i++)
{
  num = str[i]-'0';
  res = res*10 + num;
}
  return res;
}