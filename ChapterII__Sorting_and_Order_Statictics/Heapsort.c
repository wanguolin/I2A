/*
 * A max-heap viewed as (a) a binary tree and (b) an array. 
 * The number within the circle at each node in the tree is the value stored at that node.
 * The Number above a node is the corresponding index in the array. 
 * Above and below the array are lines showing parent-child relationships; parents are always to the left of their children. 
 * The tree has height three; the node at index 4 ( with value 8) has height one.
 */

#define PARENT(i)   (i/2)
#define LEFT(i)     (2*i)
#define RIGHT(i)    (2*i+1)


void swap(int &a, int &b)
{
    int c = a;
    a = b;
    b = c;
}



/*
 *
 * Maintaining the heap property
 *
 * In order to maintain the max-heap property, we call the procedure Max_Heapify. Its inputs are an array A and an index i into the array.
 * When it is called, Max_Heapify assumes that the binary trees rooted at Left(i) and Right(i) are max-heaps. but that A[i] might be smaller than its children, 
 * thus violating the max-heap property. Max_Heapify lets the value at A[i] "float down" in the max-heap so that the subtree rooted at index i obeys 
 * the max-heap property.
 */



void Max_Heapify(int A[], i)
{
    int right_index = RIGHT(i);
    int left_index  = LEFT(i);
    int array_size  = sizeof(A)/sizeof(int);
   
    /*
     * My poor method:
        if(left_index < array_size && A[i] < A[left_index])
            SWAP(A[i],A[left_index])
        else if(right < array_size && right_index A[i] < A[right_index])
            SWAP(A[i],A[right_index])
    */

    //A better way:
    int largest = i;
    if( left_index < array_size && largest < A[i])
        largest = left_index;
    if( right_index < array_size && largest < A[right_index])
        largest = right_index;

    if( largest != i){
        swap(A[i],A[largest]);
        Max_Heapify(A, left_index);
    }
}


