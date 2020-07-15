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
  int star =0;
  unsigned int corner=0;

  while ( star < y)
  {
	  int slash =0;
      while ( slash < x)
	  {
        if ((star == 0 || star == y-1) && (slash == 0 || slash== x-1))
        if(corner == 0){
              cnr++;
              sym = 'A';
          } else if(corner == 1){
              sym = 'A';
              cnr ++;
          } else if(corner == 2){
              sym = 'C';
              corner ++;
          } else if(corner == 3){
              sym = 'C';
              corner = 0;

		{

          c='/';
		}
        else if (star == 0 || star == y-1)
		{
          c = '*';
		}
        else if (slash ==0 || slash == x-1)
		{
          c = '*';
		}
        else
		{
		   	c = ' ';
		}
          ft_putchar(c);
		  slash++;
	  }
	  star++;
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
