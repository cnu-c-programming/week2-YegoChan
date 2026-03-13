#include <stdio.h>

int main()
{
    int a, b;
    char oper;

    scanf("%d %d %c", &a, &b, &oper);

    switch (oper) {
        case '+':
            printf("%d\n", a + b);
            break;
        case '-':
            printf("%d\n", a - b);
            break;
        case '*':
            printf("%d\n", a * b);
            break;
        case '/':
            printf("%d\n", a / b);
            break;
        default:
            printf("Insert correct operator!");
    }

    return 0;
}
