//função: Calcular salário mensal
//autor: João Cândido

#include <stdio.h>
#include <locale.h>

int main (){
	setlocale(LC_ALL, "portuguese");
	
	float ph, multiplicar;
	// O float é para possibilitar o uso de decimais 
	// Se coloca nas entradas que podem/necessitam utilizar decimais, para que assim ficque realmente completo 
	int ht;
	
	printf("Quanto você ganha por hora? ");
	scanf("%f", &ph);
	
	printf("Número de horas trabalhadas no mês: ");
	scanf("%d", &ht);
	
	multiplicar = ph * ht;
	
	printf("Seu salário deu o total de: %.2f R$", multiplicar);
	// Se coloca ".qqtq" para diminuir ou aumentar a quantidade de casas após a vírgula, sendo essa quantidade o número colocado.
	// É colocado somente na saída, pois é o resultado, garantindo que não aja uma quantidade de casas desnecessárias.
	
return 0;
}
