#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "rus");
	//1. Составьте программу,
	//выводящую на экран квадраты чисел от 10 до 20 включительно.
	/*int i = 10;
	while (i <= 20) {
		cout << i * i << ' ';
		i++;
	}
	cout << endl;
	return 0;*/
	//2. Даны натуральные числа от 35 до 87.
	//Вывести на консоль те из них,
		//которые при делении на 7 дают остаток 1, 2 или 5.
	/*int i = 35;
	while (i <= 87) {
		if (i % 7 == 1 || i % 7 == 2 || i % 7 == 5)cout << i << ' ';
		i++;
	}
	cout << endl;
	return 0;*/
	//3. Найдите сумму  1 + 2 + 3 + … + n,
		//где число n вводится пользователем с клавиатуры.
	/*int n;
	cin >> n;
	int i = 0;
	while (i <= n) {
		i++;
		cout << i <<  ' ';
		
		
	}
	cout << endl;
	return 0;*/
	//4. Выведите в консоль все трехзначные числа, сумма цифр которых равна 15.
	int i = 99 , sum = 15, a , b , c ;
	
	while (i <= 999) {
		a=i / 100;
		b=(i / 10) % 10;
		c = i % 10;
		if ((a+b+c) == sum)cout << i << endl;
		i++;
	}
	
	return 0;
}