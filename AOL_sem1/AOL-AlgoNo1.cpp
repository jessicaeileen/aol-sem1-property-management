#include <stdio.h>
#include <string.h>
#include <ctype.h>
    	
int main(){
	char kalimat[101];
	scanf("%s", kalimat);
	
	for(int i=strlen(kalimat)-1; i>=0;i--){
		char c = kalimat[i];
        if (islower(c)) {
            c = toupper(c);
        } else if (isupper(c)) {
            c = tolower(c);
        }
        printf("%c", c);
    }
    printf("\n");

	
	return 0;
}
