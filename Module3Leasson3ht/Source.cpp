#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <Windows.h>

void main() {
	setlocale(LC_ALL, "rus");
	srand(time(NULL));
	//HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	system("color 0f");

	int n = 0;
	do
	{
		printf("n (1-7) = ");
		scanf("%d", &n);

		if (n == 1) {
			printf("1.	Пользователь вводит два числа. Определить, равны ли эти числа, и если нет, вывести их на экран в порядке возрастания.\n");

			int a, b;

			printf("a = ");
			scanf("%d", &a);

			printf("b = ");
			scanf("%d", &b);

			if (a == b) printf("==\n"); else if (a > b) printf("%d\t%d\n", b, a); else printf("%d\t%d\n", a, b);
		}
		else if (n == 2) {
			printf("2.	Пользователь с клавиатуры вводит 5 оценок студента. Определить, допущен ли студент к экзамену. Студент получает допуск, если его средний балл 4 балла и выше\n");
			
			int x, res=0;

			for (int i = 1; i <= 5; i++)
			{
				printf("оценка %d = ", i);
				scanf("%d", &x);
				res = res + x;
			}
			
			res = res / 5;

			switch (res)
			{
			case 1:
			case 2:
			case 3:
				printf("ne dopywen\n");
				break;
			default:
				printf("dopywen\n");
				break;
			}	
		}
		else if (n == 3) {
			printf("3.	Пользователь с клавиатуры вводит 5 оценок студента. Определить, допущен ли студент к экзамену. Студент получает допуск, если его средний балл 4 балла и выше\n");

			int x, res = 0;

			for (int i = 1; i <= 5; i++)
			{
				printf("оценка %d = ", i);
				scanf("%d", &x);
				res = res + x;
			}

			res = res / 5;

			(res < 4) ? printf("ne dopywen!\n"): printf("dopywen!\n");
		}
		else if (n == 4) {
			printf("4.	Написать программу-калькулятор. Пользователь вводит два числа и выбирает арифметическое действие. Вывести на экран результат\n");

			float a, b, res;
			int func;

			printf("a = ");
			scanf("%f", &a);

			printf("b = ");
			scanf("%f", &b);

			printf("выберите что требуется сделать с числами...\n1. +\n2. -\n3. *\n4. /\n");
			scanf("%d", &func);
			
			switch (func)
			{
			case 1: res = a + b;
				break;
			case 2: res = a - b;
				break;
			case 3: res = a * b;
				break;
			case 4: res = a / b;
				break;
			default:
				printf("1. +\n2. -\n3. *\n4. /\n");
				break;
			}
			printf("result = %.2f\n", res);
		}
		else if (n == 5) {
			printf("5.	Написать программу, которая по выбору пользователя меняет цвет консольного приложения. Пользователь может выбрать цвет шрифта и цвет фона\n");
			
			int colorConsole;
			printf("1 - green/blue\n2 - blue/green \n3 - blue/pink\n4 - green/red\n5 - red/green\n6 - red/white\n7 - red/black\n0 - cancel!\n\n");
			scanf("%d", &colorConsole);

			switch (colorConsole)
			{
			case 1: system("color 21");
				break;
			case 2: system("color 12");
				break;
			case 3: system("color 15");
				break;
			case 4: system("color 24");
				break;
			case 5: system("color 41");
				break;
			case 6: system("color 47");
				break;
			case 7: system("color 40");
				break;
			default:
				system("color 0f"); //pink/white
				break;
			}

		}
		else if (n == 6) {
			printf("6.	Написать программу, которая по выбору пользователя возводит введенное им число в степень от нулевой до седьмой включительно\n");
			
			int a,st, res;

			printf(" vvedite 4islo a = ");
			scanf("%d", &a);

			printf("V kakyu stepen' vozvesti? (0-7)\t");
			scanf("%d", &st);

			printf("%d^%d = %d\n",a, st, res = pow(a, st));

			//БЕЗСМЫСЛИЦА КАКАЯ ТО!
			/*switch (st)
			{
			case 0: printf("a^0 = %d\n", pow(a, 0));
				break;
			case 1: printf("a^1 = %d\n", pow(a, 1));
				break;
			case 2: printf("a^2 = %d\n", pow(a, 2));
				break;
			case 3: printf("a^3 = %d\n", pow(a, 3));
				break;
			case 4: printf("a^4 = %d\n", pow(a, 4));
				break;
			case 5: printf("a^5 = %d\n", pow(a, 5));
				break;
			case 6: printf("a^6 = %d\n", pow(a, 6));
				break;
			case 7: printf("a^7 = %d\n", pow(a, 7));
				break;
			default:
				break;
			}*/
		}
		else if (n == 7) {
			printf("7.	В час пик на остановку одновременно подъехали три маршрутных такси, следующие по одному маршруту, в которые тут же набились пассажиры\n");

			int s=0, x, m1, m2, m3;

			printf("v pervoi marwrytke = ");
			scanf("%d", &m1);

			printf("vo vtoroi m = ");
			scanf("%d", &m2);

			printf("v tretei m = ");
			scanf("%d", &m3);

			x = (m1 + m2 + m3) / 3;

			if (m1 > x)	s = s + (m1 - x);
			else if (m2 > x) s = s + (m2 - x);
			else if (m3 > x) s = s + (m3 - x);

			printf("peresadit' %d\n", s);
		}
		

	} while (n > 0);
}