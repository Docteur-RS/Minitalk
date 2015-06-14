/*
** server_my_power_it.c for server in /home/lancel_e/rendu/PSU_2013_minitalk/Server
** 
** Made by lancel_e
** Login   <lancel_e@epitech.net>
** 
** Started on  Thu Mar 20 18:06:33 2014 lancel_e
** Last update Thu Mar 20 18:06:34 2014 lancel_e
*/

#include "all_server.h"

int	my_pow(int nb, int power)
{
  int	i;
  int	resul;

  resul = 1;
  i = 0;
  if (power < 0)
    return (0);
  else if (power == 0)
    return (1);
  while (i < power)
    {
      resul = resul * nb;
      i = i + 1;
      if (resul > 2147483647 || resul < -2147483647)
	{
	  if (resul < -2147483647)
	    {
	      return (0);
	    }
	}
    }
  return (resul);
}
