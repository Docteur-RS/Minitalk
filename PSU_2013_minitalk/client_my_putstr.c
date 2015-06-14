/*
** client_my_putstr.c for client in /home/lancel_e/rendu/PSU_2013_minitalk/Client
** 
** Made by lancel_e
** Login   <lancel_e@epitech.net>
** 
** Started on  Thu Mar 20 18:01:12 2014 lancel_e
** Last update Thu Mar 20 18:01:13 2014 lancel_e
*/

#include "all_client.h"

void     my_putstr(char *str)
{
  while (*str != '\0')
    {
      my_putchar(*str);
      str = str + 1;
    }
}
