#include <stdio.h>

int main () {
    int month, year;
    scanf("%d %d", &month, &year);

    if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) { // Янв, Мар, Май, Июл, Авг, Окт, Дек
        printf("%d\n", 31);
    } else if (month == 4 || month == 6 || month == 9 || month == 11) { // Апр, Июн, Сен, Ноя
        printf("%d\n", 30);
    } else if ((month == 2) && ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))) { // Проверка на високосный год
        printf("%d\n", 29);
    } else {
        printf("%d\n", 28); // Февраль
    }
}
