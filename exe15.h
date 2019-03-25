int exec15(){
    /**************************************
    
                EXERCICIO 15
                
    ***************************************/
   	//Variaveis para resultado e leitura
    //matriz com dados de exemplo (para testes)
	int A[6][6] = {
	    {1, 2, 3, 4, 5, 6},
	    {1, 2, 3, 4, 5, 6},
	    {1, 2, 3, 4, 5, 6},
	    {1, 7, 9, 4, 5, 6},
	    {6, 7, 3, 4, 5, 6},
	    {6, 2, 3, 4, 5, 6},
	};
	
	//Buscando o menor elemento da diagonal secundaria ( i + j == N -1)
	int i, j;
	int menor = A[0][6 - 1];
	for(i = 0; i < 6; i++){
	    for(j = 0; j < 6; j++){
	        if( (i + j == 6 - 1)){
	            if((A[i][j] < menor) ){
	                menor = A[i][j];
	            }
	            break;
            } 
	    }
	}
    printf("Menor elemento: %d\n", menor);
	return 0;
}