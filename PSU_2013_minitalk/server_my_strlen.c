/*
** server_my_strlen.c for server in /home/lancel_e/rendu/PSU_2013_minitalk/Server
** 
** Made by lancel_e
** Login   <lancel_e@epitech.net>
** 
** Started on  Thu Mar 20 18:07:54 2014 lancel_e
** Last update Thu Mar 20 18:07:55 2014 lancel_e
*/

#include "all_server.h"

int	my_strlen(char *tab)
{
  int	nb_carac;

  if (tab[0] == '\0')
    return (0);
  nb_carac = 0;
  while (tab[nb_carac] != 0)
    {
      nb_carac = nb_carac + 1;
    }
  return (nb_carac);
}
