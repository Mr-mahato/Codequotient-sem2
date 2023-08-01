int strcmp(const char* str1, const char* str2) {
  // Write your code here
  for(int i =0;i<strlen(str1);i++)
  {
    if(str1[i]!=str2[i])
    {
      return str1[i]-str2[i];
    }
  }
  return 0;
}