#include "ft.h"
#include <stdio.h>
#include <stdlib.h>

int ft_lenstr(char *str)
{
  int i;
  int len;
  len = 0;
  i = 0;
  while (str[i])
  {
    if ((str[i] < 9 || str[i] > 13) && str[i] != 32)
      len++;
    i++;
  }
  return(len);
}

char *onlychar(char *str)
{
  int i;
  char *newstr;
  int j;
  newstr = (char*)malloc(sizeof(char) * ft_lenstr(str) + 1);
  i = 0;
  j = 0;
  while (str[i] != '\0')
  {
    if ((str[i] == '+' || str[i] == '-' || str[i] == '/' || str[i] == '%'|| str[i] == '*')
      ||(str[i] >= '0' && str[i] <= '9')|| str[i] == '(' || str[i] == ')')
      {
        newstr[j] = str[i];
        j++;
      }
        i++;
  }
  newstr[j] = '\0';
  return(newstr);
}

void stek (char *str)
{
  int disc;
  int i;
  int j;
  int k;
  int z;
  z = 0;
  int *numb;
  char *oper;

  disc = 1;
  i,j,k = 0,0,0;
  numb = (int*)malloc(sizeof(int) * ft_lenstr(str) + 4);
  oper = (char*)malloc(sizeof(char) * ft_lenstr(str) + 1);

  printf("%c\n", *oper);
  printf("%d\n", *numb);
  while (str[z] != '\0')
  {
    printf("%c\n", str[z]);
    z++;
  }
  while (str[i] != '\0')
  {
    numb[j] = 0;
    if (str[i] >= '0' && str[i] <= '9')
    {
      //printf("%c\n", *oper);
      printf("%d\n", *numb);
      while (str[i + 1] >= '0' && str[i] <= '9')
      {
        numb[j] = numb[j] * disc + (str[i] - 48);
        i++;
      }
      //printf("%c\n", *oper);
      printf("%d\n", *numb);
      j++;
    }
    if (str[i] == '-' || str[i] == '+' || str[i] == '*'
        || str[i] == '%'||str[i] == '/')
        {
          printf("%c\n", *oper);
          //printf("%d\n", *numb);
          oper[k] = str[i];
          k++;
        }
        printf("%c\n", *oper);
        //printf("%d\n", *numb);
    i++;
    }
    numb[j] = '\0';
    oper[k] = '\0';
    printf("%c\n", *oper);
    printf("%d\n", *numb);
}

// int slove(char *str)
// {
//   int i;
//   int i_end;
//   i = 0;
//
//   while (str[i] != '\0')
//   {
//     if (str[i] == ')')
//     {
//       i_end = i;
//       while (str[i] != '(')
//       {
//             i--;
//       }
//       str[i] =
//
//             //  if (str[i]);
//     }
//   }
// }
// //int ft_nbr()
//
// int inbox (int i_end,char *str)
// {
//   int i;
//   while (str[i] != '(')
//   {
//   //  str[]
//
//   }
// }
