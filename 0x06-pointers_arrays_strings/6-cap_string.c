#include "main.h"
#include <ctype.h>
/**
 * cap_string - capitalizes all words of a string
 * @str: Input value
 * Return: Capitalized words
 */

char *cap_string(char *str)
{
	char separators[] = " \t\n,;.!?\"(){}";
	int capitalize = 1;
	int i;
	int j;

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; separators[j] != '\0'; j++)
		{
			if (str[i] == separators[j])
			{
				capitalize = 1;
				break;
			}
		}
		if (capitalize)
		{
			str[i] = toupper(str[i]);
			capitalize = 0;
		}
		else
		{
			str[i] = tolower(str[i]);
		}
	}
	return (str);
}
