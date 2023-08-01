void strcatCode(char* str1, char* str2) {
  // Write your code here
  int k = 0,i;
  for( i =strlen(str1);i<strlen(str1)+strlen(str2);i++)
  {
    str1[i] = str2[k++];
  }
  str1[i] = '\0';
}