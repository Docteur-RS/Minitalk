/*
** server_my_putchar.c for server in /home/lancel_e/rendu/PSU_2013_minitalk/Server
** 
** Made by lancel_e
** Login   <lancel_e@epitech.net>
** 
** Started on  Thu Mar 20 18:06:52 2014 lancel_e
** Last update Thu Mar 20 18:06:53 2014 lancel_e
*/

#include <unistd.h>

void	my_putchar(char c)
{
  write(1, &c, 1);
}
