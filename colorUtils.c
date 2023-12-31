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
  *r=(0.369* *r + 0.769* *g+ 0.189* *b);
  roundValue(*r);
  
  *g=(0.349* *r+0.686* *g + 0.168* *b);

  *b=(0.272* *r + 0.534* *g+0.131* *b);
  roundValue(*b);

  int roundValue(int a){
    if(a>255){
      a=255;
    }
    return roundValue(a);
  }
}