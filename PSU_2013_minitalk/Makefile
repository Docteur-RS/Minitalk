##
## Makefile for minitalk in /home/lancel_e/rendu/PSU_2013_minitalk
## 
## Made by lancel_e
## Login   <lancel_e@epitech.net>
## 
## Started on  Thu Mar 20 18:33:23 2014 lancel_e
## Last update Sat Mar 22 14:38:43 2014 lancel_e
##

CC	= gcc

C_SRC	= client_free.c \
	  client_main_sub.c \
	  client_my_convert_base.c \
	  client_my_getnbr.c \
	  client_my_putchar.c \
	  client_my_put_nbr.c \
	  client_my_putstr.c \
	  client_my_strlen.c \
	  client_rev_str.c \
	  main_client.c

S_SRC	= main_server.c \
	  server_bin_to_dec.c \
	  server_free.c \
	  server_my_power_it.c \
	  server_my_putchar.c \
	  server_my_put_nbr.c \
	  server_my_putstr.c \
	  server_my_realloc.c \
	  server_my_strlen.c

C_NAME	= ./client/client

S_NAME  = ./server/server

C_OBJ	= $(C_SRC:.c=.o)

S_OBJ	= $(S_SRC:.c=.o)

RM	= rm -f

all: $(C_NAME) $(S_NAME)

$(C_NAME): $(C_OBJ) $(C_OBJ)
	$(CC) $(C_OBJ) -o $(C_NAME)

$(S_NAME): $(S_OBJ) $(S_OBJ)
	$(CC) $(S_OBJ) -o $(S_NAME)

clean:
	$(RM) $(S_OBJ)
	$(RM) $(C_OBJ)

fclean: clean
	$(RM) $(S_NAME)
	$(RM) $(C_NAME)

re: fclean all

.PHONY: all clean fclean re
