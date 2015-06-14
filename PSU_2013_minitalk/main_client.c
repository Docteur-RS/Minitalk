/*
** main_client.c for client in /home/lancel_e/rendu/PSU_2013_minitalk/Client
** 
** Made by lancel_e
** Login   <lancel_e@epitech.net>
** 
** Started on  Thu Mar 20 18:15:47 2014 lancel_e
** Last update Thu Mar 20 18:15:56 2014 lancel_e
*/

#include "all_client.h"

int	main(int argc, char **argv)
{
  int	pid;
  int	i;
  int	j;

  j = 0;
  i = 0;
  if (argc != 3)
    {
      err_doc(argc);
      return (0);
    }
  if (only_nbr_doc(argv[1]) == 1)
    return (0);
  pid = my_getnbr(argv[1]);
  my_putstr("sending request to process : ");
  my_put_nbr(pid);
  my_putstr(" With message : \"");
  my_putstr(argv[2]);
  my_putstr("\"\n");
  if (send_doc(argv, i, j, pid) == -10)
    my_putstr("---------\nError: Connexion lost or inexistant.\nExiting...\n");
  return (0);
}
