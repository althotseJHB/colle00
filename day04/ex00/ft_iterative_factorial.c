int ft_iterative_factorial(int nb)
{
  int num;
  int i;

  i = 1;
  num = 1;

  if (nb > 12 || nb < 0)
  return (0);



  if (nb == 1 || nb == 0)
    return (1);

      while (nb > i )
      {
          num = nb * num;
          nb--;
      }

return (num);
}
