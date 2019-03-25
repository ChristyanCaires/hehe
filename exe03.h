int exec03(){
    /**************************************
                
                EXERCICIO 03
                
    ***************************************/
	//Variáveis para os datos de resultado e leitura
	float a = 1.00;
    float b = 0.00;
	float res = 0.00;
    
    //Inicia a parte 1 da operacão
	int i = 0;
	for (i = 1; i <= 25; i++) {
        b = res;
        res = a/i;
        
        printf("A = %.2f + %.2f/%i \t Resultado = %.2f\n"), b, a, i, res;       
        a = a+2;
	}
	printf("Resultado final: %.2f", res);
    return 0;
}
