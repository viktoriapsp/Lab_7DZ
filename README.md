
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
<img width="802" height="812" alt="image" src="https://github.com/user-attachments/assets/33e2331c-4889-491a-940f-a81ec8516454" />


[Ссылка на схему](https://viewer.diagrams.net/?tags=%7B%7D&lightbox=1&highlight=0000ff&edit=_blank&layers=1&nav=1&dark=auto#R%3Cmxfile%3E%3Cdiagram%20name%3D%22%D0%A1%D1%82%D1%80%D0%B0%D0%BD%D0%B8%D1%86%D0%B0-1%22%20id%3D%224A7QVHGq1DZSWLY9DBwo%22%3E7Vtdc6M2FP01TNuHMOJDfDzGcTbd6XZmO5nOJo%2FEaA1dbFyQ1%2Fb%2B%2BkogGSSwDUQmtKkfMLpIGJ17dO%2BRhDXrbrV%2FyIJN9HsaokQzQbjXrLlmmqZlu%2BSLWg6lxYNmaVhmcViajMrwGP9AzAiYdRuHKBcq4jRNcLwRjYt0vUYLLNiCLEt3YrWvaSL%2B6iZYoobhcREkTeuXOMQR64XpVvZfUbyM%2BC8bjl9eWQW8MutJHgVhuquZrHvNusvSFJdnq%2F0dSih4HJey3YcTV48PlqE17tIgx0GGm43YfXJ84F0mzQi6pDDbRTFGj5tgQa%2FsiIOJLcKrhJQMclq2%2FB4kW9ZSmwNtNi%2BOQCNVPJefk%2BOsON6zRijDaF97AvbMDyhdIZwdSJWoBitkGO4qFxgcV3YXy2FlRjR%2BOWAEWB7vXGFEThhM7ZARGiy6IJal23WIaCMwALUkyHEYL2PiHFBYwDd6ZkJy5MNAAV6OhJct46UAsHwX40XUQs0WzKJ09bLNB%2BBV%2Fgix%2FXxE7pdBKBmgCdMRBg6TKcHkK%2BFVjkYDqU4mMAwov4VOnojTjSHiZDuKcCJE%2FW8hZXpXQAqtwxFC%2By0L4VWYh0WYd8YK6q6nAiuGCwobqb%2BJXbrNFpwoVQKtQ0ru8siKaYajdJmug%2BS%2Bss7E7FADGe1j%2FETNOmSlZ35lTfpUu0SLz%2BwG7cBmKAlw%2FF3sUBtKrOnnNF7jCmhbCnOGnD5J35cIs1YS1sfH6Aa%2F2QP%2BN8aZiM2i36IcuD76roR%2BSUMl6FvDyF9JoWn5pKY4XuGWzqHDHhg66rpIMYA1%2BGqI9SA10yIjwJe8JAxANl0LXjgSoIkjB1vC61PwQuaYAhZBEi%2FX5HxB2qKMGGgmigllb9mFVRyGJZwoj3%2BwX6V4bOiQKnoEZxqct2U%2BChCVBJ1zXCtsXCYB3VJAQzg9Gurma4PrUeuNw0TYg4lwSkwkVtI%2FYJVf9pR46UyOl0bv8Kg8uzvOBcGvTlsRWjs9aO1MidZQ1%2F2S0t3XPM5RWg2j3aFy6TjDf%2Bt0r5zPN5Jada43VyB8dnvw2Z0Sn41JKQZvYjyeQFw2jTF57PXgsTcJHhcLPN6JNX04oRjtD%2Bf2cXXx2lFaawje3778uX1yvz3%2Fsbp7Wq4eLPgRpzd99G8VIAwD2n3Zb7lwRPb7PdjvT4L9PIoztW0wuW2o09su3yp83WImmBz7JxDboTNmbOc%2B6ERvXvn%2F6N6R4H0WO8ZamzQEFp%2BI8GxTpi9oANDyWb7fZllwqFVg%2Fu48BfUAlHxQ3rFbaygPJnXL061JsZO%2F8yjY0FNSK0gSlKTLLFjRoYCymDwAHT%2Fitc%2FVhUu7YcW9P67zOETM8jXeI%2F62ysn9Mr8cZGZt14zEW7q733FwXdotsxyBOhZXAac2cYaMv1aPmP9Sj1BfkCA3O%2BUXmuE10%2Fl7S1%2FKmRV1y7BoFbWM2osssDj6tdpDvOq0eFXaA73xLqQyZV613rlXieXuCv60RH8a9lj%2B7JU5a9Lw9MzkVRm2qvMpTTfMoX8hjA%2FMwcEWp50zMTmf77VqqjU%2F8EKlNW2ib4U8DcBRflaNi5LQukbZE7sVg1I7Ef0%2BcDzFud02TN0QGeUBiTvnsrsNbN0xTB9YJMl4wLGkeaH8wpM65XyOZ%2B82CFWp5adrRSD51b8rRqA%2BbxuMG1nalfyF6KAuEBg2X39RFgjkOa8rhoHmwHdM3T7X4kLgaMyxodSjE9OC5oP4NDJXHxu2PtVYEQi%2B8whELB%2BuIYPEyYrtjxWE3HfuzzEnKw4Qvark5dZWrw5c9D83nX2jDESCH3GZoFPNt1CpyhKRvEHs%2BmfSirJFooHr4Odmwm9GCBOKy%2BQ6MN0hlBgyf%2BovZyiBL25A9SVRY3f2gpqR67vu%2BfoWER3OuRYX1I8pqx%2Fb052BAqh4lpoAsuQH83W%2F%2FlEkh0ix%2BvtZWb36E591%2Fw8%3D%3C%2Fdiagram%3E%3C%2Fmxfile%3E).
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
