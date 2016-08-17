#include <unistd.h>
#include "ft.h"


void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	ft_rot(char *str, int rot)
{
	int i;
	char a;

	i = 0;
	while (str[i] != '\0')
	{
		a = str[i];

			/*
			Gestion des majuscules
			*/

			if( a >= 97 && a <= 122 )
			{
				a = a + rot;

				if( a > 122 )
				{
					ft_putchar(a -26);
				}
				else
				{
					ft_putchar(a);
				}
			}

			/*
			Gestion des minuscules - à corriger ca dépasse le 127 de l'ascii
			*/

			else if(a <= 90 && a >= 65)
			{
				a = a + rot;

				if(a > 90)
				{
					ft_putchar(a -26);
				}
				else
				{
					ft_putchar(a);
				}
			}
			else
			{
				ft_putchar(a);
			}
		i++;
	}
}

void	ft_putnbr(int nb)
{
	if (nb < 0 )
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb >= 10 )
	{
		ft_putnbr(nb / 10);
	}

	ft_putchar((nb %10)+ '0' );
}

void	ft_alphabet(char c)
{
	while (c < 127)
	{
		ft_putchar(c);
		c ++;
	}
}
