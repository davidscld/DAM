#include <stdio.h>
#include <stdlib.h>
int main (void){

int cant, tam, dif, total=0, i;

printf("Dame la cantidad de compartimentos ");
scanf("%d", &cant);

printf("Dame la cantidad del compartimento mas grande ");
scanf("%d", &tam);

printf("Dame la diferencia entre compartimentos ");
scanf("%d", &dif);


for(i=0; i<cant; i++){
	
	total+= tam;
	tam-=dif;
	
}
printf("va a necesitar %d litros de agua " , total);
}


