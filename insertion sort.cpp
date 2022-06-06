#include<stdio.h>
int main(){
	printf("surya chawla\n");

   int i, j, count, n, number[10];

   printf("Enter the number of elements: ");
   scanf("%d",&count);

   printf("Enter %d elements: ", count);
   
   for(i=0;i<count;i++)
      scanf("%d",&number[i]);

   for(i=1;i<count;i++){
      n=number[i];
      j=i-1;
      while((n<number[j])&&(j>=0)){
         number[j+1]=number[j];
         j=j-1;
      }
      number[j+1]=n;
   }

   printf("Order of Sorted elements: ");
   for(i=0;i<count;i++)
      printf(" %d",number[i]);

   return 0;
}
