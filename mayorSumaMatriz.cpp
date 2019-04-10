int main()
{
    int matriz[5][6] = {
        { 9, 7, 6, 8, 9, 7 },
        { 10, 10, 6, 8, 9, 9 },
        { 7, 7, 9, 8, 7, 6 },
        { 8, 8, 7, 6, 6, 9 },
        { 6, 6, 6, 6, 10, 10 }
    };
    int i=0, j=0;

    printf("La matriz que usted ingreso:");
    printf("\n");
    for(i = 0; i < 5; i++){
        for(j = 0; j < 6; j++){
            printf("%d,", matriz[i][j]);
        }
        printf("\n");
    }

    int matrizrepro[5];   //MATRIZ QUE GUARDA EL NUMERO DE MATERIAS REPROBADAS POR CADA ALUMNO
    for(i = 0; i < 5; i++){
        int contadorMateria = 0;
        for(j = 0;j < 6;j++){
            if(matriz[i][j] < 7){
                contadorMateria++;
            }
        }
        matrizrepro[i] = contadorMateria; //GUARDA EL NUMERO DE MATERIAS REPROBADAS
        printf("Alumno %d tiene %d materias Reprobadas \n", i+1, contadorMateria);
    }

    //DETERMINA EL ALUMNO QUE TIENE MAS MATERIAS REPROBADAS
    for(i = 0; i < 5; i++){
        int contadorMayor = 0;
        for(j = 0; j < 5; j++){
            if(matrizrepro[i] > matrizrepro[j] || matrizrepro[i] == matrizrepro[j]){
                    contadorMayor++;
            }
        }
        if(contadorMayor == 5){
             printf("Alumno %d es el que más materias ha reprobado con %d materias",i+1, matrizrepro[i]);
             break; // CUANDO ENTRA EN ESTA CONDICION ES EL NUMERO MAYOR Y YA NO HACE FALTA BUSCAR MAS
        }
    }

    return 0;
}
