/*
    * URI 1042
	* https://www.urionlinejudge.com.br/judge/pt/problems/view/1042
    * @author Son182
    * @Date : 29/09/2016
*/


#include <stdio.h>

int main(){
	
    int A, B, C;

    scanf("%i",&A);
    scanf("%i",&B);
    scanf("%i",&C);
    
    if (A<B && B<C){
    	printf("%i", A);
    	printf("\n%i", B);
        printf("\n%i", C);
    }
    else if (A<C && C<B){
    	printf("%i", A);
    	printf("\n%i", C);
        printf("\n%i", B);
    }
    else if (B<A && A<C){	
    	printf("%i", B);
    	printf("\n%i", A);
        printf("\n%i", C);
    }
    else if (B<C && C<A){
    	printf("%i", B);
    	printf("\n%i", C);
        printf("\n%i", A);
    }
    else if (C<A && A<B){
    	printf("%i", C);
    	printf("\n%i", A);
        printf("\n%i", B);
    }
    else{
    	printf("%i", C);
    	printf("\n%i", B);
        printf("\n%i", A);
    }
    
    printf("\n\n");
    printf("%i\n", A);
	printf("%i\n", B);
	printf("%i\n", C);

	return 0;
}


