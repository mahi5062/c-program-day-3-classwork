#include <stdio.h>
int main()
{
  char s1[100] = "programming ", s2[100] = "is awesome";
  int length, i;
  length = 0;
  while (s1[length] != '\0') 
  {
    ++length;
  }
    for (i = 0; s2[i] != '\0'; ++i, ++length) 
  {
    s1[length] = s2[i];
  }
  s1[length] = '\0';
  printf("After concatenation: ");
  puts(s1);

  return 0;
}
