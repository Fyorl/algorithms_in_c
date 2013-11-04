#include <stdlib.h>

// NOTE: uses malloc to create new array ... free that ish
int * merge(int * arr1, int * arr2, int len1, int len2) {
  int i, j;
  int * res = (int *) malloc(sizeof(int) * (len1 + len2));

  for(i = 0, j = 0; i < len1 || j < len2; )
    (i < len1 && (j >= len2 || arr1[i] <= arr2[j]))?
      ((res[i+j] = arr1[i]) && ++i) :
      ((res[i+j] = arr2[j]) && ++j);

  return res;
}

// Currently broken... sorting it out
int * merge_sort(int * arr, int size) {
  if(size <= 1)
    return arr;

  int r_half = size / 2;
  int l_half = r_half + size % 2;

  return merge(merge_sort(arr, l_half),
	       merge_sort((arr + l_half - 1), r_half),
	       l_half, r_half);
}
