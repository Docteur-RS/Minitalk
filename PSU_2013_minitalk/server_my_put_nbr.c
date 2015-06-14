/*
** server_my_put_nbr.c for server in /home/lancel_e/rendu/PSU_2013_minitalk/Server
** 
** Made by lancel_e
** Login   <lancel_e@epitech.net>
** 
** Started on  Thu Mar 20 18:07:07 2014 lancel_e
** Last update Thu Mar 20 18:07:07 2014 lancel_e
*/

#include "all_server.h"

void	my_put_nbr(int nb)
{
  int	div;

  div = 1;
  if (nb < 0)
    {
      nb = -nb;
      my_putchar('-');
    }
  while (nb / div > 9)
    {
      div = div * 10;
    }
  while (div != 0)
    {
      my_putchar('0' + (nb / div) % 10);
      nb = nb % div;
      div = div / 10;
    }
}
