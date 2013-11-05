// assert_values, inspect_arr
#include "../helpers/testing.c"
#include "insert_sort.c"
#include "merge_sort.c"

#define ARR_SIZE 1000000

int main(void) {
  int i;
  /*
  int test_set[][5] =  { {3, 1, 5, 2, 4},
			 {5, 4, 3, 2, 1},
			 {1, 2, 3, 4, 5},
			 {2, 1, 3, 5, 4} };
  int expected[] = {1, 2, 3, 4, 5};
  */
  int arr[ARR_SIZE], expected[ARR_SIZE];
  int * res;

  for(i = 0; i < ARR_SIZE; ++i)
    expected[i] = i;
  for(i = ARR_SIZE - 1; i >= 0; --i)
    arr[i] = i;

  res = merge_sort(arr, ARR_SIZE);
  assert_values(res, expected, ARR_SIZE);

  free(res);

  return 0;
}
