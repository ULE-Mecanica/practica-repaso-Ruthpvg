#include <stdio.h>
int main(){
		int a, b, resultado;
			resultado=1;
			printf("Dame un numero: ");
			scanf("%d", &a);
			b=a;
		do{
			resultado= resultado*b;
			b --;
			}
		while (b>1);
			printf("EL factorial es: %d",resultado);
return 0;
}	
