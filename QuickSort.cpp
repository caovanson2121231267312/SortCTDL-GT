#include <stdio.h>
#include <stdbool.h>
#define MAX 7

int intArray[MAX] = {4,6,3,2,1,9,7};// khai bao mang can sap xep

void printline(int count){
   int i;
	
   for(i = 0;i <count-1;i++){
      printf("=");
   }
	
   printf("=\n");
}

// hien thi cac phan tu
void display(){
   int i;
   printf("[");
   // duyet mang
   for(i = 0;i<MAX;i++){
      printf("%d ",intArray[i]);
   }
   printf("]\n");
}

// trao doi gia tri
void swap(int num1, int num2){
   int temp = intArray[num1];
   intArray[num1] = intArray[num2];
   intArray[num2] = temp;
}

// ham de chia mang thanh 2 phan, su dung phan tu chot (pivot)
int partition(int left, int right, int pivot){
   int leftPointer = left -1;
   int rightPointer = right;

   while(true){
	
      while(intArray[++leftPointer] < pivot){
         //khong lam gi
      }
		
      while(rightPointer > 0 && intArray[--rightPointer] > pivot){
         //khong lam gi
      }

      if(leftPointer >= rightPointer){
         break;
      }else{
         printf(" Phan tu duoc trao doi :%d,%d\n", 
         intArray[leftPointer],intArray[rightPointer]);
         swap(leftPointer,rightPointer);
      }
		
   }
	
   printf(" Phan tu chot duoc trao doi :%d,%d\n", intArray[leftPointer],intArray[right]);
   swap(leftPointer,right);
   printf("Hien thi mang sau moi lan trao doi: "); 
   display();
   return leftPointer;
}

// ham sap xep
void quickSort(int left, int right){        
   if(right-left <= 0){
      return;   
   }else {
      int pivot = intArray[right];
      int partitionPoint = partition(left, right, pivot);
      quickSort(left,partitionPoint-1);
      quickSort(partitionPoint+1,right);
   }        
}   

main(){
   printf("Mang du lieu dau vao: ");
   display();
   printline(50);
   quickSort(0,MAX-1);
   printf("Mang sau khi da sap xep: ");
   display();
   printline(50);
}
