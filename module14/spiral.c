void printSpiral(int a[ROWS][COLS], int r, int c) {
  // Write your code here
  int rowstart = 0;
  int rowend = r-1;
  int colstart = 0;
  int colend = c-1;
  while(rowstart<=rowend && colstart<=colend)
  {
    for(int i =colstart;i<=colend;i++)
    {
      printf("%d\n",a[rowstart][i]);
    }
    rowstart++;
    for(int j = rowstart;j<=rowend;j++)
    {
      printf("%d\n",a[j][colend]);
    }
    colend--;
    if(rowstart<=rowend)
    {


    for(int j =colend;j>=colstart;j--)
    {
      printf("%d\n",a[rowend][j]);
    }
      }
    rowend--;
    if(colstart<=colend)
    {


    for(int j = rowend;j>=rowstart;j--)
    {
      printf("%d\n",a[j][colstart]);
    }
          }
    colstart++;

  }

}
int main()
{
  int r, c;
  scanf("%d %d", &r, &c);
  int a[ROWS][COLS], i, j;
  for(i = 0; i < r; i++)
    for(j = 0; j < c; j++)
      scanf("%d", &a[i][j]);
  printSpiral(a, r, c);
  return 0;
}