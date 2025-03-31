#include <stdio.h>

int main()
{
   float num1, num2;
   int num3;
   float sum;

   // Pedir al usuario que ingrese los números
   printf("Ingrese dos números flotantes: ");
   scanf("%f %f", &num1, &num2);
   printf("Ingrese un número entero: ");
   scanf("%d", &num3);

   // Realizar la suma y mostrar el resultado
   sum = num1 + num2 + num3;
   printf("La suma de %.2f + %.2f + %d es: %.2f\n", num1, num2, num3, sum);

   return 0;
}