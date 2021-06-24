#include <stdio.h>

int	main()
{
	int	weight;

	scanf("%d",&weight);
	if (weight % 2 || weight == 2)
		printf("NO\n");
	else
		printf("YES\n");
}
