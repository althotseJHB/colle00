/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: althotse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/15 08:08:40 by althotse          #+#    #+#             */
/*   Updated: 2020/07/15 10:54:24 by althotse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_putchar.c"
#include <stdlib.h>


void rush(int x, int y)
{
  char c;
  int a =0;
  while ( a < y)
  {
	  int b =0;
      while ( b < x)
	  {
        if ((a == 0 || a == y-1) && (b == 0 || b== x-1))
		{
          c='/';
		}
        else if (a == 0 || a == y-1)
		{
          c = '*';
		}
        else if (b ==0 || b == x-1)
		{
          c = '*';
		}
        else
		{
		   	c = ' ';
		}
          ft_putchar(c);
		  b++;
	  }
	  a++;
      ft_putchar('\n');
  }
}















//
// #include	"ft_putchar.c"
//
// int ft_rush(void);
//
// void func1()
// {
// 	int		x='0';
// 	char	d='o';
// 	char	f='-';
//
// 	while(x>=1)
// 	{
// 		if(x==1||x==5)
// 		{
// 			ft_putchar(d);
// 		}
// 		else
// 		{
// 			if(x==1)
// 			{
// 			ft_putchar(f);
// 			}
// 		}
// 		x--;
// 	}
// 	ft_putchar('\n');
// }
//
// void func()
// {
// 		int y='0';
// 		char m='|';
// 		char n=' ';
//
// 		while(y>=1)
// 		{
// 			if(y==1||y==5)
// 			{
// 				ft_putchar(m);
// 			}
// 			else
// 			{
// 				ft_putchar(n);
// 			}
// 			y--;
// 		}
// }
//
/*
{
	char d,f,h,i;


	d ='o';
	f ='-';
	h =' ';
	i='|';

	while(x>=1)
	{
		if(x==1||x==5)
		{
			ft_putchar(d);

		}
		else
		{
			ft_putchar(f);
		}
		x--;
	}

	while(y>1)
	{
		if(y==1||y==5 || y>1||y<5)
		{
			ft_putchar(f);
			ft_putchar(h);
		}
		y--;
	}



	while(x>=1)
	{
		if(x==1||x==5)
		{
			ft_putchar(d);

		}
		else
		{
			ft_putchar(f);
		}
		x--;
	}



}
*/
