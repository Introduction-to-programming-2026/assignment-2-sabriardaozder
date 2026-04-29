#include <stdio.h>

int main(void)
{
    int scores[3];

    for (int i = 0; i < 3; i++)
    {
        printf("Score: ");
        scanf("%d", &scores[i]);
    }

    int sum = 0;

    for (int i = 0; i < 3; i++)
    {
        sum += scores[i];
    }

    printf("Average: %.2f\n", (float) sum / 3);
}