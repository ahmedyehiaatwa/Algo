#include <stdio.h>
#include <stdlib.h>
#include "Def.h"
#include "Search.h"

void main(void){
   uint8_t index;
   uint8_t size;
   uint32_t number;
   printf("Please Enter the size of the array: ");
   scanf("%d", &size);
   uint32_t arr[size];
   for(index = 0; index < size; index++)
   {
    printf("Please Enter the value %d of the array: ",index);
    scanf("%d", &arr[index]);
   }
   printf("\nPlease Enter the value you are searching for: ");
   scanf("%d", &number);
   sint8_t IndexFound;
   IndexFound = binarySearch(arr, size, number);
 //  printf("\nIndexFound %d\n", IndexFound);
   if(IndexFound == -1){
      printf("Value not found.\n");
   }
   else{
      printf("Value found at index: %d\n", IndexFound);
   }
}
