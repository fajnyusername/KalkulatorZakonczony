#include <iostream>
using namespace std;

int main()
{
	cout << "Kalkulator \n\n";
	
while(true) 
{
	}	
	cout << "Wpisz dzialanie: ";
	//zmienne:
	double liczba1;
	double liczba2;
	char znak_operator
	double wynik;
	
	cin >> liczba1 >>znak_operator>>liczba2;
	
	if(znak_operator =='+')
	{
		wynik = liczba1 + liczba2
		cout << "Wynik: " << wynik << endl
		                           << endl;
		                           
	}
	else if(znak_operator == '-')
	{
		wynik = liczba1 - liczba2;
		cout << "Wynik: " << wynik << endl
		                           << endl;	                           
	}
		else if(znak_operator == '*')
	{
		wynik = liczba1 * liczba2;
		cout << "Wynik: " << wynik << endl
		                           << endl;	                           
	}
		else if(znak_operator == '/')
	{
		wynik = liczba1 / liczba2;
		cout << "Wynik: " << wynik << endl
		                           << endl;	                           
	}
} 

system("pasue");
return 0;
