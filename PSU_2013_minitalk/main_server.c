/*
** main_server.c for server in /home/lancel_e/rendu/PSU_2013_minitalk/Server
** 
** Made by lancel_e
** Login   <lancel_e@epitech.net>
** 
** Started on  Thu Mar 20 18:05:31 2014 lancel_e
** Last update Sat Mar 22 14:25:51 2014 lancel_e
*/

#include <signal.h>
#include <unistd.h>
#include <stdlib.h>
#include "all_server.h"

int	g_ct;

void	sig_usrone_doc()
{
  g_ct = 0;
}

void	sig_usrtwo_doc()
{
  g_ct = 1;
}

int	serving_doc(char *bin)
{
  int	i;
  int	test;

  i = 0;
  while (44)
    {
      if (i == 8)
	{
	  my_putchar(bin_to_dec(bin));
	  i = 0;
	  xfree_doc(bin);
	  if ((bin = malloc(1 * sizeof(char))) == NULL)
	    return (-10);
	  bin[0] = '\0';
	}
      pause();
      if ((bin = my_append_for_malloc_doc(bin, g_ct + 48)) == NULL)
	return (-10);
      i = i + 1;
    }
  return (0);
}

int	main(int argc, char **argv)
{
  char	*bin;
  if (argc != 1)
    {
      my_putstr("No arguments please.\n");
      return (0);
    }
  g_ct = 0;
  my_putstr("PID is ");
  my_put_nbr(getpid());
  my_putchar('\n');
  if (signal(SIGUSR1, sig_usrone_doc) == SIG_ERR)
    my_putstr("Error: signal failed.\n");
  if (signal(SIGUSR2, sig_usrtwo_doc) == SIG_ERR)
    my_putstr("Error: signal failed.\n");
  if ((bin = malloc(1 * sizeof(char))) == NULL)
    return (-10);
  bin[0] = '\0';
  if (serving_doc(bin) == -10)
    my_putstr("An error has been encounterd. Exiting...\n");
  return (0);
}
