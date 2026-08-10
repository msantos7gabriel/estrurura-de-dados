#include <stdio.h>

int main()
{
    int entrada, fat = 1;
    printf("Escreva o Numero que deseja saber o fatorial: ");
    scanf("%d", &entrada);

    if (!entrada == 0)
    {
        for (int i = entrada; i != 1; i--)
        {
            fat *= i;
        }
        printf("fat: %d\n", fat);
    }
    else
    {
        printf("fat: 1\n");
    }
}