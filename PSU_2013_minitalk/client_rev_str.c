/*
** client_rev_str.c for client in /home/lancel_e/rendu/PSU_2013_minitalk/Client
** 
** Made by lancel_e
** Login   <lancel_e@epitech.net>
** 
** Started on  Thu Mar 20 18:02:19 2014 lancel_e
** Last update Thu Mar 20 18:22:57 2014 lancel_e
*/

#include <stdlib.h>
#include <unistd.h>
#include <stdlib.h>
#include "all_client.h"

char	*rev_str_doc(char *rev, int is_free)
{
  char	*new;
  int	i;
  int	j;

  j = 0;
  i = 0;
  if ((new = malloc((my_strlen(rev) + 1) * sizeof(char))) == NULL)
    return (NULL);
  i = my_strlen(rev);
  i = i - 1;
  while (i >= 0)
    {
      new[j] = rev[i];
      i = i - 1;
      j = j + 1;
    }
  new[j] = '\0';
  if (is_free == 1)
    xfree_doc(rev);
  return (new);
}
