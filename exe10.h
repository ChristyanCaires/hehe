int exec10(){
    /**************************************
                
                EXERCICIO 10
                
    ***************************************/
    int n1 = 0;
    int n2 = 0;
    int result = 0;
    int cont = 0;
    //recebendo valor 1
    printf("Digite o valor de N1:\t");
    scanf ("%i", &n1);
    //recebendo valor 2
    printf("Digite o valor de N2:\t");
    scanf ("%i", &n2);
    
    //identificando inteiros entre eles
    for(cont = n1; cont <= n2; cont++){
            result += cont;
    }
	printf("%i ", result);
	return 0;
}