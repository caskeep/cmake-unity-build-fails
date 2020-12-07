#include "bar.h"
#include "foo.h"

/// \brief show case for redefinition error in cpp files
/// this will not report error in common compilation stage,
/// but if you use cmake unity build feature, then this may happen.
int main() {
  workspace::bar my_bar;
  my_bar.bar_do_things_a();
  workspace::foo my_foo;
  my_foo.foo_things_a(60);
  return 0;
}
