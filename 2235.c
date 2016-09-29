/*
    * URI 2235
	* https://www.urionlinejudge.com.br/judge/pt/problems/view/2235
    * @author Son182
    * @Date : 29/09/2016
*/

#include <stdio.h>

main(){
	int A, B, C;
	
	scanf("%i", &A);
	scanf("%i", &B);
	scanf("%i", &C);
	
	if(((A + B - C) == 0) || ((A + C - B) == 0) || ((A - (C + B)) == 0) || ((A + (C - B)) == 0) || ((A - B) == 0) || ((A - C) == 0) || ((B - C) == 0)){
		printf("S");
	}else{
		printf("N");
	}
	
	printf("\n");						
}
