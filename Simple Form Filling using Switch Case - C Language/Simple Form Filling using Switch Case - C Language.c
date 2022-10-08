#include<stdio.h>

int main(){
	// Variable declaration
	char name[30], web_address[60];
	char answer1, answer2;
	
	// Input and Output
	printf("Name : ");
	scanf("%[^\n]s", name); getchar();
	
	printf("Web address : ");
	scanf("%[^\n]s", web_address); getchar();
	
	puts("\n======================");
	puts("Is your data correct?");
	puts("======================\n");
	
	// Input and Output for confirmation
	printf("Entered name : %s (y/n)\n", name);
	scanf("%c", &answer1); getchar();
	
	// Loop using switch case 
	switch(answer1){
		case 'n' :{
			while(answer1 == 'n'){
			printf("Name : ");
			scanf("%[^\n]s", name); getchar();
			
			printf("Entered name : %s (y/n)\n", name);
			scanf("%c", &answer1); getchar();
			}
		}
	}
	
	// Input and Output for confirmation
	printf("\nEntered web address : %s (y/n)\n", web_address);
	scanf("%c", &answer2); getchar();
	
	// Loop using switch case 
	switch(answer2){
		case 'n' :{
			while(answer2 == 'n'){
			printf("Web address : ");
			scanf("%[^\n]s", web_address); getchar();
			
			printf("Entered web address : %s (y/n)\n", web_address);
			scanf("%c", &answer2); getchar();
			}
		}
	}
		
	printf("\nThank you sir/madam %s for filling out this form.", name);
}
