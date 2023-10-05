int findOddMan(int n, int arr[]) {
  // Write your code here
  int xor = 0;
  for(int i=0;i<n;i++)
  {
	xor = xor ^ arr[i];
  }
  return xor;
}