#include <stdio.h>
#include <string.h>

int main(){
	char word[100];
	scanf("%s", word);
	// here it goes the logic to input the histogram
	// my idea is todo a for loop that saves the ammount of letters in the
	// word
	int i;
	int histogram[26];
	for (i = 0; i < 26; i++) {
		histogram[i]=0;
	}
	for (i = 0; i < strlen(word); i++){
		histogram[word[i] - 97]++;
	}
	for (i = 0; i < 26; i++){
		printf("%c=%i\n", i+97, histogram[i]);
	}
	return 0;
}
