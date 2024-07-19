#include <cs50.h>
#include <stdio.h>

int main(void)
{
    string s;
    s = get_string("Nome");
    printf("hello, %s\n", s);
}