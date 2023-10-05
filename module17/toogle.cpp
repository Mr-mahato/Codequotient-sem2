int toggleExceptKthBit(int n,int k){
  // Write your code here
  n = (~n);
  int bitMask = (1<<k);
  return n^bitMask;
}