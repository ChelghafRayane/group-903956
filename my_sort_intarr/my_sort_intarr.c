#include <unistd.h>
#include <stdio.h>
void my_putchar(char c);

void  my_sort_intarr(int *array, int size)
{
    int tmp;
    int sorted = 1;
    while(sorted == 1){
        sorted = 0;
        for (int i = 0 ; i < size ; i++){
            if(array[i] > array[i+1]){
                tmp = array[i];
                array[i] = array[i+1];
                array[i+1] = tmp;
                sorted = 1;
            }
            if (array[i] == array[i+1]){
                continue;
            }
        }
    }
}

void  my_sort_intarr(int *array, int size);

int main(){
    int arr[7] = {9, 4, 8, 2, 3, 3, 9};
    my_sort_intarr( arr, 7);
    for (int i = 0; i < 7; i++){
        printf("%d\n", arr[i]);
    }
    return 0;
}
