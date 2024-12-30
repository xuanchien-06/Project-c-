#include <stdio.h>
#include "functions.h"

//in menu
void printMenu(){
	printf("\n==== He thong quan li sach ====\n");
	printf("1.In thong tin sach\n");
	printf("2.Them thong tin sach\n");
	printf("3.Sua thong tin sach\n");
	printf("4.Xoa sach\n");
	printf("5.Tim kiem thong tin sach\n");//theo ten
	printf("6.Sap xep sach\n");//theo gia tien
	printf("7.Kiem tra du lieu nhap cho sach\n");
	printf("8.Thoat\n");
}

//in sach
void printbook(struct Book books[], int n){
	int i;
		printf("\t******************************************\n");
	    printf("\t*************** Book List ****************\n");
	    printf("\t******************************************\n");
	    printf("|============|===========================|======================|============|\n");
	    printf("|BookID      |  Name                     |  author              |  price     |\n");
	    printf("|============|===========================|======================|============|\n");
	for(i=0; i<n; i++){
		printf("| %-10d | %-25s | %-20s | %-10d | \n", books[i].id,books[i].name,books[i].author,books[i].price);
		printf("|------------|---------------------------|----------------------|------------|\n");
	}
}

//them sach
void addBook(struct Book books[],  int *n){
	getchar();  
    books[*n].id = *n + 1;
	printf("Moi ban nhap vao ten sach: \n");
    fgets(books[*n].name, 100, stdin);
    books[*n].name[strcspn(books[*n].name, "\n")] = '\0';  
	printf("Moi ban nhap vao ten tac gia: \n");
    fgets(books[*n].author, 50, stdin);
    books[*n].author[strcspn(books[*n].author, "\n")] = '\0'; 
	printf("Moi ban nhap vao gia tien: \n");
    scanf("%d", &books[*n].price);
    getchar();  
	(*n)++;  
	printf("Them sach thanh cong!!\n");
}

