/*
 * Complete the function below.
 * Please store the size of the int array to be returned in result_size pointer. For example,
 * int a[3] = {1, 2, 3};
 * *result_size = 3;
 * return a;
 * 
 */
int dummy[20] = {0};
int* cutSticks(int lengths_size, int *lengths, int *result_size) 
{
	int temp = lengths_size,k=0,m=0;
  while(temp--)
  {
    int c = 0,min = 1000000;
  for(int i=0;i<lengths_size;i++)
  {
    if(lengths[i]<min && lengths[i]!=0)
    {
      min = lengths[i];
    }
  }
    for(int i=0;i<lengths_size;i++)
    {
      if(lengths[i]>0)
      {
        lengths[i] -=min;
        c++;
      }
    }
    if(c>0)
    {
      m++;
    }
    if(min!=1000000)
    {
      dummy[k++] = c;
   // printf("%d\n",c);
      }
      }
  *result_size = m;
  return dummy;
}

int main()
{
  int *res, res_size, lengths_size = 0, i;
  scanf("%d", &lengths_size);

  int lengths[lengths_size];
  for(i = 0; i < lengths_size; i++) 
    scanf("%d", &lengths[i]);

  res = cutSticks(lengths_size, lengths, &res_size);
  for (i = 0; i < res_size; i++) 
    printf("%d\n", res[i]);

  return 0;
}