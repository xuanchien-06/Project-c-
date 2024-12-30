#include <stdio.h>
#include <stdlib.h>
#include "functions.h"
#include<string.h>

struct Book books[100]={
	{1,"Mat biec","Nguyen nhat anh",50},
	{2,"De men","To hoai",55},
	{3,"Lao hac","Nam cao",35},	
};
int n=3;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int main(int argc, char *argv[]) {
int choice;

	do{
		printMenu();
		printf("\nLua chon cua ban: ");
		scanf("%d", &choice);	
		switch(choice){
			case 1://in thong tin sach
				printbook(books, n);
		  		break;
		  	case 2: 
		  		addBook(books, &n);
		  		break;
		}
	}
	while(choice!=8);
return 0;
}



	
