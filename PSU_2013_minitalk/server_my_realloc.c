/*
** server_my_realloc.c for server in /home/lancel_e/rendu/PSU_2013_minitalk/Server
** 
** Made by lancel_e
** Login   <lancel_e@epitech.net>
** 
** Started on  Thu Mar 20 18:07:34 2014 lancel_e
** Last update Sat Mar 22 14:32:50 2014 lancel_e
*/

#include "all_server.h"
#include <stdlib.h>

char	*my_append_for_malloc_doc(char *tab, char c)
{
  int	i;
  char	*temp;

  i = 0;
  if ((temp = malloc((my_strlen(tab) + 2) * sizeof(char))) == NULL)
    return (NULL);
  while (tab[i])
    {
      temp[i] = tab[i];
      i = i + 1;
    }
  temp[i] = c;
  i = i + 1;
  temp[i] = '\0';
  free(tab);
  return (temp);
}
