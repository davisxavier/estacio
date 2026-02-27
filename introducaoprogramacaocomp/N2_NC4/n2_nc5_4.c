#include <stdio.h>

int main() {
    int a = 10;
    int b = 3;
    float quociente1 =  a/b;
    float quociente = (float) a/b; // 'a' é convrtido explicitamente convertido para float

    printf("Quociente implicita: %.2f\n", quociente1);
    printf("Quociente veja a diferença\n", quociente);

    printf("Quociente explicita: %.2f\n", quociente);

    return 0;
}