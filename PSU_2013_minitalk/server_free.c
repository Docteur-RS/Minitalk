/*
** server_free.c for server in /home/lancel_e/rendu/PSU_2013_minitalk/Server
** 
** Made by lancel_e
** Login   <lancel_e@epitech.net>
** 
** Started on  Thu Mar 20 18:06:07 2014 lancel_e
** Last update Thu Mar 20 18:06:07 2014 lancel_e
*/

#include <stdlib.h>

void	xfree_doc(void *var)
{
  if (var)
    free(var);
}
