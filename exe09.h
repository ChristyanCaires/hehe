int exec09(){
    /**************************************
    
                EXERCICIO 09
                
    ***************************************/
   	//Variaveis para resultado e leitura
    int i = 0;
    int cont = 1;
    int prox = 2;
    int x;
	//Leitura do denominador: x
	do{
    	printf("Digite o valor de N:\t");
    	scanf ("%i", &x);
	}while(x < 2);
	
	//Iniciando operacao
    while(prox <= x){
        printf("%d ", prox);
        if((i % 2) == 0){
            prox = prox + cont;
        }else{
            prox = (prox - cont) * 2;
            cont++;
        }
        i++;
        
    }
	return 0;
}