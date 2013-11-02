// ---------------------------------------------------------------------------
//  Some convenience functions for working with arrays

void swap_values(int * arr, int i, int j) {
  int temp = arr[i];
  arr[i] = arr[j];
  arr[j] = temp;
}
