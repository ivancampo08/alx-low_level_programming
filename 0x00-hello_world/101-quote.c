#include <stdio.h>
#include <unistd.h>

/**
* main - prints exactly "and that place of art is useful"
* - Dora Korper, 2015-10-19",
* followed by a new line, to the standard error.
* Return: 0 if exited properly, non-zero otherwise
*/
int main(void)
{
write(2, "and that piece of art is useful\" - Dora Korper, 2015-10-19\n", 59);
return (1);
}
