#include <criterion/criterion.h>
#include <criterion/redirect.h>

void my_printf(char *s, ...);

void redirect_all_std(void)
{
    cr_redirect_stdout();
    cr_redirect_stderr();
}

Test (my_printf, Test1, .init = redirect_all_std)
{
    my_printf("hello world");
    cr_assert_stdout_eq_str("hello world");
}

Test (my_printf, Test2, .init = redirect_all_std)
{
    my_printf("a");
    cr_assert_stdout_eq_str("a");
}

Test (my_printf, Test3, .init = redirect_all_std)
{
    my_printf("8964");
    cr_assert_stdout_eq_str("8964");
}

Test (my_printf, Test4, .init = redirect_all_std)
{
    my_printf("247");
    cr_assert_stdout_eq_str("247");
}

Test (my_printf, test5, .init = redirect_all_std)
{
    my_printf("52");
    cr_assert_stdout_eq_str("52");
}

Test (my_printf, test6, .init = redirect_all_std)
{
    my_printf("5");
    cr_assert_stdout_eq_str("5");
}

Test (my_printf, test7, .init = redirect_all_std)
{
    my_printf("C");
    cr_assert_stdout_eq_str("C");
}

Test (my_printf, test8, .init = redirect_all_std)
{
      my_printf("98645");
      cr_assert_stdout_eq_str("98645");
}

Test (my_printf, test9, .init = redirect_all_std)
{
    my_printf("%o", 50);
    cr_assert_stdout_eq_str("62");
}

Test (my_printf, test10, .init = redirect_all_std)
{
    my_printf("%%");
    cr_assert_stdout_eq_str("%");
}

Test (my_printf, test11, .init = redirect_all_std)
{
    my_printf("%b", 50);
    cr_assert_stdout_eq_str("110010");
}

Test (my_printf, test12, .init = redirect_all_std)
{
    my_printf("%i", 52);
    cr_assert_stdout_eq_str("52");
}

Test (my_printf, test13, .init = redirect_all_std)
{
    my_printf("%i", (-100));
    cr_assert_stdout_eq_str("-100");
}

Test (my_printf, test14, .init = redirect_all_std)
{
    my_printf("%c", 'A');
    cr_assert_stdout_eq_str("A");
}
Test (my_printf, test15, .init = redirect_all_std)
{
    my_printf("%s", "test");
    cr_assert_stdout_eq_str("test");
}
