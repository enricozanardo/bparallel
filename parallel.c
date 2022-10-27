//compute the sum of two arrays in parallel 
#include <stdio.h>
#include <omp.h>

#define N 100


int main(void) { 
  float a[N], b[N], c[N], result;
  int i;

  /* Initialize arrays a and b */
  for (i = 0; i < N; i++) {
    a[i] = i * 2.0;
    b[i] = i * 3.0;
  }

    printf("Array a[99] : %f\n", a[99]);
    printf("Array b[99] : %f\n", b[99]);

    result = a[99] + b[99];

 /* Compute values of array c = a+b in parallel. */
  #pragma omp parallel shared(a, b, c) private(i)
  { 
    #pragma omp for             
    for (i = 0; i < N; i++) {
      c[i] = a[i] + b[i];
      printf("%f\n", c[i]);
    }
  }
    printf("Result %f -> Last element of Array C: %f\n", result, c[99]);
}