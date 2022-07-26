#include <criterion/criterion.h>

int my_putstr(char const *str);
int my_strlen(char const *str);
int my_compute_square_root(int nb);

Test(my_putstr, test01)
{
    char *str = "Test";
    cr_assert_neq(my_putstr(str), "Test");
}

Test(my_strlen, test02)
{
    char *str = "Test02";
    cr_assert_neq(my_strlen(str), "Test02");
}

Test(my_compute_square_root, Test03)
{
    int nb = 9;
    cr_assert_eq(my_compute_square_root(nb), 3);
}

Test(my_compute_square_root, Test04)
{
   int nb = 10;
  cr_assert_eq(my_compute_square_root(nb), 4);
}
