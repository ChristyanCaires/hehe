
    /**************************************
                
                EXERCICIO 14
                
    ***************************************/
    #define MAX 2 //quantidade de habitantes entrevistados
    int hab[MAX][4]; 
    
    int exec14(){
    int s, o, c, id;
   
    //Variaveis das estruturas de repeticao
    int i = 0;
    int k = 0;
    int l = 0;
    //Preenchimento dos dados dos habitantes
    for(i = 0; i < MAX; i++){
        do{
            printf("Preencha os dados do %iº habitante", (i+1));
            printf("\n\tSelecione o sexo\n\n");
            printf("1. Masculino\n");
            printf("2. Feminino\n");
            scanf("%d", &hab[i][0]);
            system("cls || clear");
        }while ((hab[i][0] < 1) || (hab[i][0] > 2));
        
        do{
            printf("\n\tSelecione a cor dos olhos\n\n");
            printf("1. Castanho\n");
            printf("2. Azul\n");
            scanf("%d", &hab[i][1]);
            system("cls || clear");
        }while ((hab[i][1] < 1) || (hab[i][1] > 2));
        do{
            printf("\n\tSelecione a cor dos cabelos\n\n");
            printf("1. Preto\n");
            printf("2. Castanho\n");
            printf("3. Louro\n");
            scanf("%d", &hab[i][2]);
            system("cls || clear");
        }while ((hab[i][2] < 1) || (hab[i][2] > 3));
        do{
            printf("\n\tPreencha com a idade\n\n");
            scanf("%d", &hab[i][3]);
            system("cls || clear");
        }while (hab[i][3] < 1);
    }
    //Imprimindo caracteristicas dos habitantes
    printf("      SEXO  |   OLHOS  |  CABELO  |  IDADE \n");
    for(k = 0; k < MAX; k++){
        printf("[ ");
        for(l = 0; l < 4; l++){
            if((hab[k][0] == 1) && (l == 0)){
        
                printf(" Masculino|");
            }else if((hab[k][0] == 2) && (l == 0)){
                printf(" Feminino |");
            }else if((hab[k][1] == 1) && (l == 1)){
                printf(" Castanho |");
            }else if((hab[k][1] == 2) && (l == 1)){
                printf(" Azul     |");
            }else if((hab[k][2] == 1) && (l == 2)){
                printf(" Preto    |");
            }else if((hab[k][2] == 2) && (l == 2)){
                printf(" Castanho |");
            }else if((hab[k][2] == 3) && (l == 2)){
                printf(" Loiro    |");
            }else if((hab[k][3] > 0) && (l == 3)){
                printf("   %d ", hab[k][3]);
            }
            
            
        }
        
        printf("   ] - > habitante %d\n", (k+1));
        //Calcula a media de idade dos habitantes
        if((hab[k][1] == 1) && (hab[k][2] == 1) && (k == 1)){
            printf("\nMédia de idade das pessoas com olhos castanhos e cabelos pretos: %d", mediaIdade());
        }
        if(k == 1){
            printf("\nA maior idade dentre os habitantes e: %d", maiorIdade());
        }
        if(k == 1){
            printf("\nQuantidade de Mulheres com idade de 18 a 35 e que tem olhos azuis e cabelos loiros: %d", qntM());
        }
        
    }
}

int mediaIdade(){
    int result;
    int k;
    for( k = 0; k < MAX; k++){
        result = result + hab[k][3];
    }
    result = (result/MAX);
    return result;
}
//Calcila a maior idade dentre os entrevistados
int maiorIdade(){
    int m;
    int k;
    for( k = 0; k < MAX; k++){
        if(hab[k][3] > m){
            m = hab[k][3];
        } 
    }
    return m;
}

//Calcula a quantidade de Mulheres com idade de 18 a 35 e que tem olhos azuis e cabelos loiros
int qntM(){
    int l = 0;
    int k = 0;
    int cont = 0;
    for(l = 0; l < MAX; l++){
        if((hab[l][0] == 2) && (hab[l][1] == 2) && (hab[l][2] == 3)){
           if((hab[l][3] >= 18) && (hab[l][3] <= 35)){
               cont++;
           } 
        }    
    }
    return cont;
}