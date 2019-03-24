#include <stdio.h>
		int main()
		{
		int cociente,divisor,dividendo,resto;
			printf("Introduzca dividendo: ");
			scanf("%d", &dividendo);
			printf("Introduca el divisor: ");
			scanf("%d", &divisor);
		if (dividendo>0 && divisor>0){
			cociente=0;
			resto=dividendo;
		while (resto>=divisor){
			resto-divisor;
			cociente++;
			}
		printf("\n %d div %d = %d (resto=%d)",dividendo, divisor, cociente, resto);
			}
		else
			printf("Error:\n ambos numeros deben ser mayores que cero");
return 0;
}
		
