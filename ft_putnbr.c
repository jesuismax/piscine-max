#include <unistd.h>
int ft_putchar(char c)
{
  write(1, &c, 1);
  return (0);
}
void ft_putnbr(int nb)
{
  int a=0;
  if (nb<0){
    ft_putchar(45);
    nb=nb*-1;
  }
  int b=nb;
  while (b>10){
    a++;
    b/=10;
  }
  int c=a;
  while (c!=0){
    b=nb;
    while (a!=0){
      b/=10;
      a--;
    }
    int d=b%10;
    ft_putchar(d+48);
    c--;
    a=c;  
  }
  int e=nb%10;
  ft_putchar(e+48);
}  
int main ()
{
  ft_putnbr(-455);
  return (0);
}
