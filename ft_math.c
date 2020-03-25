#include "ft.h"

int prior(char c)
{
  if(c == '-' || c == '+')
    return (2);
  else if (c == '/' || c == '%' || c == '*')
    return (1);
  return (0);
}

int ft_math(char c ,int a, int b)
{
  if (c == '-')
    return (a - b);
  if (c == '+')
    return (a + b);
  if (c == '*')
      return (a * b);
  if (c == '/')
      return (a / b);
  if (c == '%')
      return (a % b);
  return(0);
}
