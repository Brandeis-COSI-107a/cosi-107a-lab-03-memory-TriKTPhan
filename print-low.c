#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc < 2) {
        return 1;
    }

    for (int i = 1; i < argc; i++) {
        unsigned int num = (unsigned int) strtoul(argv[i], NULL, 0);
        unsigned int low8 = num & 0xFF;

        printf("%d 0x%02X %3d\n", i, low8, low8);
    }

    return 0;
}
