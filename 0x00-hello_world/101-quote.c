#include <stdio.h>
#include <unistd.h>

/**
* main - prints exactly "and that place of art is useful"
* . Dora Korper, 2015-10-19",
* followed by a new line, to the stardard error.
* Return: Always 0 (Success)
*/
int main(void)
{
write(2, "and that piece of art is useful\" - Dor Korper, 2015-10-19\n", 59);
return (1);
}
