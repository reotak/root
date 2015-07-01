#include <stdio.h>
char *hello();

char *hello() {
    return "I am Child1";
}

int main(void) {
    printf(hello());
    return 0;
}
