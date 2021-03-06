/*
** create_path.c for couver-shell in /home/person_m/rendu/PSU/42sh/couver-shell/src/minishell1/
**
** Made by Melvin Personnier
** Login   <person_m@epitech.eu>
**
** Started on  Sat Jun  4 21:24:16 2016 Melvin Personnier
** Last update Sun Jun  5 21:28:13 2016 Melvin Personnier
*/

#include "my.h"

char		*create_path()
{
  char		*pathbuf;
  size_t	n;

  n = confstr(_CS_PATH, NULL, (size_t) 0);
  pathbuf = my_malloc(sizeof(char) * n);
  confstr(_CS_PATH, pathbuf, n);
  return (pathbuf);
}

void		*my_realloc(void *ptr, size_t size)
{
  ptr = realloc(ptr, size);
  if (ptr == NULL)
    {
      fprintf(stderr, "realloc failure!\n");
      exit(1);
    }
  return (ptr);
}

char		*my_strdup(const char *s)
{
  char		*str;

  str = strdup(s);
  if (!str)
    exit(1);
  return (str);
}

void		free_my_alias(t_shell *sh, int i, int *bol)
{
  free(sh->alias[i]);
  *bol = 1;
}
