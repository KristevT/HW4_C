#include <stdio.h>

int main() {
    int i, w, j, n, k;
    int c = 1;
    scanf("%d %d", &n, &k);

    // i, w, j - переменные для циклов for
    // c - счётчик, создающий новый абзац каждые 7 дней
    // n - номер дня недели первого числа месяца
    // k - кол-во дней в этом месяце

    for (w = 1; w < n; w++) { // Пустое место в первой неделе
        printf("   ");
    }

    if (k <= 7-n) {
        for (j = 1; j < k; j++) { // Если весь месяц состоит из одной недели (до 7 дней)
        printf("%d  ", j);
        }
    } else {
        for (j = 1; j <= 7-n; j++) { // Первая неделя
            printf("%d  ", j);
        }
    }

    printf("%d\n", j); // Воскресенье первой недели + новый абзац

    for (i = j+1; i <= k; i++) { // Остальные дни
        if (c % 7 == 0) {
            printf("%d\n", i); // Добавление нового абзаца каждые 7 дней
        } else if (i < 10) {
            printf("%d  ", i); // Доп. пробел после чисел {1-9}. Просто для красивого визуала
        } else {
            printf("%d ", i); // Вывод номера дня
        }
        c++;
    }
    return 0;
}