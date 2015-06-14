/*
** client_my_getnbr.c for client in /home/lancel_e/rendu/PSU_2013_minitalk/Client
** 
** Made by lancel_e
** Login   <lancel_e@epitech.net>
** 
** Started on  Thu Mar 20 18:00:11 2014 lancel_e
** Last update Thu Mar 20 18:22:35 2014 lancel_e
*/

#include "all_client.h"

int	neg(char *str)
{
  int	i;
  int	ct;

  i = 0;
  ct = 0;
  while (str[i] < '0' || str[i] > '9')
    {
      if (str[i] == '-')
        ct = ct + 1;
      i = i + 1;
    }
  if (ct % 2 != 0)
    return (-1);
  return (0);
}

int	my_getnbr(char *str)
{
  int	ret;
  int	i;

  ret = 0;
  i = 0;
  while (digit(str[i]) == 0)
    i = i + 1;
  while (digit(str[i]) == -1)
    {
      ret = ((ret * 10) + (str[i] - 48));
      i = i + 1;
    }
  if (neg(str) == -1)
    ret = -ret;
  return (ret);
}

int	digit(int nb)
{
  if (nb >= '0' && nb <= '9')
    return (-1);
  return (0);
}
