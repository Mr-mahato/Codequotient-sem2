// Given a set of n students examination marks ( in the range 0 to 100) make a count of the number of students that passed the examination. A pass is awarded for all marks of 50 and above.
#include <stdio.h>
/* Include other headers as needed */
int main()
{
  int cse,count=0,num;
  scanf("%d",&cse);
  for(int i=0;i<cse;i++)
  {
    scanf("%d",&num);
    if(num>=50)
    {
      count++;
    }
  }
printf("%d",count);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}