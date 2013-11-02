// assert_values, inspect_arr
#include "../helpers/testing.c"
// insert_sort
#include "insert_sort.c"

int main(void) {
  int i, j;
  int test_set[][5] =  { {3, 1, 5, 2, 4},
			 {5, 4, 3, 2, 1},
			 {1, 2, 3, 4, 5},
			 {2, 1, 3, 5, 4} };
  int expected[5] = {1, 2, 3, 4, 5};

  for(i = 0; i < 4; ++i) {
    insert_sort(test_set[i], 5);
    inspect_arr(test_set[i], 5);
    assert_values(test_set[i], expected, 5);
  }
}
