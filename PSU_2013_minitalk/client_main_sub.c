/*
** main_client.c for client in /home/lancel_e/rendu/PSU_2013_minitalk/Client
** 
** Made by lancel_e
** Login   <lancel_e@epitech.net>
** 
** Started on  Thu Mar 20 18:02:39 2014 lancel_e
** Last update Sat Mar 22 14:35:23 2014 lancel_e
*/

#include <unistd.h>
#include <signal.h>
#include "all_client.h"

char	*egalize(char **argv, int pid, int k)
{
  int	stop;
  int	comp;
  int	i;
  char	*bin;

  comp = 0;
  i = 0;
  stop = (int)argv[2][k];
  if ((bin = convert_base_doc("01", stop)) == NULL)
    return (NULL);
  comp = 8 - my_strlen(bin);
  while (i < comp)
    {
      if (kill(pid, SIGUSR1) == -1)
	return (NULL);
      if (usleep(1000) == -1)
	my_putstr("usleep failed\n");
      i = i + 1;
    }
  return (bin);
}

int	sig_send_doc(char *bin, int j, int pid)
{
  if (bin[j] == '0')
    if (kill(pid, SIGUSR1) == -1)
      return (-10);
  if (bin[j] == '1')
    if (kill(pid, SIGUSR2) == -1)
      return (-10);
  if (usleep(1000) == -1)
    my_putstr("Fonction usleep failed.\n");
  return (0);
}

int	send_doc(char **argv, int i, int j, int pid)
{
  int	stop;
  char	*bin;
  int	k;
  int	comp;

  k = 0;
  while (argv[2][k])
    {
      if ((bin = egalize(argv, pid, k)) == NULL)
	return (-10);
      while (bin[j])
	{
	  if (sig_send_doc(bin, j, pid) == -10)
	    return (-10);
	  j = j + 1;
	}
      j = 0;
      k = k + 1;
      xfree_doc(bin);
    }
  return (0);
}

void	err_doc(int argc)
{
  if (argc == 2)
    {
      my_putstr("To few arguments to program call.\n");
      my_putstr("usage ./client [PID] [MSG]\n");
    }
  else if (argc >= 4)
    {
      my_putstr("To much arguments to program call.\n");
      my_putstr("usage ./client [PID] [MSG]\n");
    }
  else
    my_putstr("usage ./client [PID] [MSG]\n");
}

int	only_nbr_doc(char *str)
{
  int	i;

  i = 0;
  if (str[i] == '-')
    i = i + 1;
  while (str[i])
    {
      if (str[i] < '0'|| str[i] > '9')
	{
	  my_putstr("Only number please.\n");
	  return (1);
	}
      i = i + 1;
    }
  return (0);
}
