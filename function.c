#include <stdio.h>

void func(void);
void add(int a, int b){
    int c;
    c = a + b;
    printf("%d + %d = %d", a, b, c);
}

void func(void){
    printf("this is a function!\n");
}

int main(void){
    func();
    add(1, 2);
    return 0;
}