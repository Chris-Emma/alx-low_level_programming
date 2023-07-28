/**
 * cap_string - capitalizes all the words of a string
 * @s: string
 * Return: string
 */
char *cap_string(char *s)
{
	int k;

	k = 0;
	while (s[k] != '\0')
	{
		if ((s[k - 1] == ' ' || s[k - 1] == '\n'
		|| s[k - 1] == '\t' || s[k - 1] == ','
		|| s[k - 1] == ';' || s[k - 1] == '!'
		|| s[k - 1] == '?' || s[k - 1] == '"'
		|| s[k - 1] == '(' || s[k - 1] == ')'
		|| s[k - 1] == '{' || s[k - 1] == '}'
		|| s[k - 1] == '.')
		&& (s[k] >= 'a' && s[k] <= 'z'))
		{
			s[k] = s[k] - 32;
		}
		else if ((s[0] >= 97 && s[0] <= 122))
		{
			s[0] = s[0] - 32;
		}
		else
		{
			s[k] = s[k];
		}
		k++;
	}
	return (s);
