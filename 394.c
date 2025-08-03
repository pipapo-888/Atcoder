#include <stdio.h>
#include <string.h>


// B-cat

typedef struct{
	char str[51];
	int size;
} t_str;

int main()
{
	int n;
	scanf("%d", &n);

	t_str s[n];
	for (int i = 0; i < n; i++)
	{
		scanf("%s", s[i].str);
		s[i].size = strlen(s[i].str);
	}

	t_str temp;
	for (int i = 0; i < n; i++){
		for (int j = i + 1; j < n; j++){
			if (s[i].size > s[j].size){
				temp = s[i];
				s[i] = s[j];
				s[j] = temp;
			}
		}
	}

	for (int i = 0; i < n; i++)
		printf("%s", s[i].str);
	return(0);
}
