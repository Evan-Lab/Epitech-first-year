/*
** EPITECH PROJECT, 2021
** mycomputesuqareroot
** File description:
** desc
*/

int my_compute_square_root(int nb)
{
    int i = 1;
    int result = 0;

    while (result < nb) {
        result = i * i;
        if (result == nb)
            return (i);
        else
            i++;
    }
    return (i - 1);
}
