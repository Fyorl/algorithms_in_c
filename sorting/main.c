// assert_values, inspect_arr
#include "../helpers/testing.c"
//#include "insert_sort.c"
#include "merge_sort.c"


int main(void) {
  int i;
  int test_set[][5] =  { {3, 1, 5, 2, 4},
			 {5, 4, 3, 2, 1},
			 {1, 2, 3, 4, 5},
			 {2, 1, 3, 5, 4} };
  int expected[] = {1, 2, 3, 4, 5};
  int * res;

  for(i = 0; i < 4; ++i) {
    //res = insert_sort(test_set[i], 5);
    res = merge_sort(test_set[i], 5);
    inspect_array(test_set[i], 5);
    inspect_array(res, 5);
    assert_values(res, expected, 5);
  }

  free(res);

  return 0;
}
