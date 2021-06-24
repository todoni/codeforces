#include <stdio.h>

int	main()
{
	int	n;
	int j;
	char str[100] = {0,};

	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%s", str);
		while (str[j])
			j++;
		if (j <= 10)
			printf("%s\n", str);
		else
			printf("%c%d%c\n", str[0], j - 2, str[j - 1]);
		for (int k = 0; k < 100; k++)
			str[k] = 0;
		j = 0;
	}
}
