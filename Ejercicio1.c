#include <stdio.h>
				int multiplica (int a, int b);
				int main()
				{
				int num1, num2,total;
					printf("Dame un numero: \n");
					scanf("%d", &num1);
					printf("Dame otro numero: \n");
					scanf("%d", &num2);
				total= multiplica(num1,num2);
					printf("El resultado es: %d\n", total);
				}
				int multiplica (int num1,int num2){
				int i;
				int suma=0;
				for (i=0; i<num2; i++){
					suma= suma+num1;
					}
return suma;
}

