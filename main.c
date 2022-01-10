#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
int checker(char input[500]){
	char *pInput = input;
	char *pInput2 = input;
	size_t inputSize = strlen(input);
	int vowels = 0;
	for(; pInput2<&input[inputSize]; pInput2++){ 
		*pInput2 = tolower(*pInput2);
	}
	for(; pInput<&input[inputSize]; pInput++){
		if(*pInput == 'a' || *pInput == 'e' || *pInput == 'i' || *pInput == 'o' || *pInput == 'u'){
			vowels++;
		}
	}
	return vowels;
}
int main() {
	char userInput[500];
	printf("Input word: ");
	scanf("%s", userInput);
	printf("%d\n", checker(userInput));
	return 0;
}