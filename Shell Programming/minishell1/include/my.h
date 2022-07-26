/*
** EPITECH PROJECT, 2022
** my.h
** File description:
** desc
*/

#ifndef MY_H
    #define MY_H
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

typedef struct mini_s {
    char *logname;
    char *hostname;
    char *pwd;
    char *path;
    char **dest;
} mini_t;

void my_printf(char *s, ...);
int main(int argc, char **argv, char **env);
char **show_env(char **env);
void my_putchar(char c);
int my_strcmp(char const *s1, char const *s2);
int my_putstr(char const *str);
int my_put_nbr(int nb);
int my_strncmp(char *a, char *b, int nb);
int my_strlen(char const *str);
int path(char **env);
char **str_to_word_array(char *str, char separator);
int get_logname(char **envp, mini_t *all);
int get_hostname(char **envp, mini_t *all);
int get_pwd(char **envp, mini_t *all);
void execute(char **envp, mini_t *all);
char *my_strchr(char *str, int c);
int get_path(char **envp, mini_t *all);
void get_bin(mini_t *all);
char *my_strcatm(char const *s1, char const *s2);
char *my_substr(char const *str, int start, int end);
char *execve_ls(char *buffer, mini_t *all, char **envp);
int get_all(mini_t *all);
char *my_strdup(char const *src);
char *my_strcpy(char *dest, char const *src);
int elements(char **args, char **envp, mini_t *all);
char *my_strcat(char *dest, char const *src);
int end(char *buffer);
void execution(char *buffer, char **envp);
void info_buffer(char **envp, mini_t *all);
char *space_and_tabs(char *buffer);
char **my_setenv(char **envp, char *buffer);
char **my_unsetenv(char **envp, char *buffer);
char *my_strupcase(char *str);
#endif
