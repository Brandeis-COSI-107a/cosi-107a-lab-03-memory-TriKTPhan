#include <stdio.h>
#include <stdlib.h>
#include <inttypes.h>

int main(int argc, char *argv[]) {
	if (argc < 2) {
		return 1;
	}

	for (int i = 1; i < argc; i++) {
		unsigned long num = strtoul(argv[i], NULL, 10);

		num &= 0xFFFFFFFFFFFF;
		printf("0x%012lX\n", num);
	}

	return 0;
}
