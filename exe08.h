int exec08(){
    /**************************************
    
                EXERCICIO 08
                
    ***************************************/
   	//Variaveis para resultado e leitura
    int x;
    int n = 8;
	//Leitura do denominador: x
	do{
    	printf("Digite o valor de N:\t");
    	scanf ("%i", &x);
	}while(x < 8);
	//Iniciando operacao
    int i = 0;
    while((x >= 8) && ( n <= x)){
        printf("%i ", n);
        if(i % 2 == 0){
            n = n + 2;
        }else{
            n = (n - 2) * 2;
        }
        i++;
    }
	return 0;
}
