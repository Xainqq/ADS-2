// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"


double pown(double value, uint16_t n) {
  double step = value;
    for (uint16_t i=1; i < n; i++) {
        step = step * value;
    }
    if (n == 0) {
        step = 1;
        }
    return(step);
}

uint64_t fact(uint16_t n) {
  uint64_t s = 1;
    for (uint16_t i = 1; i <= n; i++) {
        s = s * i;
    }
    return(s);
}

double calcItem(double x, uint16_t n) {
    double s = pown(x, n) / fact(n);
    return(s);
}

double expn(double x, uint16_t count) {
  double s = 1;
    for (uint16_t i = 1; i <= count; i++) {
        s += calcItem(x, i);
    }
    return(s);
}

double sinn(double x, uint16_t count) {
   double s = 0;
    for (uint16_t i = 1; i <= count; i++) {
        s += pown(-1, i - 1) * calcItem(x, 2 * i - 1);
    }
    return(s);
}

double cosn(double x, uint16_t count) {
    double c = 0;
    for (uint16_t i = 1; i <= count; i++) {
        c += pown(-1, i - 1) * calcItem(x, 2 * i - 2);
    }
    return(c);
}
