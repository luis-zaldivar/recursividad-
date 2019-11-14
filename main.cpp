#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;


int paso_referencia(int &m){
		m=m+4;
		return m;
}

int paso_valor(int n){
	n++;
	return n;
	
}
int Factorial(int n){
	 if(n < 0)
	  return 0;
	 else if(n > 1){
	 
	  return n * Factorial(n-1);
	 }else
	  return 1;
}
int fib(int n){

    if(n < 2)
        return n;

    return fib(n-1) + fib(n-2);
  }



int main(int argc, char** argv) {
	int valor1,r;
	valor1=0;
	paso_referencia(valor1);
	r=paso_valor(valor1);
	cout<<"el paso por referencia da: "<<valor1<<endl;
	cout<<"el paso por valor da: "<<r<<endl;
	Factorial(valor1);
	cout<<"el factorial de paso por referencia es: "<<Factorial(valor1)<<endl;
	cout<<"el fibonacci de paso por valor es: "<<fib(r)<<endl;
	
	
	
	return 0;
}
