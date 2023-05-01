#include "main.h"
/**
* main - Test function for positive or negative
* Return: 0
*/
int main(void)
{
int i;
i = 0;
positive_or_negative(i);
return (0);
}
root@2af8489c9b67:~/alx-low_level_programming/0x03-debugging# cat main.c
#include "main.h"

/**
* main - tests function that prints if integer is positive or negative
* Return: 0
*/

int main(void)
{
        int i;

        i = 98;
        positive_or_negative(i);

        return (0);
}
