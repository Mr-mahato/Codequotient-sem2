int countBits(int num)
{
  int rem,res=0,temp,count=0;
  temp =num;
  while(temp!=0)
  {
    rem = temp % 2 ;
    res = res* 10 + rem;
    temp = temp/2;
  }
  rem=0;
  while(res!=0)
  {
    rem =res %10;
    if(rem!=0)
    {
      count++;
    }
    res=res/10;
  }
  return count;
}