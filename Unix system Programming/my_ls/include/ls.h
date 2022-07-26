/*
** EPITECH PROJECT, 2021
** ls.h
** File description:
** desc
*/

#ifndef LS_H_
    #define LS_H_
    #define st_mtime
    #include <stdarg.h>
    #include <unistd.h>
    #include <stdlib.h>
    #include <sys/types.h>
    #include <sys/stat.h>
    #include <fcntl.h>
    #include <dirent.h>
    #include <sys/sysmacros.h>
    #include <pwd.h>
    #include <grp.h>
    #include <time.h>

int my_list_a(int argc, char **argv);
void my_putchar(char c);
int my_strlen(char const *str);
int my_putstr(char const *str);
char *my_revstr(char *str);
char *convert_octal(char dec);
int my_put_nbr(int nb);
char *binary(int dec);
int my_strcmp(char const *s1, char const *s2);
void my_printf(char *s, ...);
int my_ls(DIR *d);
int my_ls_l(DIR *d);
void display_total(char *direc);
int my_ls_a(void);
void right(struct stat s);
void others(struct stat s);
void temp(struct stat s);
void source(struct stat s);
int add(char *s, va_list arg, int e);
int add_two(char *s, va_list arg, int e);
int other(int argc, char **argv);
int other_two(int argc, char **argv);
int flag_l(int argc, char **argv, int a);
int flag(int argc, char **argv, int a);
int flag_a(int argc, char **argv, int a);
int error_handing(char const *filepath, int x, int size);
#endif
