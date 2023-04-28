#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main () {
    int req = 0; // Счётчик требований
    int letter; // Коды ASCII букв по отдельности (первая проверка)
    int ascii_count = 0; // Счётчик для первой проверки (все символы с кодами 33-126)
    int class_up = 0, class_low = 0, class_digit = 0, class_misc = 0; // Счётчик для третьей проверки (минимум 3 класса символов)
    char password[100];
    scanf("%s", &password); // Ввод пароля

    for (size_t i=0; i<strlen(password); i++) { // Первая проверка - коды символов ASCII (33-126)
        letter = (int) password[i];
        if ((33 <= letter) && (letter <= 126)) {
            ascii_count++;
        }
    }
    if (ascii_count == strlen(password)) {
        req++;
    }

    if ((8 <= strlen(password)) && (strlen(password)) <= 14) { // Вторая проверка - длина пароля (8-14 символов)
        req++;
    }

    for (size_t i=0; i<strlen(password); i++) { // Третья проверка - классы символов
        if (isupper(password[i])) {
            class_up = 1;
        } else if (islower(password[i])) {
            class_low = 1;
        } else if (isdigit(password[i])) {
            class_digit = 1;
        } else {
            class_misc = 1;
        }
    }
    if (class_up + class_low + class_digit + class_misc >= 3) { // Не менее трёх разных классов символов
        req++;
    }

    printf(req == 3 ? "YES":"NO");

    return 0;
}