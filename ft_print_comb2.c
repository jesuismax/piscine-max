#include <unistd.h>
int ft_putchar(int c)
{
  write(1, &c, 1);
  return (0);
}
void ft_print_comb2()
{
  int a=0;
  int b=0;
  while (a<100){
    while (b<100){
      if (a!=b){	
	int c=b%10;
	int d=b/10;
	int e=a%10;
	int f=a/10;
	ft_putchar(f+48);
	ft_putchar(e+48);
	ft_putchar(' ');
	ft_putchar(d+48);
	ft_putchar(c+48);
	ft_putchar(',');
	ft_putchar(' ');
      }
      b++;
    }
    a++;
    b=a;
  }      
}
int main ()
{
  ft_print_comb2();
  return (0);
}
