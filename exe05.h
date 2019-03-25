int exec05(){
    /**************************************
                
                EXERCICIO 05
                
    ***************************************/
   	//Variaveis para resultado e leitura
	int a = 0;
    int n = 20;
    int b = 1;
    int aux = 0;

	//Iniciando oprecao
    printf("%d\n", b);
	int i = 0;
	for (i = 0; i <= n; i++) {
		aux = a + b;
        a = b;
        b = aux;
        printf("%d\n", aux);
	}
	return 0;
}
