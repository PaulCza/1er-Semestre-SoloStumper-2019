/*
** EPITECH PROJECT, 2020
** hidenp
** File description:
** tests criterion
*/

#include "../my.h"
#include <criterion/criterion.h>
#include <criterion/redirect.h>

void redirect_all_std(void)
{
    cr_redirect_stdout();
    cr_redirect_stderr();
}

Test(helper, basic)
{
    cr_assert_eq(84 , helper());
}

Test(putchar, basic, .init = redirect_all_std)
{
    my_putchar(48);
    cr_assert_stdout_eq_str("0");
}

Test(hidenp, basic_success)
{
    cr_assert_eq(49, hidenp("yolo", "bonjyolo"));
}

Test(hidenp, basic_failure)
{
    cr_assert_eq(48, hidenp("yolo", "chocolatine"));
}

Test(hidenp, same_string)
{
    cr_assert_eq(49, hidenp("yolo", "yolo"));
}

Test(hidenp, str2_smaller)
{
    cr_assert_eq(48, hidenp("yolo", "yo"));
}

Test(hidenp, small_numbers_success)
{
    cr_assert_eq(49, hidenp("123", "123"));
}

Test(hidenp, small_numbers_fail)
{
    cr_assert_eq(48, hidenp("123", "321"));
}

Test(hidenp, special_caracs_success)
{
    cr_assert_eq(49, hidenp(",;:!%$*", ",;:!%$*"));
}
