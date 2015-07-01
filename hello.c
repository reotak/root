#include <stdio.h>
char *hello();

char *hello() {
    return "I am Child1";
}

char *hello2() {
    return "\nhello2\n";
}

int main(void) {
    printf(hello());
    printf(hello2());
    
    return 0;
}
