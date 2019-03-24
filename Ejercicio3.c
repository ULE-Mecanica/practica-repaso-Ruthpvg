#include <stdio.h>
int main(){
			int contrasena, cont=0;
			do{
				printf("Introduce contraseña: ");
				scanf("%d", &contrasena);
			if (contrasena<4567){
				printf("La contraseña es menor que: %d\n",contrasena);
				printf("contraseña incorrecta\n");
				cont ++;
				}
			if(contrasena==4567){
				printf("contraseña correcta");
				}
			}
			while (contrasena!=4567 && cont<3);
			if(cont==3){
				printf("Intentos agotados");
				}
return 0;
}
		
