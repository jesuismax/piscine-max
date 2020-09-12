#include <unistd.h>
int ft_putchar(char c)
{
  write(1, &c, 1);
  return (0);
}
void ft_print_comb(){
  int a='0';
  int b='0';
  int c='0';
  while (a!=58){
     while (b!=58){
       while (c!=58){
          if ((a!=b)&&(a!=c)&&(b!=c)){
	     ft_putchar(a);
	     ft_putchar(b);
	     ft_putchar(c);
	     ft_putchar(44);
	     ft_putchar(32);
	  }
	  c++;
       }
       b++;
       c='0';
     }
     b='0';
     a++;
   }
}
int main ()
{
  ft_print_comb();
  return (0);
}
