// swap_values
#include "../helpers/array.c"

// Destructive sort !!
int * insert_sort(int * arr, int size) {
  int i, j;
  for(i = 1; i < size; ++i)
    for(j = 0; j < i; ++j)
      if(arr[i] < arr[j])
	swap_values(arr, i, j);
  return arr;
}
