/*
** EPITECH PROJECT, 2022
** execute_ls.c
** File description:
** desc
*/

#include "my.h"

int end(char *buffer)
{
    int i = 0;

    if (my_strcmp(buffer, "exit") == 0) {
        my_printf("exit\n");
        exit(i);
    }
    return 0;
}

char *execve_ls(char *buffer, mini_t *all, char **envp)
{
    char **array = str_to_word_array(buffer, ' ');
    int i = 0;
    char *pathname = malloc(sizeof(char) * 100);

    for (; all->dest[i] != NULL; i++) {
        pathname = my_strcat(pathname, all->dest[i]);
        pathname = my_strcat(pathname, array[0]);
        if (access(pathname, X_OK) == 0) {
            array[0] = my_strcatm(all->dest[i], array[0]);
            execve(pathname, array, envp);
            perror("fail\n");
        }
        for (int x = 0; x != 100; x++)
            pathname[x] = '\0';
    }
    my_printf("%s: Command not found.\n", array[0]);
    return 0;
}

void get_bin(mini_t *all)
{
    int i = 0;

    if (all->path == NULL) {
        my_printf("path is wrong\n");
        return;
    } else {
        all->dest = str_to_word_array(all->path, ':');
        for (; all->dest[i] != NULL; i++) {
            all->dest[i] = my_strcatm(all->dest[i], "/");
        }
    }
}
