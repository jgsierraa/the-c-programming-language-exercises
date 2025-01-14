# include <stdio.h>
# include <string.h>

int main(){
	char string[100];
	scanf("%s", string);
	printf("%s", string);
	// get the size of the array
	int strSize = strlen(string);	
	// now iterate through the string so i can reverse the string
	char stringReversed[strSize + 1];
	for(int i = 0; i < strSize; i++){
		stringReversed[strSize-i-1] = string[i];
	};
	
	stringReversed[strSize] = '\0';
	printf("reversed = %s", stringReversed);
	return 0;
}

