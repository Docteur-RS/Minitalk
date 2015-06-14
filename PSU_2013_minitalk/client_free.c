/*
** client_free.c for client in /home/lancel_e/rendu/PSU_2013_minitalk/Client
** 
** Made by lancel_e
** Login   <lancel_e@epitech.net>
** 
** Started on  Thu Mar 20 17:59:01 2014 lancel_e
** Last update Thu Mar 20 17:59:01 2014 lancel_e
*/

#include <stdlib.h>
#include "all_client.h"

void	xfree_doc(void *var)
{
  if (var)
    free(var);
}
