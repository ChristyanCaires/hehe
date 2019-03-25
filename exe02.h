int exec02(){
    /**************************************
    			
    			EXERCICIO 02
    			
     **************************************/
    //Variáveis para os datos de resultado e leitura
    float a = 0.00;
    int b = 0;
    float c = 0.00;
    
    //Lendo o valor
    do{
        printf("Digite o valor de N:\t");
        scanf ("%i", &b);
    }while(b < 2);
    
    //Inicia a operação
    int i = 0;
    for (i = b; i > 0; i--) {
    	if(i % 2 == 0){
            a = c; 
            c = a + 1.00/i;
            printf("A = %f + 1/%i \t Resultado = %f\n", a, i, c);    
    	}else{
    	    a = c;
    	    c = a - 1.00/i;
    	    printf("A = %f - 1/%i \t Resultado = %f\n", a, i, c);    
    	}
    	
    }
    printf("Resultado Final: A = %f\n", a);
    return 0;
}
