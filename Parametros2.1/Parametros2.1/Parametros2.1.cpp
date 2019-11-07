#include <iostream>
#include <string>

using namespace std;
//Prototipo de funcion
void intercambio(int*, int*);

int main()
{
	int a, b;

	cout << "Introduce un primer valor: " << endl;
	cin >> a;
	cout << "Introduce un segundo valor: " << endl;
	cin >> b;
	cout << endl;
	cout << "Valor de a: " << a << endl;
	cout << "Valor de b: " << b << endl << endl << endl;
	
	intercambio(&a, &b);
	cout << "D e s p u e s   d e l   i n t e r c a m b i o" << endl << endl;
	cout << "Valor de a: " << a << endl;
	cout << "Valor de b: " << b << endl;
	system("pause");
	return 0;
}