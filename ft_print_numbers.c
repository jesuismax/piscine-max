#include <unistd.h>
int ft_putchar(char c)
{
  write(1, &c, 1);
  return (0);
}
void ft_print_numbers()
{
  int numbers='0';
  while( numbers<='9')
  {
    ft_putchar(numbers);
    numbers++;
  }
}
int main ()
{
  ft_print_numbers();
  return (0);
}


