#include <stdio.h>

typedef struct {
	char a;
	int b;
	short c;
} basic_s;

#pragma pack(1)
typedef struct {
	char a;
	int b;
	short c;
} pack1_s;

#pragma pack(2)
typedef struct {
	char a;
	int b;
	short c;
} pack2_s;

#pragma pack(4)
typedef struct {
	char a;
	int b;
	short c;
} pack4_s;


int main(int argc, char *argv[])
{
	printf("basic_s size : %lu\n", sizeof(basic_s));
	printf("pack1_s size : %lu\n", sizeof(pack1_s));
	printf("pack2_s size : %lu\n", sizeof(pack2_s));
	printf("pack4_s size : %lu\n", sizeof(pack4_s));

	return 0;
}
