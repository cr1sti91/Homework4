#include <iostream>
#include <iomanip> //permite utilizarea functiei std::setw()
				   //utila la setarea latimii spatiului in care este afisat textul

int main()
{
	//Declararea si initializarea (pentru siguranta) variabilelor
	double first_num{}, second_num{}; 
	std::cout << "Simple Calculator" << std::endl;

	//Citirea variabilelor de la tastatura
	std::cout << "Introduceti primul si al doilea numar: "; 
	std::cin >> first_num >> second_num; 

	const int n = 21; //Numarul de caractere ce este argument pentru functia std::setw() 
	std::cout << std::left; //Aliniem textul la stanga
	std::cout << std::boolalpha; //Valorile booleane le afiseaza prin true sau false
	std::cout << std::endl; //Inseram un caracter de linie noua pentru claritate

	//Afisarea operatiilor
	std::cout << std::setw(n) << "Adunarea : " << first_num << " + " << second_num << " = " << first_num + second_num << std::endl;
	std::cout << std::setw(n) << "Scaderea : " << first_num << " - " << second_num << " = " << first_num - second_num << std::endl;
	std::cout << std::setw(n) << "Inmultirea : " << first_num << " * " << second_num << " = " << first_num * second_num << std::endl;
	std::cout << std::setw(n) << "Impartirea : " << first_num << " / " << second_num << " = " << first_num / second_num << std::endl;
	std::cout << std::endl;
	std::cout << std::setw(n) << "Comparare cu > : " << first_num << " > " << second_num << " = " << (first_num > second_num) << std::endl;
	std::cout << std::setw(n) << "Comparare cu < : " << first_num << " < " << second_num << " = " << (first_num < second_num) << std::endl;
	std::cout << std::setw(n) << "Comparare cu >= : " << first_num << " >= " << second_num << " = " << (first_num >= second_num) << std::endl;
	std::cout << std::setw(n) << "Comparare cu <= : " << first_num << " <= " << second_num << " = " << (first_num <= second_num) << std::endl;
	std::cout << std::setw(n) << "Comparare cu == : " << first_num << " == " << second_num << " = " << (first_num == second_num) << std::endl;
	std::cout << std::setw(n) << "Comparare cu != : " << first_num << " != " << second_num << " = " << (first_num != second_num) << std::endl;	
	std::cout << std::endl;
	std::cout << std::setw(n) << "Pre-incrementare : " << "++" << first_num << " = " << ++first_num << std::endl; 
	std::cout << std::setw(n) << "Pre-decrementare : " << "--" << first_num << " = " << --first_num << std::endl; 
	std::cout << std::setw(n) << "Post-incrementare : " << first_num << "++" << " = " << first_num++ << std::endl; 
	std::cout << std::setw(n) << "Post-decrementare : " << first_num << "--" << " = " << first_num-- << std::endl; 
	std::cout << "In final first_num = " << first_num << std::endl;

}
