#include <stdio.h>

int main()
{
	int l, r;
	scanf("%d %d", &l, &r);

	if (l && r || !l && !r)
	{
		printf("Invalid");
		return (0);
	}
	if (l)
		printf("Yes");
	if (r)
		printf("No");
	return (0);
}
