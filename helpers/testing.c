#include <stdio.h>
#include <assert.h>

// ---------------------------------------------------------------------------
//  Some convenience functions for testing
void assert_values(int * arr1, int * arr2, int len) {
  int i;
  for(i = 0; i < len; ++i)
    assert(arr1[i] == arr2[i]);
}

void inspect_array(int * arr, int len) {
  int i;
  for(i = 0; i < len; ++i) {
    printf("%d", arr[i]);
    // print a newline if end of array, otherwise a comma
    (i+1 == len) ? printf("\n") : printf(", ");
  }
}
