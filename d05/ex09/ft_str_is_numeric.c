#include <unistd.h>

void ft_putchar(char c)
{
  write(1,&c,1);
}

void ft_putnbr(int nb)
{
  long i;
  i = nb;

  if (i < 0)
  {
    ft_putchar('-');
    i = i * (-1);
  }
  if (i > 9)
  {
    ft_putnbr(i / 10);
    ft_putnbr(i % 10);
  }
  else if (i < 10)
  {
    ft_putchar(i + '0');
  }
}

int ft_str_is_numeric(char *str)
{
  int i = 0;

  while (str[i] != '\0')
  {
    if (!(str[i] >= '0' && str[i] <= '9'))
    {
      return 0;
    }
    i++;
  }

  return 1;
}

int main()
{
  char *str = "";
  ft_putnbr(ft_str_is_numeric(str));
  return 0;
}