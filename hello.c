#include <stdio.h>

char *hello() {
    return "hello, world";
}

char *hello2() {
    return "\nhello2\n";
}

int main(void) {
    printf(hello());
    printf(hello2());
    
    return 0;
}
