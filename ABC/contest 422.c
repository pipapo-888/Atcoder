#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MIN(a,b) ((a) < (b) ? (a) : (b))

int min3(int a, int b, int c) {
    int ans = a;

    if (b < ans)
		ans = b;
    if (c < ans)
		ans = c;
    return (ans);
}

int how_many(long long a, long long b, long long c)
{
	int ans = 0;

	int a3, c3;

	int min = min3(a, b, c);
	ans = min;
	a -= min;
	b -= min;
	c -= min;

	// if (a == 0 || c == 0)
	// 	return (ans);
	// if (a && c)
	// {
	// 	if (a >= c * 3)
	// 	{
	// 		c -= c;
	// 		a -= c * 2;
	// 		ans += c;
	// 	}

	// 	if (c >= a * c)
	// 	{
	// 		a -= a;
	// 		c -= a * 2;
	// 		ans +=c;
	// 	}
	// }


	// a3 = a / 3;
	// c3 = c / 3;
	// min = MIN(a3,c3);

	// min = min * 2;
	// // printf("%d  ", min);

	// a -= min;
	// c -= min;
	// ans += min;


	while (a && c)
	{
		if (a > c)
		{
			a -= 2;
			c--;
		}
		else
		{
			a --;
			c -= 2;
		}
		if (a >= 0 && c >= 0)
			ans++;
	}
	return (ans);
}

int main()
{
	int ans;

	int t;
	scanf("%d" ,&t);

	long long a[t], b[t], c[t];

	for (int i = 0; i < t; i++)
		scanf("%lld %lld %lld", &a[i], &b[i], &c[i]);

	for (int i = 0; i < t; i++)
	{
		ans = 0;
		ans = how_many(a[i], b[i], c[i]);
		printf("%d\n", ans);
	}

}

// int check_valid(int h, int w, int i, int j, char s[h + 1][w + 1])
// {
// 	int count = 0;

// 	if (w != j - 1 && s[i][j + 1] == '#')
// 		count++;
// 	if (w != 0 && s[i][j - 1] == '#')
// 		count++;
// 	if (h != i - 1 && s[i + 1][j] == '#')
// 		count++;
// 	if (h != 0 && s[i - 1][j] == '#')
// 		count++;

// 	if (count == 2 || count == 4)
// 		return (1);
// 	else
// 		return (0);
// }

// int main()
// {
// 	int ans = 1;
// 	int h, w;
// 	scanf("%d %d", &h, &w);

// 	char s[h + 1][w + 1];

// 	for (int i = 0; i < h; i++)
// 		scanf("%s", s[i]);

// 	for (int i = 0; i < h; i++)
// 	{
// 		for (int j = 0; j < w; j++)
// 		{
// 			if (s[i][j] == '#')
// 				ans = check_valid(h, w, i, j, s);
// 			if (ans == 0)
// 			{
// 				printf("No\n");
// 				return (0);
// 			}
// 		}
// 	}
// 	printf("Yes");
// 	return (0);
// }


// int main()
// {
// 	char s[4];
// 	scanf("%s", s);

// 	int a, b;
// 	a = s[0];
// 	b = s[2];

// 	// a = atoi(a);
// 	// b = atoi(b);

// 	if (b <= '7')
// 		printf("%c-%c", a, b + 1);
// 	else printf("%c-%c", a+1, '1');

// 	return (0);
// }






// int	get_num_len(long n)
// {
// 	int	len;

// 	len = 0;
// 	if (n < 0)
// 		len++;
// 	if (n == 0)
// 		return (1);
// 	while (n)
// 	{
// 		n /= 10;
// 		len++;
// 	}
// 	return (len);
// }

// char	*ft_itoa(long n)
// {
// 	char	*result;
// 	int		len;
// 	long	num;

// 	num = n;
// 	len = get_num_len(num);
// 	result = malloc(len + 1);
// 	if (!result)
// 		return (NULL);
// 	result[len] = '\0';
// 	if (num < 0)
// 	{
// 		result[0] = '-';
// 		num = -num;
// 	}
// 	if (num == 0)
// 		result[0] = '0';
// 	while (num > 0)
// 	{
// 		result[--len] = (num % 10) + '0';
// 		num /= 10;
// 	}
// 	return (result);
// }

// long ft_atoi(const char *str)
// {
// 	long	minus;
// 	long	result;
// 	int	i;

// 	minus = 1;
// 	result = 0;
// 	i = 0;
// 	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
// 		i++;
// 	if (str[i] == '+' || str[i] == '-')
// 	{
// 		if (str[i] == '-')
// 			minus *= -1;
// 		i++;
// 	}
// 	while (str[i] >= '0' && str[i] <= '9')
// 	{
// 		result = result * 10 + (str[i] - '0');
// 		i++;
// 	}
// 	return (minus * result);
// }


// long reverse(long i){
// 	char *num = ft_itoa(i);
// 	int len = strlen(num);

// 	for (int i = 0; i < len; i++, len--)
// 	{
// 		char temp = num[i];
// 		num[i] = num[len - 1];
// 		num[len - 1] = temp;
// 	}
// 	i = ft_atoi(num);
// 	return (i);
// }

// int main(void) {
// 	long x[10];
// 	scanf("%ld %ld", &x[0], &x[1]);

// 	for (int i = 0; i < 8; i++)
// 	{
// 		x[i + 2] = x[i] + x[i + 1];
// 		if (x[i + 2] >=  10)
// 			x[i + 2] = reverse(x[i + 2]);
// 	}
// 	printf("%ld", x[9]);
// 	return (0);
// }
