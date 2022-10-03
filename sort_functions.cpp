#include <iostream>
#include <cstring>


void imp(int arTam, int array[]){
	std::cout << std::endl;
	for (int i= 0; i < arTam ; i++){
		std::cout  << "|" << array[i];
	}
	std::cout << "|";
}
void bubble_sort(int arTam,int array[]){
	int aux, cont, i=0;
	bool end = true;

	while(end){
		//verifica o numero da esquerda com o da direita, trocando se o da esquerda for menor.
		for(i = 0; i < arTam - 1; i++){
			int proxI = i+1;

			if(array[i] > array[proxI]){

				aux = array[i];
				array[i] = array[proxI];
				array[proxI] = aux;

				cont=0;				
			}else{
				cont++;
			}
		}
		if(cont >= arTam){
			end = false;
		}
		
	}


}