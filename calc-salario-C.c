//fun��o: Calcular sal�rio mensal
//autor: Jo�o C�ndido

#include <stdio.h>
#include <locale.h>

int main (){
	setlocale(LC_ALL, "portuguese");
	
	float ph, multiplicar;
	// O float � para possibilitar o uso de decimais 
	// Se coloca nas entradas que podem/necessitam utilizar decimais, para que assim ficque realmente completo 
	int ht;
	
	printf("Quanto voc� ganha por hora? ");
	scanf("%f", &ph);
	
	printf("N�mero de horas trabalhadas no m�s: ");
	scanf("%d", &ht);
	
	multiplicar = ph * ht;
	
	printf("Seu sal�rio deu o total de: %.2f R$", multiplicar);
	// Se coloca ".qqtq" para diminuir ou aumentar a quantidade de casas ap�s a v�rgula, sendo essa quantidade o n�mero colocado.
	// � colocado somente na sa�da, pois � o resultado, garantindo que n�o aja uma quantidade de casas desnecess�rias.
	
return 0;
}
