int exec07(){
    /**************************************
                
                EXERCICIO 07
                
    ***************************************/
   	//Variaveis para resultado e leitura
    int n = 10;
    float b[n];
    int c[n];
	int cont = 1;
	int x = 0;
	float result = 0;
	//Leitura do denominador: x
	printf("Digite o valor de N:\t");
	scanf ("%i", &x);
	//Iniciando operacao de fatoracao
	int i = 0;
	while(cont <= 10){
        n = cont;
        int i = funcao07(n);
        printf("Valor do Fatorial de %d e = %d\n",cont, i);
        b[cont] = i;
        cont++;
	}
	for(i =  1; i <= 10; i++){
	    printf("b[%.2f] = %d\n", i, b[i]);
	}
	//Iniciando operacao de potencia
	int j = 0;
	for(j = 1; j <= 10; j++){
	    c[j] = pow(x, j);
	    printf("%d ^ %d = %d\n", x, j, c[j]);
	}
	
	//operacao de divisao
	cont = 0;
	for(cont = 1; cont <=10; cont++){
	    result = (b[cont]/c[cont]);
	    printf("%.2f / %d = %f\n", b[cont], c[cont], result);
	}
	return 0;
}

//Funcao para o Fatorial
int funcao07(n){
    int i = 0;
    for(i = 1; n > 1; n--){
        i = i * n;
    }
    return i;
}
