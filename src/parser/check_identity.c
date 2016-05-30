/*
** check_identity.c for check_identity in /Users/couver_v/Epitech/rendu/couver-shell/src/parser
**
** Made by Vincent COUVERCHEL
** Login   <couver_v@epitech.net>
**
** Started on  Sat May 28 22:28:37 2016 Vincent COUVERCHEL
** Last update Sat May 28 22:28:37 2016 Vincent COUVERCHEL
*/

#include <string.h>

int	is_end_of_command(char *str)
{
  return (!strcmp(str, "||")
	  || !strcmp(str, "&&")
	  || !strcmp(str, "|")
	  || !strcmp(str, ";")
	  || !strcmp(str, "(")
	  || !strcmp(str, ")"));
}

int	is_separator(char *str)
{
  return (!strcmp(str, "||")
	  || !strcmp(str, "&&")
	  || !strcmp(str, ";")
	  || !strcmp(str, "(")
	  || !strcmp(str, ")"));
}

int	is_quote(char *str)
{
  return (!strcmp(str, "\"")
	  || !strcmp(str, "'")
	  || !strcmp(str, "`"));
}

int	is_redirection(char *str)
{
  return (!strcmp(str, "<")
	  || !strcmp(str, "<<")
	  || !strcmp(str, ">")
	  || !strcmp(str, ">>"));
}