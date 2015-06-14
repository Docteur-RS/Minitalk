/*
** all_server.h for server in /home/lancel_e/rendu/PSU_2013_minitalk/Server
** 
** Made by lancel_e
** Login   <lancel_e@epitech.net>
** 
** Started on  Thu Mar 20 18:05:21 2014 lancel_e
** Last update Sat Mar 22 14:26:45 2014 lancel_e
*/

#ifndef ALL_SERVER_H_
# define ALL_SERVER_H_

void	sig_usrone_doc();
void	sig_usrtwo_doc();
int	serving_doc(char *bin);
int	bin_to_dec(char *bin);
void	xfree_doc(void *var);
int	my_pow(int nb, int power);
char	*my_append_for_malloc_doc(char *tab, char c);
int	my_strlen(char *tab);
void	my_putchar(char c);
void	my_putstr(char *str);
void	my_put_nbr(int nb);

#endif /* !ALL_SERVER_H_ */
