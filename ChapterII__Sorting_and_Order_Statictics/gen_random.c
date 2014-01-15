#include <stdio.h>
#include <time.h>
#include <stdlib.h>


#define ARR_SIZE_RANGE    50
#define ARR_SIZE_MIN      15

int gen_array(int* ptr_arr[], int* arr_size);

int gen_array(int* ptr_arr[], int* arr_size)
{
    srand( (unsigned)time( NULL));
    int rand_arr_size = rand()%ARR_SIZE_RANGE + ARR_SIZE_MIN;
    *ptr_arr = new int[rand_arr_size];
    printf("arr size:%d\n", rand_arr_size);


}


int main()
{
    int size;
    int arr;
    gen_array( (int**)*)&arr, &size);

}
