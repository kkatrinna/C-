// ConsoleApplication4.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "");
	int figure{};
	int type{}, filling{};
	char ch{};
	cout << "Выберите тип фигуры:\n1.Треугольник\n2.Круг "<<endl;
	cin >> figure;
	if (figure == 1)
	{
		int size{};
		char symbol{};
		int position{};
		cout << "Выберите тип треугольника:\n 1. Прямоугольный\n 2. Равнобедренный" << endl;
		cin >> type;
		cout << "Выберите позицию треугольника: ";
		if (type == 2)
		{
			cout << "\n" << "1.\n" << "  * \n" << " *** \n" << "*****\n";
			cout << "2. \n" << "*****\n" << " *** \n" << "  * \n" << endl;
			cout << "3. \n" << "   *\n" << "  **\n" << " ***\n" << "  **\n" << "   *\n";
			cout << "4. \n" << "*   \n" << "**  \n" << "*** \n" << "**  \n" << "*    " << endl;
		}
		else if (type == 1)
		{
			cout << "\n" << "1.\n" << "    *\n" << "   **\n" << "  ***\n" << " ****\n" << "*****\n";
			cout << "\n" << "2.\n" << "*     \n" << "**   \n" << "***  \n" << "**** \n" << "*****\n";
			cout << "\n" << "3.\n" << "*****\n" << "**** \n" << "***  \n" << "**   \n" << "*     \n";
			cout << "\n" << "4.\n" << "*****\n" << " ****\n" << "  ***\n" << "   **\n" << "    *" << endl;
		}
		cin >> position;
		cout << "Выберите: \n 1. Заполненный\n 2. Пустой\n";
		cin >> filling;
		cout << "Выберите символ для отрисовки: ";
		cin >> symbol;
		cout << "Выберите размер треугольника:";
		cin >> size;
		if (type == 1 && position == 2 && filling == 1)//прямоугольный, снизу слева, заполненный
		{
			for (int i = 1; i <= size; i++) {
				for (int j = 1; j <= i; j++)
					cout << ch;
				cout << endl;
			}
		}
		else if (type == 1 && position == 3 && filling == 1)//прямоугольный, сверху слева, заполненный
		{
			for (int i = 1; i <= size; i++) {
				for (int j = 1; j <= size - i + 1; j++)
					cout << ch;
				cout << endl;
			}
		}
		else if (type == 1 && position == 4 && filling == 2)//прямоугольный, сверху справа, заполненный
		{
			for (int i = 1; i <= size; i++) {
				for (int j = 1; j < i; j++)
					cout << "  ";
				for (int j = 1; j <= size - i + 1; j++)
					cout << ch << " ";
				cout << endl;
			}
		}
		else if (type == 1 && position == 1 && filling == 1) //прямоугольный, снизу справа, заполненный
		{
			for (int i = 0; i < size; i++) {
				for (int j = 1; j < size - i; j++) {
					cout << " ";
				}
				for (int k = 0; k <= i; k++) {
					cout << ch;
				}
				cout << endl;
			}
		}
		else if (type == 1 && position == 3 && filling == 2)//прямоугольный, снизу слева, пустой
		{
			for (int i = 1; i <= size; i++) {
				for (int j = 0; j < i; j++) {
					if (i != size) {
						if (j == 0 || j == i - 1) {
							cout << ch;
						}
						else {
							cout << " ";
						}
					}
					else {
						cout << ch;
					}
				}
				cout << endl;
			}
		}
		else if (type == 2 && position == 4 && filling == 1) // равнобедренный, слева, заполненный
		{
			for (int i = 0; i < size; i++)
			{
				for (int j = (size - 1) / 2 - abs((size - 1 - 2 * i) / 2); j >= 0; cout << ch, j--);
				cout << endl;
			}
		}
		else if (type == 2 && position == 1 && filling == 1)//равнобедренный, снизу, заполненный
		{
			for (int i = 0; i < size; i++)
			{
				for (int j = 1; j < size - i; j++)
					cout << ' ';
				for (int j = size - 2 * i; j <= size; j++)
					cout << ch;
				cout << endl;
			}
		}
		else if (type == 2 && position == 2 && filling == 1)//равнобедренный, сверху, заполненный
		{
			for (int i = size; i >= 1; --i)
			{
				for (int j = 0; j < size - i; ++j)
					cout << " ";
				for (int n = i; n <= 2 * i - 1; ++n)
					cout << ch;
				for (int n = 0; n < i - 1; ++n)
					cout << ch;
				cout << endl;
			}
		}
		else if (type == 2 && position == 4 && filling == 1)//равнобедренный, слева, заполненный
		{
			for (int i = 1; i < 20; i++) {

				if (i <= 10)
				{
					size = i;
				}
				else
				{
					size = 20 - i;
				}
				for (int j = 0; j < size; j++)
				{
					cout << ch;
				}
				cout << endl;
			}
		}
		else if (type == 2 && position == 3 && filling == 1)//равнобедренный, справа, заполненный
		{
			for (int i = 1; i <= size; i++) {
				for (int j = 0; j < size - i; j++) {
					cout << " ";
				}
				for (int k = 0; k < i; k++) {
					cout << ch;
				}
				cout << endl;
			}
			for (int i = 1; i <= size - 1; i++) {
				for (int j = 0; j < i; j++) {
					cout << " ";
				}
				for (int k = 0; k < size - i; k++) {
					cout << ch;
				}
				cout << endl;
			}
		}
		else if (type == 2 && position == 4 && filling == 2)// равнобедренный, слева, пустой
		{
			cout << symbol << endl;
			for (int i = 0; i < size / 2 + 1; i++)
			{
				cout << symbol;
				for (int j = 0; j < i; j++)
					cout << ' ';
				cout << ch << endl;
			}
			for (int i = 0; i < size / 2; i++)
			{
				cout << ch;
				for (int j = 0; j < size / 2 - i; j++)
					cout << ' ';
				cout << ch<< endl;
			}
			cout << ch << endl;
		}
		else if (type == 2 && position == 1 && filling == 2)//равнобедренный, снизу, пустой
		{
			for (int i = 1; i <= size; i++)
			{
				for (int j = 1; j <= size * 2; j++)
				{
					if (j == ((size + 1) - (i - 1)) || j == ((size + 1) + (i - 1)))
						cout << ch;
					else
						if (i == size && j > 1)
							cout << ch;
						else
							cout << ' ';
				}
				cout << endl;
			}
		}
	}
		if (figure == 2)
		{
			int rad{};
			int trincless{};
			int filling{};
			cout << "Выберите\n1.Закрашенный\n2.Пустой"<<endl;
			cin >> filling;
			cout << "Введите радиус круга: " << endl;
			cin >> rad;
			cout << "Выберите символ: ";
			cin >> ch;
			if (filling == 2)
			{
				cout << "Введите толщину окружности: "<< endl;
				cin >> trincless;
			}
			if (filling == 1)
			{
				int n{};
				(rad < 10) ? n = 2 : n = 4;
				for (int i = -rad; i <= rad; i++)
				{
					for (int j = -rad; j <= rad; j++)
					{
						if (pow(i, 2) + pow(j, 2) <= pow(rad, 2) + n)
						{
							cout << ch;
						}
						else
						{
							cout << " ";
						}
					}
					cout << endl;
				}
			}
			else if (filling == 2)
			{
				int n = trincless + rad;
				for (int i = -n; i <= n; i++)
				{
					for (int j = -n; j <= n; j++)
					{
						if ((pow(i, 2) + pow(j, 2) >= pow(rad, 2) - trincless * rad)
							and (pow(i, 2) + pow(j, 2) <= pow(rad, 2) + trincless * rad))
						{
							cout << ch;
						}
						else
						{
							cout << " ";
						}
					}
					cout << endl;
				}
			}
		}
	}