//Algoritmos de ordenação de arrays
//Aqui vai estar os algoritmos de ordenação de array de minha escolhae tentarei implementá-los futuramente, usando orientação a objetos.
#include <iostream>
#include <cstring>
#include "sort_functions.cpp"
#define TAM 10

int main(){
	int array[TAM] = {10,9,8,7,6,5,4,3,2,1};
	int arTam = sizeof(array)/sizeof(int);
		std::cout << "O array a ser ordenado é: ";
		imp(arTam, array);

		std::cout << " Método e resultado : ";

		//std::cout << "bubble_sort " << std::endl;
		//bubble_sort(arTam, array);
		//imp(arTam, array);

		std::cout << std::endl;



	return 0;
}