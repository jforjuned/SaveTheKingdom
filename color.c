
#include <stdio.h>
void red()
{
	printf("\033[1;31m");
}

void green()
{
	printf("\033[1;32m");
}

void yellow()
{
	printf("\033[1;33m");
}
void blue()
{
	printf("\033[1;34m");
}
void purple()
{
	printf("\033[1;35m");
}
void cyan()
{
	printf("\033[1;36m");
}

void reset()
{
	printf("\033[0m");
}

int main()
{
	red();
	printf("Hello red ");
	blue();
	printf("Hello red ");
	purple();
	printf("Hello red ");
	cyan();
	printf("Hello red ");
	green();
	printf("Hello red ");
	yellow();
	printf("world\n");
	reset();
	return 0;
}
