/*

*/
#include <stdio.h>
#include <unistd.h>
#include <conio.h>

int main() {

    // Declaracion de variables.
    double num1;
    double num2;
    double resultado;
    double div;
    

    // Solicita los nmeros y guarda el input en las variables correspondientes.
    printf("Ingrese el primer numero: ");
    scanf("%lf", &num1);
    printf("Ingrese el segundo numero: ");
    scanf("%lf", &num2);
    
     system("cls");
     
    if (div!=0); 
	div = num1 / num2;
    printf("El cociente de los numeros es: %lf\n", div);
        // Suma los valores y le asigna el resultado a otra variable.
    resultado = num1 + num2;
    // Presenta el resultado.
    printf("La suma de los numeros es: %lf\n", resultado);
    resultado = num1 - num2;
    printf("La resta de los numeros es: %lf\n", resultado);
    resultado = num1 * num2;
    printf("El producto de los numeros es: %lf\n", resultado);
    
    else 
    	
    printf("No se puede divir entre cero \n");
        // Suma los valores y le asigna el resultado a otra variable.
    resultado = num1 + num2;
    // Presenta el resultado.
    printf("La suma de los numeros es: %lf\n", resultado);
    resultado = num1 - num2;
    printf("La resta de los numeros es: %lf\n", resultado);
    resultado = num1 * num2;
    printf("El producto de los numeros es: %lf\n", resultado);
	return 0;	
	 

}

