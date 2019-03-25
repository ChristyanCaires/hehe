int exec06(){
    /**************************************
                
                EXERCICIO 06
                
    ***************************************/
   	//Variaveis para resultado e leitura
    int n = 0;
	//Lendo o valor desejado
	printf("Digite o valor de N:\t");
	scanf ("%i", &n);
	
	//Iniciando operacao
	int i = 0;
	for(i = 1; n > 1; n--){
	    i = i * n;
	    printf("Valor do Fatorial: %d\n", i);
	}
	printf("Valor do Final do Fatorial: %d\n", i);
	return 0;
}