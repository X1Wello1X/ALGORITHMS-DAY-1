#include<stdio.h>
#include<time.h>
void insertionSort(int a[], int n)
{
    int i, key, j;
    for (i = 1; i < n; i++) {
        key = a[i];
        j = i - 1;

        while (j >= 0 && a[j] > key) {
            a[j + 1] = a[j];
            j = j - 1;
        }
        a[j + 1] = key;
    }
}
 
int main(){
	int size=100000 , i;
	int a[size];
		for (i=0;i<size; i++){
			a[i]= rand() %10;	
		}
		printf("array is initialized");
		int n = sizeof(a) / sizeof(a[0]);
	clock_t begin = clock();
  	printf("\nInsertion Sort :");
	insertionSort( a , n);
	clock_t end = clock();
	double time_spent2 =(double)(end-begin)/CLOCKS_PER_SEC;
	printf("\ntime elapsed is %1f seconds",time_spent2);
	return 0;
}
