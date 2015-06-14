/*
** server_bin_to_dec.c for server in /home/lancel_e/rendu/PSU_2013_minitalk/Server
** 
** Made by lancel_e
** Login   <lancel_e@epitech.net>
** 
** Started on  Thu Mar 20 18:05:52 2014 lancel_e
** Last update Thu Mar 20 18:05:53 2014 lancel_e
*/

#include "all_server.h"

int	bin_to_dec(char *bin)
{
  int	i;
  int	final;
  int	temp;
  int	j;

  i = 0;
  final = 0;
  temp = 0;
  j = my_strlen(bin) - 1;
  while (bin[i])
    {
      temp = (bin[i] - 48) * (my_pow(2, j));
      final = final + temp;
      i = i + 1;
      j = j - 1;
    }
  return (final);
}
