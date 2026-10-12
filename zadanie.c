#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

int main()
{
    int k, lastdigit;

    setlocale(LC_ALL, "RUS");

    printf("Введите число от 1 до 999, обозначающее денежную единицу: ");
    scanf("%d", &k);

    lastdigit = k % 10;

    switch (lastdigit)
    {
    case 1:
        switch (k % 100)
        {
        case 11:
            printf("%d рублей", k);
            break;
        default:
            printf("%d рубль", k);
            break;
        }
        break;

    case 2:
    case 3:
    case 4:
        switch (k % 100)
        {
        case 12:
        case 13:
        case 14:
            printf("%d рублей", k);
            break;
        default:
            printf("%d рубля", k);
            break;
        }
        break;

    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 0:
        printf("%d рублей", k);
        break;
    }

    return 0;
}