/*
** EPITECH PROJECT, 2021
** 101pong
** File description:
** 101pong
*/

#include <math.h>
#include <unistd.h>
#include <stdarg.h>
#include <stdio.h>

int my_putstr(char const *str);

float my_atoi_mod(char const *str)
{
    int i = 0;
    float j = 0;
    int x = 0;

    if (str[0] == '-') {
        i++;
    } while (str[i] != '\0' && str[i] != '.') {
        j = j * 10;
        j = j + str[i] - '0';
        i++;
    } if (str[i] == '.') {
        i++;
        while (str[i] != '\0') {
            j = j * 10;
            j = j + str[i] - '0';
            i++;
            x++;
        } if (x == 1) {
            j = j / 10;
        } else
            j = j / 100;
    } if (str[0] == '-')
          j = j * (-1);
    return (j);
}

void pinpong2(char **argv, float zz)
{
    float r = 0;
    float x = my_atoi_mod(argv[4]) - my_atoi_mod(argv[1]);
    float y = my_atoi_mod(argv[5]) - my_atoi_mod(argv[2]);
    float z = my_atoi_mod(argv[6]) - my_atoi_mod(argv[3]);

    if ((my_atoi_mod(argv[6]) < 0 && zz >= 0) || (my_atoi_mod(argv[6]) > 0
                                                  && zz <= 0)) {
        r = asin( z / sqrtf(powf(x, 2) + powf(y, 2) + powf(z, 2)));
        if (r < 0)
            r = r * (-1);
        printf("The incidence angle is:\n%.2f degrees\n", r * (180/M_PI));
    } else
        printf("The ball won't reach the paddle.\n");
}

void pingpong(char **argv)
{
    float xx = 0;
    float yy = 0;
    float zz = 0;
    float x = my_atoi_mod(argv[4]) - my_atoi_mod(argv[1]);
    float y = my_atoi_mod(argv[5]) - my_atoi_mod(argv[2]);
    float z = my_atoi_mod(argv[6]) - my_atoi_mod(argv[3]);

    my_putstr("The velocity vector of the ball is:\n");
    printf("(%.2f, %.2f, %.2f)\n", x, y, z);
    printf("At time t + %s, ball coordinates will be:\n", argv[7]);
    printf("(%.2f,  ", xx = (my_atoi_mod(argv[1]) + (x * (my_atoi_mod(argv[7]) + 1))));
    printf("%.2f, ", yy = (my_atoi_mod(argv[2]) + (y * (my_atoi_mod(argv[7]) + 1))));
    printf("%.2f)\n", zz = (my_atoi_mod(argv[3]) + (z * (my_atoi_mod(argv[7]) + 1))));
    pinpong2(argv, zz);
}
