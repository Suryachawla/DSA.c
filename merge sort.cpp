#include <stdio.h> 
int main ()
{
	printf("Surya chawla\n");
int n,i,a[20];
void mergesort (int a[], int low, int high); 
void display (int a[], int size);
printf ("Enter total number of elements in array:"); 
scanf("%d",&n);
printf ("Input array elements to be sorted\n");
 for (i=0; i<n; i++)
{
printf("Enter element a[id] -->", i);
scanf("%d",&a[i]); 
}
printf("\nArray element before sorting are ---\n");
display (a, n); 
mergesort (a,0,n-1);
printf ("\nArray element after sorting are ---\n");
display (a,n); 
return 0;
} 
void mergesort(int a[], int low, int high)
{
int mid;
void merge (int a[], int low, int high, int mid);
if (low<high) 
{
mid= (low+high) /2;
mergesort (a, low,mid); 
mergesort (a,mid+1,high);
merge (a, low, mid, high);
} 
}
void merge (int a[], int beg, int mid, int end)
{
int tbindex, temp [20], lbindex, rbindex, i; 
lbindex= beg;  
rbindex =mid+1;
tbindex= beg;
while((lbindex<=mid)&&(rbindex<=end))
{ 
if (a[lbindex] <a[rbindex])
{
temp[tbindex]= a[lbindex];
lbindex = lbindex + 1;
}
else
{
temp[tbindex] = a[rbindex]; 
rbindex = rbindex + 1;
}
tbindex =tbindex + 1;
}
while (lbindex <= mid)
{
temp[tbindex] = a[lbindex]; 
lbindex= lbindex + 1;
tbindex =tbindex + 1;
}
while (rbindex <= end)
{
temp[tbindex] = a[rbindex]; 
rbindex =rbindex+1;
tbindex= tbindex + 1;
}
for (i=beg; i<=end; i++)

 a[i]=temp[i];
}
void display (int a[], int size) 
{
 int i; 
for (i=0; i<size; i++) 
{
printf("%d\t",a[i]);
}
}
