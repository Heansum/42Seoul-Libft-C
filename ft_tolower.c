#include <stdio.h>
#include <unstd.h>

int	ft_tolower(int ch)
{
	if (ch >= 65 && ch <= 90)
		return (ch + 32);
	else
		return (ch);
}
