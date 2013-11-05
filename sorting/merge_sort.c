// NOTE: uses malloc to create new array ... free that ish
int * merge(int * res, int * arr1, int * arr2, int len1, int len2) {
  int i, j;

  for(i = 0, j = 0; i < len1 || j < len2; )
    res[i+j] = (i < len1 && (j >= len2 || arr1[i] <= arr2[j]))?
      arr1[i++] : arr2[j++];

  return res;
}

int * merge_sort(int * res, int * arr, int size) {
  if(size <= 1)
    return arr;

  int r_half = size / 2;
  int l_half = r_half + size % 2;

  return merge(res,
	       merge_sort(res, arr, l_half),
	       merge_sort(res + l_half, arr + l_half, r_half), l_half, r_half);
}
