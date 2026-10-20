#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <math.h> 


int z1()
{
    setlocale(LC_CTYPE, "RUS");
    char c;
    printf("Введите символ: ");
    scanf("%c", &c);

    switch (c)
    {
    case '0':
    case '1':
    case '2':
    case '3':
    case '4':
    case '5':
    case '6':
    case '7':
    case '8':
    case '9':
        printf("Это цифра\n");
        break;

    case 'А': case 'Б': case 'В': case 'Г': case 'Д': case 'Е': case 'Ё':
   
    case 'а': case 'б': case 'в': case 'г': case 'д': case 'е': case 'ё':
   
        printf("Это буква\n");
        break;

    default:
        printf("Неизвестный символ\n");
    }

    return 0;
}
int z2() {
    setlocale(LC_ALL, "RUS");

    float x, y;
    char c;

    printf("Введите выражение (например, 5+3): ");

  
    scanf("%f%c%f", &x, &c, &y);

    switch (c)
    {
    case '+':
        
        printf("=%.2f\n", x + y);
        break;

    case '-':
        printf("=%.2f\n", x - y);
        break;

    case '*':
        printf("=%.2f\n", x * y);
        break;

    case '/':
       
        if (y != 0) {
            printf("=%.2f\n", x / y);
        }
        else {
            printf("Ошибка: деление на ноль!\n");
        }
        break;

        
    case '^':
       
        printf("=%.2f\n", pow(x, y));
        break;

    default:
        printf("Ошибка: неизвестная операция\n");
        break;
    }

    return 0;
}



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
