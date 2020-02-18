#include "stdio.h"
#include "test_tp.h"

int main(int argc, char *argv[])
{
	puts("Press Enter to continue");
	getchar();
	tracepoint(linuxias_hello_world, my_first_tracepoint, argc, argv[0]);
	puts("The end");
	return 0;
}
