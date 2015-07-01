#include <stdio.h>

char *hello() {
    return "hello, world";
}

int main(void) {
    printf(hello());
    return 0;
}
