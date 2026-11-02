# Домашнее задание к работе 7

## Вариант 22

## Условие задачи
Составить программу, которая интерпретирует степени 10 в соответствующие приставки вида «пико», «нано» ... «тера» (Вариант 22). Программа должна корректно обрабатывать ввод и выводить приставку для степеней от -24 до 24, а также сообщать об ошибке, если ввод некорректен или степень выходит за допустимые пределы.

## 1. Алгоритм и блок-схема

### Алгоритм

1. Начало.
2. Спросить у пользователя число `p` (это степень).
3. Проверить ввод: если ввели букву или не число — показать ошибку и выйти.
4. Написать на экране слово "Приставка: ".
5. С помощью `switch-case` подобрать приставку для числа `p`:
   * Если `p` от -24 до -1 — вывести дольную приставку (нано, микро, милли и т.д.).
   * Если `p` равно 0 — вывести "единица".
   * Если `p` от 1 до 24 — вывести кратную приставку (кило, мега, гига и т.д.).
6. Если число `p` не подошло ни под одно условие (например, его нет в списке или оно больше 24) — написать: "Для степени 10^[p] приставка не предусмотрена".
7. Конец.

### Блок-схема

<img width="710" height="852" alt="1212" src="https://github.com/user-attachments/assets/f7d4f19b-10b0-41f9-abd5-ab3979215a6d" />

## 3. Код программы

int DZ() {

    setlocale(LC_CTYPE, "RUS");

    int p;

    printf("Введите степень числа 10 (от -24 до 24): ");
    if (scanf("%d", &p) != 1) {
        printf("Ошибка: неверный формат ввода.\n");
        return 1;
    }

    printf("Приставка: ");

    switch (p) {
    case -24: printf("иокто (y)\n"); break;
    case -21: printf("зепто (z)\n"); break;
    case -18: printf("атто (a)\n"); break;
    case -15: printf("фемто (f)\n"); break;
    case -12: printf("пико (p)\n"); break;
    case -9:  printf("нано (n)\n"); break;
    case -6:  printf("микро (мк)\n"); break;
    case -3:  printf("милли (м)\n"); break;
    case -2:  printf("санти (с)\n"); break;
    case -1:  printf("деци (д)\n"); break;
    case 0:   printf("(единица)\n"); break;
    case 1:   printf("дека (да)\n"); break;
    case 2:   printf("гекто (г)\n"); break;
    case 3:   printf("кило (к)\n"); break;
    case 6:   printf("мега (М)\n"); break;
    case 9:   printf("гига (Г)\n"); break;
    case 12:  printf("тера (Т)\n"); break;
    case 15:  printf("пета (П)\n"); break;
    case 18:  printf("экса (Э)\n"); break;
    case 21:  printf("зетта (З)\n"); break;
    case 24:  printf("йотта (Й)\n"); break;

    default:
        printf("для степени 10^%d приставка не предусмотрена\n", p);
        break;
    }

    return 0;
}

int main() {

    DZ();
    
    return 0;
    
}

**Пример 1**

<img width="1103" height="639" alt="image" src="https://github.com/user-attachments/assets/298233d3-8df2-4776-b7ac-0dd85da5762b" />


**Пример 2**

<img width="1103" height="639" alt="image" src="https://github.com/user-attachments/assets/19b1fea8-07a4-466a-bbc1-f1e202cf86f1" />


**Пример 2**

<img width="1103" height="639" alt="image" src="https://github.com/user-attachments/assets/2866aec6-be1f-4450-9a38-cb2c85cba135" />


## 4. Информация о разработчике

*   **ФИО:** Рожкова Екатерина Юрьевна
*   **Группа:** 6ИЦТ-261
