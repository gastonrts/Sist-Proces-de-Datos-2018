    #include <stdio.h>
    #include <stdlib.h>

    int suma (int,int);
    int main ()
    {
    int nro1,nro2,result;
    printf ("Ingrese 1er numero:");
    scanf ("%d",&nro1);
    printf ("Ingrese 2do numero:");
    scanf ("%d",&nro2);
    result = suma (nro1,nro2);
    fflush(stdin);
    printf("resultado:%d",result);
    return 0;

    }


    int suma (int op1,int op2) //prototipo o declaraciòn de la funciòn
   {
    int resultado;
    resultado = op1 + op2;
    return resultado;
   }













