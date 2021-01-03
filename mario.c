#include <stdio.h>
#include <cs50.h>

int main(void) {
    int n;
    n = get_int ("ВВедите пожалуйста высоту пирамиды: ");
    if (n >= 1 && n <= 8)
    {
        for (int i = 0; i < n; i++)
        {
            for (int k = n - i; k > 1; k--)
            {
                printf(" ");
            }
            for (int j = 0; j < i + 3; j++)
            {
                printf("#");
            }
            printf("\n");
        }
    }
    else {
        printf("Вы ввели не корректное значение\n");
        return n;
    }
}
