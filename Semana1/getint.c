#include <stdio.h>
#include <cs50.h>

int main(void)
{
    //so aceita inteiro
    int i = get_int("Numero:");
    printf("%i\n", i);
    int j = get_int("Foo: ");
    printf("%i\n", j);
}
