/*este es el primer programa de la semana 5*/ 
#include<stdio.h>
#include<math.h>

int main()
{
  float x, e, f, g, h, i, n;
    int a, b, c;
     
    printf("Hola que evalua funciones con intervalos\n");
    printf("ingrasa el valir minimo de x\n");
    scanf("%i",&a);
    printf("por favor ingrasa el valir maximo de x\n");
    scanf("%i",&b);
    printf("por ultimo ingrasa el intervalo en que se realizaran los calculos\n");
    scanf("%i",&c);

    n=(b-a)/c
    for (i=0; i<=n; i++){  
    e=exp(x);
    f=log(x);
    g=sin(x); 
    h=cos(x);
    i=sqrt(x);

    printf("Exp(%f) = %f\n",x,e);
    printf("Log(%f) = %f\n",x,f);
    printf("Sen(%f) = %f\n",x,g);
    printf("Cos(%f) = %f\n",x,h);
    printf("Raiz cuadrada(%f) = %f\n",x,i);
    printf("Los resultados con x = %f\n",x);
} 
return 0;
}
  
