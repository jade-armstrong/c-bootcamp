
int ft_sqrt(int nb)
{
  int sqrt = 1;
  while (sqrt*sqrt < nb)
  {
    sqrt++;
  }

  return sqrt;
}
