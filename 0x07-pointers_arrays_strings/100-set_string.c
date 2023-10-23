#include "main.h"
/**
 * set_string - sets the value of a pointer to a char
 * @s: Pointer to a char pointer
 * @to: Pointer to the char to set 's' to
 */
void set_string(char **s, char *to)
{
	*s = to;
}
