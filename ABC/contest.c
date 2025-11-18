#include <stdio.h>
#include <string.h>
#include <unistd.h>
int main()
{
	int n, m;
	scanf("%d %d", &n, &m);

	int a[n];
	int sum, find;
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
		sum += a[i];
	}
	find = sum - m;
	for (int i = 0; i < n; i++)
	{
		if (a[i] == find)
		{
			printf("Yes\n");
			return (0);
		}
	}
	printf("No\n");
	return (0);
}

// int fix(int num)
// {
// 	int ans = num % 10;
// 	while (num / 10)
// 	{
// 		num /= 10;
// 		ans += num % 10;
// 	}
// 	return (ans);
// }

// int main(){
// 	int n;

// 	scanf("%d", &n);
// 	int ans = 1;
// 	int temp = 0;
	
// 	for (int i = 0; i < n - 1; i++)
// 	{
// 		ans += temp;
// 		temp = fix(ans);
// 	}
// 	printf("%d\n", temp + ans);
// 	return (0);
// }