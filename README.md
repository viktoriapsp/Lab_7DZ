
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
<img width="802" height="812" alt="image" src="https://github.com/user-attachments/assets/8fb782a4-5c2a-4c32-8d7c-33af3ccce403" />

[Ссылка на схему](https://viewer.diagrams.net/?tags=%7B%7D&lightbox=1&highlight=0000ff&edit=_blank&layers=1&nav=1&dark=auto#R%3Cmxfile%3E%3Cdiagram%20name%3D%22%D0%A1%D1%82%D1%80%D0%B0%D0%BD%D0%B8%D1%86%D0%B0-1%22%20id%3D%224A7QVHGq1DZSWLY9DBwo%22%3E7Ztbc5s4FMc%2FDdPdh3i4WFweYyfNdnZ3pjuZnSaPilFBUy5ekGunn36PQDIXkxoIUOr0BcORBOh3%2FhwdhKwY6%2FBwl%2BCt%2F3fskkDRVfegGDeKruvG0oIfbnnOLTbSc4OXUDc3aYXhnn4jwqgK6466JK1UZHEcMLqtGjdxFJENq9hwksT7arXPcVC96hZ75MRwv8HBqfUTdZkveqFbhf0PQj1fXlkznbwkxLKy6EnqYzfel0zGrWKskzhm%2BV54WJOAw5Nc8nbvXyg93lhCItamQcpwwk4bifOk7Fl2GZoBXThY7X3KyP0Wb3jJHhwMNp%2BFARxpsJu3%2FIqDnWip3KjK6ibbqgpUsS25D9tVtr0VjUjCyKF0B%2BKe70gcEpY8QxW%2FhBUJhvvCBZrkKs5imOJYCE0WYyEA73jmghHsCEzNyEAGmzbEkngXuYQ3UntQC3DKXOpRcI6aWdQvfE9HsJWPwQC8zBqvZZ3XAMDSPWUbv0GaDcz8OHzapT145RcB229Hcr%2F3oqSpp5iOGCQmvYbJGURXKZkMUllMaj9QToOc7CqnK63KaWkOxAmEelmkdHsEUiRyJwjt1yKEF2EeZWHenCqoW%2FYQrAQX4p4M%2Fafs4l2ykUIpBtAyUjjLvTiME%2BbHXhzh4LawrqqjQwkyOVD2wM0LJI4eZUkEfSoV8cNHcYJmsAkJMKNfqx1qoiSafoxpxArQy1qY0%2BrDJ%2FTdI0y0qrE%2B3kY7%2FHoH%2FD%2BYMySbWb%2Br6cD49K0a%2FVyGg9A3%2Bom%2FSIXm5ZNSxvEKt7QOHcueoaOcFw0MsISvRKyDqEUuMgG%2B4CkQAMXrGn6SJNRTjhJ2jddf%2BAneMSsscEC9CPY30JYkYOAjEQXJXouCkLpujpOk9Ju4Kuex5Y9U1iO0UtBN08jHAfGUoPUY14hNpknqwhhAhmh%2BMlzorw2ux1xvGiWiDkpEc1IiWKF%2FqpH%2FLOekS3N2utQ6h8fBR3fTPJPwD5dbgazNDrI25yRrtFg4uaTbz3l8T9LDKNrqmy4d3%2FB%2F9HA%2FuJ6vatmqOd67AujZ6qBna0561maVMdgz0%2FEM4rKuTalju4OO7VnoOJvgsV%2BY00czitFOf20fZxcvLkobFppQ3U4HdTuzULeM0iKb1kQ6rc0qn5YRakbSnkHgRuaUgVv6oJW2ZeVfobulwLvMxc9q4lF8cRk%2Fu65%2F8hhwLpgHv1%2F0v5sTjkm%2Fy1T8JdK%2FThL8XKogAlvrlMYyayteznxWqdWHnfwOWiZQY0qhy3eFS5TC%2BTF%2BTPpdptOnoq9V2Gf1Xkv%2FOHKrqq4P%2FGzWJzltFXV41uqtUT2jG87bf376d%2FdgfXn8J1w%2FeOGdgT6w%2BKqVv1Mfb%2Fku1MJBQILYS3DI8zGSULgBnsRVyz4WBefWW2Tn%2FhCl1CXC8pkeiFwP%2BeKKDCfP9PTSugyIJHz9WMsM79x6DMOsSMdAy4qfTpYJ9EkCGz2i%2F6Qe4b6ATHv1kl%2F4O6aim%2F%2Ft%2BLLPVVY3z82NrJZWWiqJsq1Tqt3Hq2aDV2urbK7sM%2B9Tg3nVeONeBct6BH8aVX9qy6n82Wpp3gX7s3hK343lTEM9M483mDPRG3cmWN6P8XBWh9ClM9XDab1xf045hJpq1at9FvXCYfFvkDyzLf5TY9z%2BDw%3D%3D%3C%2Fdiagram%3E%3C%2Fmxfile%3E).
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
