#include <A/SomeA.h>
#include <B/SomeB.h>
#include <C/SomeC.h>

int main() {
  someproject::a::SomeA some_a;
  some_a.a();

  someproject::b::SomeB some_b;
  some_b.b();

  someproject::c::SomeC some_c;
  some_c.c();

  return 0;
}
