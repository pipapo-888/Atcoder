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

int main(void) {
  int N;
  scanf("%d", &N);

  int a[N];
  for (int i = 0; i < N; i++)
    scanf("%d", &a[i]);

  int count = 0;
  int sum_of = 0;

  int temp = N;
  N = N - 1;

  sum_of += a[N--];
  while (sum_of < 4 && N >= 0)
  {
	count++;
    sum_of += a[N];
	N--;
  }
  if (N < 0)
  {
	printf("0");
	return (0);
  }

  printf("%d", temp - count);
  return (0);
}
