/*    author  Hassam    */
#include <stdlib.h>
#include <math.h>

#include "colorUtils.h"

int max(int a, int b, int c) {
  return (a > b) ? (a > c ? a : c) : (b > c ? b: c);
}

int min(int a, int b, int c) {
  return (a < b) ? (a < c ? a : c) : (b < c ? b : c);
}

int toGrayScale(int *r, int *g, int *b, Mode mode) {
  if(r==NULL || g== NULL || b == NULL){
    return error;
  }
  if(mode==AVERAGE){
    *r=*g=*b=(*r+*g+*b)/3;
  }
  else if(mode==LUMINOSITY){
    *r=*g=*b=(0.21* *r + 0.72* *g+0.07* *b);
  }
  return No_Error;
}

int toSepia(int *r, int *g, int *b) {
  int roundValue(int );
}
