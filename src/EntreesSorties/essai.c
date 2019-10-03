
#include <stdio.h>

int rot13(int c){
  if('a' <= c && c <= 'z'){
    return rot13(c,'a');
  } else if ('A' <= c && c <= 'Z') {
    return rot13(c, 'A');
  } else {
    return c;
  }
}

int rot13(int c, int basis){
  c = (((c-basis)+13)%26)+basis;
  return c;
}

int main() {
  printf("The given args will be rotated");
  int c;
  while((c = getchar()) != EOF){
    c = rot13(c);
    putchar(c);
  }
  return 0;
}