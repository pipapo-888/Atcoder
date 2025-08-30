// #include <stdio.h>

// int main()
// {
// 	int n;
// 	scanf("%d", &n);

// 	int a[n + 1];
// 	for (int i = 0; i < n; i++)
// 		scanf("%d", &a[i]);

// 	for (int i = 0; i < n; i++)
// 	{
// 		for (int j = 0; j < i; j++)
// 		{
// 			a[j] += a[i];
// 		}
// 	}
// 	int count = 0;
// 	for (int i = 0; i < n; i++)
// 	{
// 		if (a[i] >= 4)
// 			count++;
// 	}
// 	printf("%d", count);
// 	return (0);
// }


#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int	get_num_len(long n)
{
	int	len;

	len = 0;
	if (n < 0)
		len++;
	if (n == 0)
		return (1);
	while (n)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(long n)
{
	char	*result;
	int		len;
	long	num;

	num = n;
	len = get_num_len(num);
	result = malloc(len + 1);
	if (!result)
		return (NULL);
	result[len] = '\0';
	if (num < 0)
	{
		result[0] = '-';
		num = -num;
	}
	if (num == 0)
		result[0] = '0';
	while (num > 0)
	{
		result[--len] = (num % 10) + '0';
		num /= 10;
	}
	return (result);
}

long ft_atoi(const char *str)
{
	long	minus;
	long	result;
	int	i;

	minus = 1;
	result = 0;
	i = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			minus *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (minus * result);
}


long reverse(long i){
	char *num = ft_itoa(i);
	int len = strlen(num);

	for (int i = 0; i < len; i++, len--)
	{
		char temp = num[i];
		num[i] = num[len - 1];
		num[len - 1] = temp;
	}
	i = ft_atoi(num);
	return (i);
}

int main(void) {
	long x[10];
	scanf("%ld %ld", &x[0], &x[1]);

	for (int i = 0; i < 8; i++)
	{
		x[i + 2] = x[i] + x[i + 1];
		if (x[i + 2] >=  10)
			x[i + 2] = reverse(x[i + 2]);
	}
	printf("%ld", x[9]);
	return (0);
}
