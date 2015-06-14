/*
** client_my_strlen.c for client in /home/lancel_e/rendu/PSU_2013_minitalk/Client
** 
** Made by lancel_e
** Login   <lancel_e@epitech.net>
** 
** Started on  Thu Mar 20 18:02:00 2014 lancel_e
** Last update Sat Mar 22 14:23:25 2014 lancel_e
*/

#include "all_client.h"

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
