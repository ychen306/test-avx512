#include <immintrin.h>

extern double a[];
extern double b[];
extern double c[];

void foo() {
  _mm512_storeu_pd(&c, _mm512_add_pd(_mm512_loadu_pd(&a), _mm512_loadu_pd(&b)));
}
