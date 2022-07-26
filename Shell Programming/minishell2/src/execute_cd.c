/*
** EPITECH PROJECT, 2022
** execute_cd.c
** File description:
** desc
*/

#include "mini.h"

char *get_env(mini_t *all, char *buffer)
{
    for (int i = 0; all->envp[i] != NULL; i++) {
        if (my_strncmp(all->envp[i], buffer, my_strlen(buffer)) == 0) {
            return (my_strcut(all->envp[i], my_strlen(buffer) + 1));
        }
    }
    return NULL;
}

void execute_cd(mini_t *all, char *cmd)
{
    char *new_pwd;
    int chdir_status;
    char *old_pwd = getcwd(NULL, 0);
    char **command = str_to_word_array(cmd, ' ');
    if (my_strcmp(command[0], "-") == 0)
        chdir_status = chdir(get_env(all, "OLDPWD"));
    if (my_strcmp(command[0], "cd") != 0 || all->status == true)
        return;
    all->status = true;
    if (command[1] == NULL)
        chdir_status = chdir(get_env(all, "HOME"));
    else if (my_strcmp(command[1], "-") == 0)
        chdir_status = chdir(get_env(all, "OLDPWD"));
    else
        chdir_status = chdir(command[1]);
    if (chdir_status == -1)
        my_printf("%s: Not a directory.\n", command[1]);
    new_pwd = getcwd(NULL, 0);
    update_pwd(all, new_pwd);
    update_old_pwd(all, old_pwd);
}
