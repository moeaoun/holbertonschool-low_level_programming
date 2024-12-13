#include "main.h"
/**
 * _isalpha - checks for letters
 * @c: ASCII input
 * Return : 1 or 0
 */
int _isalpha(int c)
{
if (c >= 65 && c <= 90)
{
return (1);
}
else if (c >= 97 && c <= 122)
{
return (1);
}
return (0);
}
