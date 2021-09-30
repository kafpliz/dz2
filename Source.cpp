#include <iostream> 
using namespace std;
/*int main() {

	int  a, b;
	double x1, x2, x3;
	cin >> a >> b;
	x1 = -sqrt(-b / a);
	x2 = sqrt(-b / a);
		x3 = 0;
		cout << x1 << x2 << x3<<endl;
		return 0;
}*/
/*Begin25◦
. Найти значение функции y = 3x6 − 6x2 − 7 при данном значении x*/
/*int main() {
	int  x;
	double y;
	cin >> x;




	cout << y << endl;





	return 0;
}*/
/*Begin26◦
. Найти значение функции y = 4(x−3)6 − 7(x−3)3 + 2 при данном значении x.
int main() {
	int x;
	double y;
	cin >> x;
	y = 4 * (x * x * x * x * x * x - 3 * 3 * 3 * 3 * 3 * 3) - 7 * (x * x * x - 3 * 3 * 3) + 2;

		cout << y << endl;
		return 0;
}*/
/*Begin27◦
. Дано число A. Вычислить A8, используя вспомогательную переменную и три операции умножения. Для этого последовательно находить A2,A4, A8. Вывести все найденные степени числа A.*/
/*int main() {
	int A, A2, A4, A8;
	cin >> A;
	A2 = A * A;
	A4 = A2 * A2;
	A8 = A4 * A4;
	
	cout << "a^2" << A2 << endl;
	cout << "a^4" << A4 << endl;
	cout << "a^8" << A8 << endl;
		return 0;
}*/
/*Integer1◦
. Дано расстояние L в сантиметрах. Используя операцию деления
нацело, найти количество полных метров в нем (1 метр = 100 см).
*/
int main() {
	int L;
	cin >> L;
	L = L % 100;
	cout << L << endl;
	return 0;
}