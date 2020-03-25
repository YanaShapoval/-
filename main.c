#include "ft.h"
#include <stdio.h>

int main(int argc, char **argv)
{
  int z = 0;
  char* newstr;
  if (argc == 2)
  {
    newstr = onlychar(argv[1]);
    printf("%s \n", onlychar(argv[1]));
    while (newstr[z] != '\0')
    {
      printf("%c\n", newstr[z]);
      z++;
    }
    stek(newstr);
  }
  else
    printf("%s\n", "fail");
  return(0);
}
