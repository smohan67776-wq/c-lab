6monish1234-collab
c-lab

Type / to search
Code
Issues
Pull requests
Actions
Projects
Wiki
Security
Insights
Settings
Files
Go to file
t
Untitled2.cpp
alphabet.cpp
dollor tower.cpp
eqnroots.c
factorial.cpp
factorial.exe
grade.cpp
hello world.c
marksheet.c
mathlib.c
odd.cpp
palindrome,c.c
roots.cpp
square.cpp
c-lab
/alphabet.cpp
6monish1234-collab
6monish1234-collab
Add files via upload
de78376
 · 
2 weeks ago

Code

Blame
#include<stdio.h>
#include<ctype.h>

int main() {
	char sentence [1000];
	int alphabets = 0, digits = 0,
	specialchars = 0;
	int i=0;
	
	printf("enter a setence:");
	fgets(sentence, sizeof (sentence), stdin);
	
	while (sentence[i] !='\0') {
		if (isalpha (sentence[i])) {
			alphabets++;
		} else if (isdigit (sentence[i])) {
			digits++;
		} else if (!isspace(sentence[i]))
		{
			 
			
			specialchars++;
		}
		i++;
	}
	printf("\na1phabets: %d", alphabets);
	printf("\ndigits: %d", digits);
	printf("\nspecial characters: %d\n",specialchars);
	return 0;
	}

