#include <stdio.h>
#include <stdbool.h>

#define MAX 10

int list[MAX] = {1,8,4,6,0,3,5,12,3,6};// khai bao mang can sap xep

void display(){
   int i;
   printf("[");
   for(i = 0; i < MAX; i++){
      printf("%d ",list[i]);
   }
   printf("]\n");
}

void bubbleSort() {
   int temp;
   int i,j;
   bool swapped = false;       
   // lap qua tat ca cac so
   for(i = 0; i < MAX-1; i++) { 
      swapped = false;
		
      // vong lap thu hai
      for(j = 0; j < MAX-1-i; j++) {
         printf("     So sanh cac phan tu: [ %d, %d ] ", list[j],list[j+1]);

         // kiem xa xem so ke tiep co nho hon so hien tai hay khong
         //   trao doi cac so. 
         //  (Muc dich: lam noi bot (bubble) so lon nhat) 
			
         if(list[j] > list[j+1]) {
            temp = list[j];
            list[j] = list[j+1];
            list[j+1] = temp;

            swapped = true;
            printf(" => trao doi [%d, %d]\n",list[j],list[j+1]);
         }else {
            printf(" => khong can trao doi\n");
         }
			
      }

      // neu khong can trao doi nua, tuc la 
      //   mang da duoc sap xep va thoat khoi vong lap. 
      if(!swapped) {
         break;
      }
      
      printf("Vong lap thu %d#: ",(i+1)); 
      display();                     
   }
	
}

main(){
   printf("Mang du lieu dau vao: ");
   display();
   printf("\n");
	
   bubbleSort();
   printf("\nMang sau khi da sap xep: ");
   display();
}
