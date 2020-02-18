#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void cyg_test_function(int depth)
{
	if (depth > 10)
		return;
	cyg_test_function(depth + 1);
}

int main(int argc, char *argv[])
{
	int *data;

	printf("Enter please..");
	getchar();

	data = (int *)malloc(sizeof(int));
	if (data != NULL)
		free(data);

	cyg_test_function(0);

	return 0;
}

