#include <stdio.h>

void print_column(int height);

int main(void)
{
    int height = 3; // örnek
    print_column(height);
}

void print_column(int height)
{
    for (int i = 0; i < height; i++)
    {
        printf("#\n");
    }
}