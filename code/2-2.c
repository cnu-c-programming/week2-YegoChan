#include <stdio.h>

int main()
{
    
    char x = 127; // char range: -128~127
    x = x + 1;    // 127 + 1 = -128?

    printf("%d\n", x);

    return 0;
}
