/*
** all_client.h for client in /home/lancel_e/rendu/PSU_2013_minitalk/Client
** 
** Made by lancel_e
** Login   <lancel_e@epitech.net>
** 
** Started on  Thu Mar 20 17:58:39 2014 lancel_e
** Last update Thu Mar 20 18:20:21 2014 lancel_e
*/

#ifndef ALL_CLIENT_H_
# define ALL_CLIENT_H_

void	xfree_doc(void *var);
void	starting_doc(int *nb, char *base, int *i);
char	*convert_base_doc(char *base, int nb);
char	*rev_str_doc(char *rev, int is_free);
char	*egalize(char **argv, int pid, int k);
int	sig_send_doc(char *bin, int j, int pid);
int	send_doc(char **argv, int i, int j, int pid);
void	err_doc(int argc);
int	only_nbr_doc(char *str);
int	my_strlen(char *str);
void	my_putchar(char c);
void	my_putstr(char *str);
void	my_put_nbr(int nb);
int	my_getnbr(char *str);
int	neg(char *str);
int	digit(int nb);
void	err_doc(int argc);

#endif /* !ALL_CLIENT_H_ */
