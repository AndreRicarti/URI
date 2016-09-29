/*
    * URI 1040
	* https://www.urionlinejudge.com.br/judge/pt/problems/view/1040
    * @author Son182
    * @Date : 29/09/2016
*/

#include <stdio.h>

main(){
	float N1, N2, N3, N4, MEDIA, EXAME;
	
	scanf("%f", &N1);
	scanf("%f", &N2);
	scanf("%f", &N3);
	scanf("%f", &N4);	
	
	MEDIA += N1 * 2;
	MEDIA += N2 * 3;
	MEDIA += N3 * 4;
	MEDIA += N4 * 1;
	
	MEDIA = MEDIA / 10;
	
	if(MEDIA >= 5.0 && MEDIA <= 6.9){
		scanf("%f", &EXAME);
	}
	
	printf("Media: %.1f", MEDIA);
	
	if (MEDIA >= 7.0){
		printf("\nAluno aprovado.");
	}else if(MEDIA >= 5.0 && MEDIA <= 6.9){
		printf("\nAluno em exame.\n");
		printf("Nota do exame: %.1f", EXAME);
		EXAME = (EXAME + MEDIA) / 2;
		
		if(EXAME >= 5.0){
			printf("\nAluno aprovado.");
		}else{
			printf("\nAluno reprovado.");
		}
		printf("\nMedia final: %.1f", EXAME);				
	}else{
		printf("\nAluno reprovado.");
	}
	printf("\n");
}
