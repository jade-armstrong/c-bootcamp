typedef struct s_queen_struct
{
  int count;
  int pos[8];
} t_queen_struct;

int ft_abs(int n)
{
  if (n < 0)
  {
    return (n * -1);
  }

  return n;
}

int ft_place(int i, t_queen_struct *queen_struct)
{
  int j = 0;
  while ((queen_struct->pos[i] != queen_struct->pos[j]) && (ft_abs(queen_struct->pos[i] - queen_struct->pos[j]) != ft_abs(i - j)))
  {
    j++;
  }
  if (i == j)
  {
    return 1;
  }
  else 
  {
    return 0;
  }
}

void  ft_solve_queen(int i, t_queen_struct *queen_struct)
{
  int c = 0;
  queen_struct->pos[i] = 0;
  while (queen_struct->pos[i] < 8)
  {
    if (ft_place(i, queen_struct) == 1)
    {
        if (i ==7)
        {
          while (c < 8)
          {
            ft_putnbr(queen_struct->pos[c]);
            c++;
          }
          ft_putchar('\n');
        }
        else ft_solve_queen(i+1, queen_struct);
    }
    queen_struct->pos[i]++;
  }
}

int ft_eight_queens_puzzle(void)
{ 
  int i = 0;
  t_queen_struct queen_struct;
  queen_struct.count = 0;
  while (i < 8)
  {
    queen_struct.pos[i] = 0;
    i++;
  }
  ft_solve_queen(0, &queen_struct);
  return queen_struct.count;
}