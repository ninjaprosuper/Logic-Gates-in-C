#include <stdio.h>
#define true 1
#define false 0
typedef int bool;

bool XOR(bool ex1, bool ex2) {
    return (!ex1 && ex2 || !ex2 && ex1);
}

bool NOR(bool ex1, bool ex2) {
    return (!ex1 && !ex2);
}

bool NAND(bool ex1, bool ex2) {
    return (!ex1 && ex2 || !ex2 && ex1) || (!ex1 && !ex2);
}

bool XNOR(bool ex1, bool ex2) {
    return (!ex1 && !ex2) || (ex1 && ex2);
}


int main() {
    printf("XOR: %d \n", XOR(false, true));
    printf("XOR: %d \n", XOR(true, true));
    printf("XOR: %d \n", XOR(false, false));
    printf("XOR: %d \n", XOR(true, false));

    printf("\nNOR: %d \n", NOR(false, true));
    printf("NOR: %d \n", NOR(false, false));
    printf("NOR: %d \n", NOR(true, true));
    printf("NOR: %d \n", NOR(true, false));

    printf("\nNAND: %d \n", NAND(false, true));
    printf("NAND: %d \n", NAND(false, false));
    printf("NAND: %d \n", NAND(true, true));
    printf("NAND: %d \n", NAND(true, false));

    printf("\nXNOR: %d \n", XNOR(false, true));
    printf("XNOR: %d \n", XNOR(false, false));
    printf("XNOR: %d \n", XNOR(true, true));
    printf("XNOR: %d \n", XNOR(true, false));

    return 0;
}
