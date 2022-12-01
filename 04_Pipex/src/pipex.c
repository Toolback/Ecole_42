/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jurenaul <jurenaul@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 18:01:59 by jurenaul          #+#    #+#             */
/*   Updated: 2022/12/01 20:11:31 by jurenaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// int main(int ac, char **av)
// {
    
// }
# include <stdio.h>

int main(int argc, char* argv[], char **envp) { 
  while (*envp != NULL) { 
    printf("%s\n", *envp++); 
  } 
  return 0; 
}