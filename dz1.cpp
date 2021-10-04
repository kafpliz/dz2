		Лукашевич Артём П43021
			begin 4-8


	/*Begin4◦+
	. Дан диаметр окружности d. Найти ее длину L = π·d. В качестве значения π использовать 3.14.*/
#include <iostream>
using namespace std;
int main(){
	int d;
	double L;
	cin>>d;
	L = 3.14*d;
	cout<<L<<endl;

	return 0;
}




	/*	Begin5◦+
	. Дана длина ребра куба a. Найти объем куба V = a3 и площадь его поверхности S = 6·a2*/
#include <iostream>
using namespace std;
int main(){
	int a;
		double V;
		double S;
	cin>>a;
	V=a*a*a;
	S= 6*(a*a);
	cout<<"V="<<V<<"S="<<S<<endl;

	return 0;
}


	/* 	Begin6◦+
	Даны длины ребер a, b, c прямоугольного параллелепипеда. Найти его объем V = a·b·c и площадь поверхности S = 2·(a·b + b·c + a·c).*/
#include <iostream>
using namespace std;
int main(){
	int a,b,c;
		double V;
		double S;
	cin>>a>>b>>c;
	V = a * b * c;
	S = 2*(a*b + b*c + a*c);
	cout<<"V="<<V<<"S="<<S<<endl;
	
	return 0;
}



	/*Begin7◦+
	. Найти длину окружности L и площадь круга S заданного радиуса R:  L = 2·π·R, S = π·R2.В качестве значения π использовать 3.14.*/
#include <iostream>
using namespace std;
int main(){
	 int R,π2;
 	double L;
	double S;
  	cin>>R;
  π =3.14;
 L = 2* π *R;
S = π*(R*R);	
	cout<<"L="<<L<<"S="<<S<<endl;
}

	/*Begin8◦
	 Даны два числа a и b. Найти их среднее арифметическое: (a + b)/2.*/
#include <iostream>
using namespace std;
int main(){
	double a, b;

		double Q;
	cin>>a>>b;
	Q= ( a + b ) / 2;
	cout<<"Q="<<Q<<endl;
return 0;
}







