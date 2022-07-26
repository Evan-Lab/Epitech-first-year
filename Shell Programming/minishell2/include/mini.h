/*
** EPITECH PROJECT, 2022
** mini.h
** File description:
** desc
*/

#ifndef MINI_H
    #define MINI_H
    #include "my.h"
    #define GREEN "\x1B[1;32m"
    #define RED "\x1B[1;31m"
    #define YELLOW "\x1B[1;33m"
    #define RESET "\x1B[0m"
    #define MAX_VARIABLE_SIZE 2048
    #include <stddef.h>
    #include <unistd.h>
    #include <sys/types.h>
    #include <sys/wait.h>
    #include <stdlib.h>
    #include <unistd.h>
    #include <signal.h>
    #include <stdio.h>
    #include <stdbool.h>

typedef struct mini_s {
    char *logname;
    char *hostname;
    char *pwd;
    char *path;
    char **dest;
    int *wstatus;
    char *buf;
    char **envp;
    char **command;
    bool status;
} mini_t;

int main(int argc, char **argv, char **env);
char **show_env(mini_t *all);
int path(mini_t *all);
void my_loop(mini_t *all);
void get_bin(mini_t *all);
void execute_path(char *buffer, mini_t *allp);
int get_all(mini_t *all);
int elements(char **args, mini_t *all);
void end_program(char *buffer);
void execution(char *buffer, mini_t *all);
void info_buffer(mini_t *all);
char *space_and_tabs(char *buffer);
char **my_setenv(mini_t *all, char *buffer);
char **my_unsetenv(mini_t *all, char *buffer);
void execute_cd(mini_t *all, char *buffer);
char *get_env(mini_t *all, char *buffer);
char **split_pwd(mini_t *all, char *value, int i);
char **update_pwd(mini_t *all, char *value);
char **split_update_old_pwd(mini_t *all, char *value, int i);
char **update_old_pwd(mini_t *all, char *value);
char **my_alloc(int i, int j);
int count_array_size(char **arr);
void my_pipe(mini_t *all, char *buffer);
#endif
