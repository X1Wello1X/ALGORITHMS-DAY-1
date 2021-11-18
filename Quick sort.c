#include <stdio.h>
#include <time.h>
void swap(int *a, int *b) {
  int t = *a;
  *a = *b;
  *b = t;
}
int partition(int array[], int low, int high) {
  int pivot = array[high];
  int i = (low - 1);
  for (int j = low; j < high; j++) {
    if (array[j] <= pivot) {
      i++;
      swap(&array[i], &array[j]);
    }
  }
  swap(&array[i + 1], &array[high]);
  return (i + 1);
}

void quickSort(int array[], int low, int high) {
  if (low < high) {
    int pi = partition(array, low, high);
    quickSort(array, low, pi - 1);
    quickSort(array, pi + 1, high);
  }
}

int main() {
  int data[100000],i;
  	for (i=0;i<100000; i++){
		 data[i]= rand() %100000;	
		}
		printf("Array of 100000 numbers is initialized\n");
	int n = sizeof(data) / sizeof(data[0]);
  	clock_t begin = clock();
  	printf("\nQuick sort:");
	quickSort(data, 0, n - 1);
	clock_t end = clock();
	double time_spent2 =(double)(end-begin)/CLOCKS_PER_SEC;
	printf("\ntime elapsed is %1f seconds",time_spent2);

}
