#include <stdio.h>

int main() 
{
    int x, y, z;
    x = 0;
    y = 1;
    for (z = 0; z < 16; z++)
	{
        printf("%d\n", x);
        int temp = x;
        x = y;
        y = temp + y;
    }
    return 0;
}
