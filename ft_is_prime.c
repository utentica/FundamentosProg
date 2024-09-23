#include <unistd.h>
#include <stdio.h>
int main()
{
	char a = '9';
	while(a >= 0)
	{
		write(1, &a, 1);
		a--;
	}
	printf("ola");
	write(1, "\n", 1);
	return 0;
}
