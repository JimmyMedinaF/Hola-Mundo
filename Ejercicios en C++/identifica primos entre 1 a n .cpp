/* Programa para hallar los numeros primos que existen entre a y num*/

#include <iostream>
using namespace std;

int main() {
	int num, a, b;
	bool primo;
	cout<<"ingrese un numero: ";
	cin>>num;
	for(b=1;b<=num;b++){
		primo=true;
		for (a=1;a<=b;a++){
			if (b%a==0){
				if ((a!=b)&&(a!=1)){
					primo=false;
				}
			}
		}
		if (primo){
			cout<<b<<endl;
		}
	}
	return 0;
}
