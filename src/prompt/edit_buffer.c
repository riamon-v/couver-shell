/*
** edit_buffer.c for  in /home/buffat_b/42sh_tmp
**
** Made by
** Login   <buffat_b@epitech.net>
**
** Started on  Mon May 23 19:04:03 2016
** Last update Mon May 23 22:33:21 2016 
*/

#include "shell.h"

void	delete_char(t_prompt *prompt)
{
  int	i;

  if (!prompt->count_char || !prompt->count_pos)
    return ;
  i = --prompt->count_pos;
  while (prompt->line[i])
    {
      prompt->line[i] = prompt->line[i + 1];
      ++i;
    }
  prompt->line[--prompt->count_char] = 0;
}

void	add_char(t_prompt *prompt, char input)
{
  int	i;

  i = prompt->count_char;
  while (i > prompt->count_pos)
    {
      prompt->line[i] = prompt->line[i - 1];
      --i;
    }
  prompt->line[prompt->count_pos++] = input;
  prompt->line[++prompt->count_char] = 0;
}