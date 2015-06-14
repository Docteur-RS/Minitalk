/*
** server_my_putstr.c for server in /home/lancel_e/rendu/PSU_2013_minitalk/Server
** 
** Made by lancel_e
** Login   <lancel_e@epitech.net>
** 
** Started on  Thu Mar 20 18:07:20 2014 lancel_e
** Last update Thu Mar 20 18:07:21 2014 lancel_e
*/

#include "all_server.h"

void	my_putstr(char *str)
{
  while (*str != '\0')
    {
      my_putchar(*str);
      str = str + 1;
    }
}
