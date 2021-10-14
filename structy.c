#include <stdio.h>
#include <stdlib.h>


struct foo {int a; char x;};

void print_foo(struct foo *f) {
  printf("int: %d\tchar: %c\n", f->a, (*f).x);
}

struct foo * make_foo(int i, char c) {

  struct foo *n = malloc(sizeof(struct foo));

  n->a = i;
  n->x = c;

  return n;
}

int main() {

  struct foo *h = make_foo(45, '?');
  print_foo(h);

  free(h);
  /*
  struct foo s;
  struct foo g;
  s.a = 137;
  s.x = '+';

  print_foo(&s);
  g = s;
  s.a = 0;

  print_foo(&s);
  print_foo(&g);


  printf("%d %c\n", s.a, s.x);
  printf("%d %c\n", g.a, g.x);
  */
  /*
  printf("sizeof s: %ld\n", sizeof(s));
  printf("&s: %p &s.a: %p\n", &s, &s.a);
  printf("&s: %lu\n", &s);
  printf("s: %lu\n", s);
  */
  return 0;
}
