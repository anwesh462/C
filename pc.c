#include <stdio.h>

int main() {
    int i, j, n = 2, pc = 0, c;
    while (pc < 100) 
    {
        c = 0;
        for (i = 2; i < n; i++) 
        {
            if (n % i == 0) 
            {
                c++;
                break;
            }
        }
        if (c == 0) 
        {
            pc++;
            printf("%d,", n);
        }
        n++;
    }
    return 0;
}

