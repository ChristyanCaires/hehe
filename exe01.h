int exec01(){
    /**************************************
    			EXERCICIO 01
     **************************************/
    //Variáveis para os datos de resultado e leitura
    float a = 0.00;
    int b = 0;
    
    //Lendo o valor
    printf("Digite o valor de N:\t");
    scanf ("%i", &b);
    
    //Inicia a operação
    int i = 0;
    for (i = b; i > 0; i--) {
    	a = a + 1.00/i;
    	printf("A = %.2f + 1/%i \t Resultado = %f\n", a, i, a);
    }
    printf("Resultado Final: A = %f\n", a);
    return 0;
}
