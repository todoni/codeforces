#include <stdio.h>

int	main()
{
	int n;
	int sol[1000][3] = {0,};
	int ans = 0;
	int ret = 0;

	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d %d %d", &sol[i][0], &sol[i][1], &sol[i][2]);
		for (int j = 0; j < 3; j++)
		{
			if (sol[i][j])
				ans++;
		}
		if (ans > 1)
			ret++;
		ans = 0;
	}
	printf("%d\n", ret);
}

