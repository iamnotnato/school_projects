#include <stdio.h>
#include <ctype.h>
/*
 * Check if vowel or consonant
 */
 
 int main(void)
 {
 	char C;
 	printf("Please enter the Alphabet\n");
 	scanf("%c",&C);
 	
 	char D = toupper(C);
 	
 	switch(D)
	 {
	case 'A':
		printf("Vowel");
	 	 break;
	case 'E':
		printf("Vowel");
	 	 break;
	  case 'I':
		printf("Vowel");
	 	 break;
	  case 'O':
		printf("Vowel");
	 	 break;
	  case 'U':
		printf("Vowel");
	 	 break;
	 default:
	 	printf("Consonant");
		 break;
	 }
 	return(0);
 }