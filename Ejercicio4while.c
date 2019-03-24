#include <stdio.h>
int main(){
		int a=0, resultado=1;
			printf("Dame un numero: ");
			scanf("%d", &a);
		while (a>1){
		resultado= resultado*a;
		a --;
		}
		printf("El factorial es: %d",resultado);
return 0;
}
