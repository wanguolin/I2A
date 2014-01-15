#include <stdio.h>
#include <time.h>
#include <stdlib.h>


#define ARR_SIZE_RANGE    50
#define ARR_SIZE_MIN      15
#define NUM_IN_ARR_RANGE  100

int gen_array(int **ptr_arr, int *arr_size);
bool chk_sorting( bool is_ascending, int **ptr_arr, const int arr_size);

int gen_array(int **ptr_arr, int *arr_size)
{
    srand( (unsigned)time( NULL));
    *arr_size = rand()%ARR_SIZE_RANGE + ARR_SIZE_MIN;
    *ptr_arr  = new int[*arr_size];
    for( int i = 0; i < *arr_size; ++i)
        (*ptr_arr)[i] = rand()%NUM_IN_ARR_RANGE;        
}

bool chk_sorting( bool is_ascending, int **ptr_arr, const int arr_size)
{
    for( int i = 0; i < arr_size - 1; ++i)
        for( int j = i; j < arr_size; ++j)
            if( !( is_ascending && ptr_arr[i] <= ptr_arr[j]) || !( !is_ascending && ptr_arr[i] >= ptr_arr[j]))
                return false;
    return true;
}

int main()
{
    int size = 0, *arr = NULL;
    gen_array( &arr, &size);

    for( int i = 0; i < size; ++i)
        printf("%d ", arr[i]);
    
    chk_sorting( true, &arr, size) == true ? printf( "true\n") : printf( "false\n");

    return 0;

}
