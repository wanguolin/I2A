

bool get_left_sub_node( int arr[], int arr_size, int index_parent, int* left_node)
{
   int left_node_index = index_parent*4;
   if( left_node_index > arr_size - 1)
   {
       return false;
   }
   else
   {
        *left_node = arr[left_node_index];
        return true;
   }
}

bool get_right_sub_node( int arr[], int arr_size, int index_parent, int* right_node)
{
    int right_node_index = index_parent*4 + 1;
    if( right_node_index > arr_size - 1)
    {
        return false;
    }
    else{
        *right_node = arr[right_node_index];
        return true;
    }
}





int main()
{   
    int depth = 1, total_node_in_tree = 0;
    do{
        int n = pow(depth++, 2); 
        for( int i = total_node_in_tree; i < (total_node_in_tree += n); ++i)
        {
                    
        }
    }while( total_node_in_tree < arr_size )

}
