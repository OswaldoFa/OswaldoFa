#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int num1,num2;
	cout << "Dime el n?mero 1:";
	cin >> num1;
    cout << "Dime el n?mero 2:";
	cin >> num2;
    if (num1>num2)
    {
        cout << "N?mero 1 es mayor que n?mero 2";
    }
    else
    {
        cout << "N?mero 2 es mayor que n?mero 1";
    }

	return 0;
}
