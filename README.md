
# Домашнее задание к работе 7

## Условие задачи

Написать программу, которая после введенного с клавиатуры числа (в диапазоне от 1 до 999), обозначающего денежную единицу, дописывает слово «рубль» в правильной форме. Например, 12 рублей, 21 рубль и т.д.

## Алгоритм и блок-схема

### Алгоритм

1. Начало.
2. Ввод значения переменной `k`.
3. Вычисление значения `lastdigit = k % 10`.
4. Проверка последней цифры с помощью внешнего `switch`.
5. Проверка значения `k % 100` во вложенном `switch`.
6. Вывод слова «рубль», «рубля» или «рублей» в зависимости от значения числа.
7. Конец.

### Блок-схема

[Ссылка на схему](https://viewer.diagrams.net/?tags=%7B%7D&lightbox=1&highlight=0000ff&edit=_blank&layers=1&nav=1&title=%D0%94%D0%B8%D0%B0%D0%B3%D1%80%D0%B0%D0%BC%D0%BC%D0%B0%20%D0%B1%D0%B5%D0%B7%20%D0%BD%D0%B0%D0%B7%D0%B2%D0%B0%D0%BD%D0%B8%D1%8F.drawio&dark=auto#R%3Cmxfile%3E%3Cdiagram%20name%3D%22%D0%A1%D1%82%D1%80%D0%B0%D0%BD%D0%B8%D1%86%D0%B0-1%22%20id%3D%224A7QVHGq1DZSWLY9DBwo%22%3E7Zpdk5MwFIZ%2FDTN6YYePQuml%2FVAvdMaZvVAvsyULGVNSIbVdf70HSCDQrtKUMlnXm5ScJJA8fTlJTrC85fb4PkO75BOLMLVcOzpa3spyXddzbfgpLI%2BVJZy5lSHOSFSZnMZwR35hYRTt4j2JcN6qyBmjnOzaxg1LU7zhLRvKMnZoV3tgtP3UHYrxieFug%2Bip9QuJeCJG4c4a%2BwdM4kQ%2B2QnmVckWycpiJHmCInZQTN7a8pYZY7y62h6XmBbwJJeq3bsnSuuOZTjlfRrkHGX8tJG4T84f5ZChGdCFzOKQEI7vdmhTlBzgDwZbwrcUcg5cVi1%2FIroXLa2VbS1WZWpbUCWcyWtIF2W6Fo1wxvFR6YHo83vMtphnj1AlUbD6guGh%2BQscyVXcxQtEXghNFiMhgLi%2Bc8MILgSm88hIutv3QgaliFJMWZyhLZDZ4YzA03AGxa2yz03B3%2Bg%2BkCOWL8TTtNV0XaZTqPV9MMrTDmW%2FTdlxBsAMb9umD%2BWM7dMIF41sDXFSlPOIxAT%2BULu0FJSg9z6kchQDAAs6wKZdWQ4ALD8QvknOeIAzzBK2vd%2FnGryqh4DtVU3utRYlxz7FVGOQmNwOpvkgusrxaJBUMdl6oOZn5BS2OXXUNA0GwgQ6%2FbdAueGNSPm391TSpcMEunjKvS9LisGPfbF8WBSZonqVemVFR5l1%2FTKdqw00sAd%2Fd3d%2B5z2ezvzrsbM9d%2Fq9xy8V%2B5vO4icYYvVTYI%2Fww7MDD5bl7ZE73o2Qw5rr2SEfU%2BuefRvwMAU%2BU7W%2Fuz30aXgD6DiN%2BuC%2Bcj%2F6VsG7klIFaoEWK42d6CwcgpXggqOTeMUpO7bPNnLd1ez6VaRwlzuRZRlPWMxSRNeNddHWuAIZHwn%2FWpgnvsh9kyUpjEkpKrLfxA2qHkBfYiz6Wu%2BtT3lnmCJOfrbHeRU8Vw%2Besv83C57cMY%2FBztNj12zqzUKn7J3HoDfVfG3VHf7AABV8CrELtCd21SPgo%2FdUABTxXXQvSdinHCXsDq%2BP6B7TNgtESZzC9QbalrG4YhYgINm3omBLoqjCiXPySzy14LFjJOXliPyF5a%2FOzToFoGJ323t%2BOYtNruztiTeADH3zZDhxr%2FWBddhiHCX6FyjRN0mJbrWg9KqfqUm6DIzTpTOAe%2FTHE2VwgSgDk0TpTybzSpD9Y%2B9%2FEuQwepzpLnbqSLNZk3UdOhtHjbML1DgzSY2OUbN1aJgKr%2FWJSiRxHB2GF%2BgwNEKHZWAifOIA3TfIQ871tVkfMpnnI0XQdRx1zi9Q59wIdUovKVaSjlhKOkatJeUhvkHSHMBxNmHpccQpKfZSp6z833n2lKhmFFc5ATUrmiZC%2BGNE0grno8uuPth5ufQ0w7itE8mXS08zjNs5Vny5%2FDTjj8oHN6Oxc1rkynojsoNs80lwWaZ8WO2tfwM%3D%3C%2Fdiagram%3E%3C%2Fmxfile%3E)
## Реализация программы

Программа написана на языке Cи.

```c++
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
```

## Результат работы программы

### Пример 1

```
Введите число от 1 до 999, обозначающее денежную единицу:21
21 рубль
```

### Пример 2

```
Введите число от 1 до 999, обозначающее денежную единицу:12
12 рублей
```

### Пример 3

```
Введите число от 1 до 999, обозначающее денежную единицу:24
24 рубля
```

### Пример 4

```
Введите число от 1 до 999, обозначающее денежную единицу:115
115 рублей
```

## Информация о разработчике

```
Имя: Страхова Виктория Викторовна
Группа: бИЦТ-261
Вариант: 27
```
