/*
** client_my_convert_base.c for client in /home/lancel_e/rendu/PSU_2013_minitalk/Client
** 
** Made by lancel_e
** Login   <lancel_e@epitech.net>
** 
** Started on  Thu Mar 20 17:59:14 2014 lancel_e
** Last update Sat Mar 22 14:28:27 2014 lancel_e
*/

#include <stdlib.h>
#include <unistd.h>
#include <stdlib.h>
#include "all_client.h"

void	starting_doc(int *nb, char *base, int *i)
{
  while (*nb > 0)
    {
      *nb = *nb / my_strlen(base);
      *i = *i + 1;
    }
}

char	*convert_base_doc(char *base, int nb)
{
  int	cp_nb;
  int	temp;
  int	i;
  char	*tab;

  i = 0;
  cp_nb = nb;
  temp = 0;
  starting_doc(&nb, base, &i);
  if ((tab = malloc((i + 1) * sizeof(char))) == NULL)
    return (NULL);
  i = 0;
  while (cp_nb > 0)
    {
      temp = cp_nb % my_strlen(base);
      tab[i] = base[temp];
      cp_nb = cp_nb / my_strlen(base);
      i = i + 1;
    }
  tab[i] = '\0';
  if ((tab = rev_str_doc(tab, 1)) == NULL)
    return (NULL);
  return (tab);
}
