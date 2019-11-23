using namespace std;
#include <iostream>

int main()
{
	setlocale(LC_ALL, "Russian");
	/*
	int a, b, c, d; //6 задача
	double x, y;
	cout << "axx + bx + c" << "\n Введите a, b, c:" << endl;
	cin >> a >> b >> c;
	if (b == 0)
	{
		if (c == 0)
			cout << "x=0";
		else
		{
			if (a == 0)
				cout << "Нет решений";
			if (-c / a > 0)
				cout << "x1,2=+-" << (sqrt(-c / a));
			else
				cout << "Нельзя вывести корень из отрицательного числа";
		}
	}
	else
	{
		if (c == 0)
		{
			if (a == 0)
				cout << "x=0";
			else
				cout << "x1=0 \n x2=" << (-b / a);
		}
		else
		{
			if (a == 0)
				cout << "x=" << (-c/b);
			else
			{
				if ((b * b - 4 * a * c) < 0)
				{
					cout << "\n Дискриминант меньше 0(";
					return 0;
				}
				d = b * b - 4 * a * c;
				d = sqrt(d);
				x = (-b + d) / (2 * a);
				y = (-b - d) / (2 * a);
				cout << endl << "x1= " << x << "\n x2= " << y;
			}
		}
	}
	*/
	/*
	int n = 1;
	while (n != 2) //7 задача
	{
		int answer;
		cout << "Выберите способ нахождения площади: \n" << "1.По координатам; \n 2.По длинам. \n";
		cin >> answer;
		if (answer == 1)
		{
			int xa, xb, xc, ya, yb, yc;
			double p, s, l1, l2, l3;
			cout << "Введите координаты: \n" << "А(x, y) \n B(x, y) \n C(x, y) \n";
			cin >> xa >> ya >> xb >> yb >> xc >> yc;
			l1 = sqrt((xa - xb) * (xa - xb) + (ya - yb) * (ya - yb));
			l2 = sqrt((xa - xc) * (xa - xc) + (ya - yc) * (ya - yc));
			l3 = sqrt((xc - xb) * (xc - xb) + (yc - yb) * (yc - yb));
			p = (l1 + l2 + l3) / 2;
			if (l1 + l2 - l3 > 0 && l1 + l3 - l2 > 0 && l2 + l3 - l1 > 0)
			{
				s = sqrt(p * (p - l1) * (p - l2) * (p - l3));
				cout << "Площадь: " << s;
			}
			else
				cout << "Треугольник не существует.";
		}
		if (answer == 2)
		{
			double l1, l2, l3, s, p;
			cout << "Введите длины сторон: \n";
			cin >> l1 >> l2 >> l3;
			p = (l1 + l2 + l3) / 2;
			if (l1 + l2 - l3 > 0 && l1 + l3 - l2 > 0 && l2 + l3 - l1 > 0)
			{
				s = sqrt(p * (p - l1) * (p - l2) * (p - l3));
				cout << "Площадь: " << s;
			}
			else
				cout << "Треугольник не существует.";
		}
		if (answer != 1 && answer != 2)
		{		
			cout << "Введено неправильное число";
		}
		cout << "\n Xотите ли Вы начать заново ? \n" << "1 - Да; \n 2 - Нет. \n";
		cin >> n;
	}
	*/
	/*
	cout << "Введите пример: \n"; //8задание
	double a, b, result;
	char S;
	cin >> a >> S >> b;
	if (S != '+' && S != '-' && S != '*' && S != '/')
		cout << "Используйте один из знаков: + - * /" << endl;
	else 
	{
		switch (S) 
		{
		case '+':
			result = a + b;
			break;
		case '-':
			result = a - b;
			break;
		case '*':
			result = a * b;
			break;
		case '/':
			if (b == 0)
			{
				cout << "На ноль делить нельзя.";
				return 0;
			}
			else 
				result = a / b;
			break;
		}
		cout << result << endl;
	}
	*/
cout << "Я хочу сыграть с тобой в игру! \n Попробуй угадать число от 0 до 100 включительно \n"; //9 задание
int a, ua, c;
a = rand() % 101;
c = 0;
while (c < 5)
{
	cin >> ua;
	if (ua == a)
	{
		cout << "Поздравляю! Вы угадали";
		c = 6;
	}
	else
	{
		if (ua > a)
			cout << "Загаданное число меньше \n";
		else
			cout << "Загаданное число больше \n";
		c++;
	}
}
if (c == 5)
	cout << "\n Вы проиграли. Было загадано: " << a;
}