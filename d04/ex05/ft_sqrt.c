
int ft_sqrt(int nb)
{
  int sqrt = 1;
  while (sqrt*sqrt < nb)
  {
    sqrt++;
  }

  if (sqrt < 0)
  {
    return 0;
  }
  else
  {
    return sqrt;
  }
}
