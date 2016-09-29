/*
    * URI 2242
	* https://www.urionlinejudge.com.br/judge/pt/problems/view/2242
	* https://mamun-amin.blogspot.com.br/2016/09/solution-of-uri-2242-huaauhahhuahau.html
    * @author Son182
    * @Date : 29/09/2016
*/

#include <stdio.h>

int main()
{
    int i, j=0, lnth;
    char x[60], y[60];
    scanf("%s", x);
    for(i=0; x[i]; i++)
    {
        if(x[i]=='a' || x[i]=='e' || x[i]=='i' || x[i]=='o' || x[i]=='u')
        {
            y[j] = x[i];
            j++;
        }
    }
    y[j] = '\0';
    lnth = strlen(y);
    for(i=0, j=lnth-1; i < lnth; i++, j--)
    {
        if(y[i] != y[j])
        {
            printf("N\n");
            return 0;
        }
    }
    printf("S\n");
    return 0;
}
