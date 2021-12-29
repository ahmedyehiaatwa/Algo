#include <stdio.h>
#include <stdlib.h>
#include "Def.h"
#include "Search.h"

uint8_t SortedOrNot(uint32_t* arr, uint8_t size)
{
    uint8_t index;
    for(index = 1; index < size; index++)
    {
      if(arr[index] < arr[index - 1])
      {
         return 0;
      }
    }
   return 1;
}

void sorting(uint32_t* arr, uint8_t size)
{
    uint8_t index1;
    uint8_t index2;
   for(index1 = 0; index1 < size - 1; index1++){
      for(index2 = 0; index2 < size - index1 - 1; index2++){
         if(arr[index2] > arr[index2 + 1])
         {
            uint32_t temp = arr[index2];
            arr[index2]= arr[index2 +1];
            arr[index2+1]=temp;
         }
      }
   }
}

sint8_t binarySearch(uint32_t* arr, uint8_t size, uint32_t number)
{
   if(SortedOrNot(arr, size)==0){
      sorting(arr, size);
   }
   uint8_t low = 0;
   uint8_t high = size - 1;
   uint8_t mid = low + (high - low)/2;
   while(low <= high){
      if(arr[mid] == number){
         return mid;
      }
      else if(arr[mid] > number){
         high = mid - 1;
      }
      else{
         low = mid + 1;
      }
      mid = low + (high - low) / 2;
   }
   if(arr[mid] == number)
   {
      return mid;
   }
   else
   {
      return -1;
   }
}
