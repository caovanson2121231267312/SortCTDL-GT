#include <stdio.h>
#include <stdbool.h>
#define MAX 8

int intArray[MAX] = {4,6,3,2,1,9,7,9};// khai bao mang can sap xep

void printline(int count){
   int i;
	
   for(i = 0;i <count-1;i++){
      printf("=");
   }
	
   printf("=\n");
}

void display(){
   int i;
   printf("[");
	
   // duyet qua tat ca phan tu 
   for(i = 0;i<MAX;i++){
      printf("%d ", intArray[i]);
   }
	
   printf("]\n");
}

void selectionSort(){

   int indexMin,i,j; 
	
   // lap qua ta ca cac so
   for(i = 0; i < MAX-1; i++){ 
	
      // thiet lap phan tu hien tai la min 
      indexMin = i;
		
      // kiem tra phan tu hien tai co phai la nho nhat khong 
      for(j = i+1;j<MAX;j++){
         if(intArray[j] < intArray[indexMin]){
            indexMin = j;
         }
      }

      if(indexMin != i){
         printf("Trao doi phan tu: [ %d, %d ]\n" , intArray[i], intArray[indexMin]); 
			
         // Trao doi cac so 
         int temp = intArray[indexMin];
         intArray[indexMin] = intArray[i];
         intArray[i] = temp;
      }          

      printf("Lan lap thu %d#:",(i+1));
      display();
   }
}  

main(){
   printf("Mang du lieu dau vao: ");
   display();
   printline(50);
   selectionSort();
   printf("Mang sau khi da sap xep: ");
   display();
   printline(50);
}
