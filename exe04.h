int exec04() {
    /**************************************
                
                EXERCICIO 04
                
    ***************************************/
   	//Variaveis para resultado e leitura
	float a = 0.00;
    int n = 0;
    float aux = 0.00;
    float x = 0.00;
	//Lendo o valor desejado
	printf("Digite o valor de N:\t");
	scanf ("%i", &n);
	
	//Iniciando parte 1 da oprecao
	int i = 0;
	for (i = 1; i <= n; i++) {
		aux = a;
		a = a + 1.00/pow(i,3);
		printf("S = %.2f + 1/%i^3 \t Resultado = %.2f\n", aux, i, a);
	}
	printf("Resultado da Primeira Oprecao: S = %.2f\n", a);
	
	x = 32 * a;
	x = pow(x, 1.00/3.00); //Raiz Cubica
	printf("Valor final da Operacao: X = %.2f\n", x);
	return 0;
}