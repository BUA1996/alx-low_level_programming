#include "main.h"

/**
 * cap_string - function to capitalize words in a string
 * @str: string to be capitalized
 * Return: the capitalized strng
 */
char *cap_string(char *str)
{
	int string = 0;

	while (str[string])
	{
		while (!(str[string] >= 'a' && str[string] <= 'z'))
			string++;
		if (str[string - 1] == ' ' || 
		str[string - 1] == '\t' ||
		str[string - 1] == '\n' ||
		str[string - 1] == ',' ||
		str[string - 1] == ';' ||
		str[string - 1] == '.' ||
		str[string - 1] == '!' ||
		str[string - 1] == '?' ||
		str[string - 1] == '"' ||
		str[string - 1] == '(' ||
		str[string - 1] == ')' ||
		str[string - 1] == '{' ||
		str[string - 1] == '}' ||
		string == 0)
				str[string] -= 32;
		string++;
	}
	return (str);
}

