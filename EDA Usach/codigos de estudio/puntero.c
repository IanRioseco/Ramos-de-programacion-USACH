int main(){
int A[3] = {10,20,30};
int *pt1, *pt2, **pt3;
printf(" A es un puntero ==> &A=%p, A=%p, *A=%d\n",&A, A, *A );
printf(" A[0] no es un puntero==> &A[0]=%p, A[0]=%d\n",&A[0], A[0]);
printf(" A[1] no es un puntero==> &A[1]=%p, A[1]=%d\n",&A[1], A[1]);
printf(" A[2] no es un puntero==> &A[2]=%p, A[2]=%d\n",&A[2], A[2]);
pt1 = A; //pt1 recibe la dirección de memoria de A que es igual a A[0]
printf("\nDespues de pt1=A ==> &pt1=%p, pt1=%p, *pt1=%d\n",&pt1, pt1, *pt1);
pt2 = &A[2]; //pt2 recibe la dirección de memoria donde se ubica A[2]
printf("\nDespues de pt2=&A[2]==> &pt2=%p, pt2=%p, *pt2=%d\n",&pt2, pt2, *pt2);
*pt3 = pt1; //el valor de pt3 recibe la dirección donde apunta pt1 (pt3=pt1 es error)
printf("\nDespues de *pt3=pt1==> &pt3=%p, pt3=%p, *pt3=%p, **pt3=%d\n",&pt3, pt3, *pt3, **pt3);
pt1++;
printf("\nDespues de pt1++==> &pt1=%p, pt1=%p, *pt1=%d\n",&pt1, pt1, *pt1);
//aquí el puntero pt2 no cambia donde apunta pero muestra A[0]
printf("\nMostrar A[0]sin cambiar la dirección(valor) de pt2==> &pt2=%p, pt2=%p, (pt2-2)=%p, *(pt2-2)=%d\n",&pt2,pt2,(pt2-2), *(pt2-2));
//aquí si el puntero pt2 si cambia la dirección donde apunta
pt2 = pt2-2;
printf("\nDespues de pt2=pt2-2==> &pt2=% p, pt2=%p, *pt2=%d\n",&pt2, pt2, *pt2);
pt2 = pt2+2; //vuelve a apuntar donde apuntaba inicialmente (a A[2])
pt2++; //aquí se pasa de largo... luego va a apuntar a cualquier cosa
printf("\nDespues de pt2++==> &pt2=%p, pt2=%p, *pt2=%d\n",&pt2, pt2, *pt2);
return 0;
}