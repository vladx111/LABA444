#include <stdio.h>
#include <locale.h>

int zadanie2();
int zadanie3();
int zadanie1();
int main() {
    setlocale(LC_CTYPE, "RUS");


    //zadanie1();
    zadanie2();
    zadanie3();

    return 0;
}

int zadanie1(){

    char c = '!';
    int i = 2;
    float f = 3.14f;
    double d = 5e-12;

    printf("Начальные значения\n");
    printf("char c = '%c'\n", c);
    printf("int i = %d\n", i);
    printf("float f = %.2f\n", f);
    printf("double d = %.2e\n", d);

    printf("\nВведите новые значения\n");

    printf("Введите char: ");
    scanf_s(" %c", &c);

    printf("Введите int: ");
    scanf_s("%d", &i);

    printf("Введите float: ");
    scanf_s("%f", &f);

    printf("Введите double: ");
    scanf_s("%lf", &d);

    printf("\nЗначения\n");
    printf("char c = '%c'\n", c); //1б
    printf("int(16-ричный) = %x\n", i);

    printf("int i = %d\n", i);
    printf("float целая часть = %d\n", (int)f);  // 1а
    printf("float дробная часть = %.2f\n", f - (int)f);
    printf("double d = %.2e\n", d);
    

    return 0;

}

int zadanie2() {
    int a = 11;
    int b = 3;
    scanf_s("%d", &a);
    scanf_s("%d", &b);
    
      

    int x = a / b;
    float y = a / b;
    double z = a / b;
    printf("x= %f\n", y);
    printf("x= %lf\n", z);


    printf(" вывод значения a/b = %2.2f\n", (float)a / (double)b);
  

    return 0;

}

int zadanie3() {

        int n, last, first, summa;
        printf("Введите трёхзначное число: ");
        scanf_s("%d", &n);

        last = n % 10;                   // последняя цифра
        first = n / 100;                 // первая цифра
        summa = (n / 100) + ((n / 10) % 10) + (n % 10);  // сумма цифр

        printf("Последняя: %d\nПервая: %d\nСумма: %d\n", last, first, summa);

        printf("Число наоборот %d\n", n % 10 * 100 + n / 10 % 10 * 10 + n / 100);


        return 0;
    }









