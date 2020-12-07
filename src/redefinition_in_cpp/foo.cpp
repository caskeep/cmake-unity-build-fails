#include "foo.h"
#include <iostream>

namespace workspace {

foo::foo() {}

class internal_conf {
public:
  static double conf_of_foo();
};

double internal_conf::conf_of_foo() { return 3.14; }

int foo::foo_things_a(int param_1) {
  std::cout << "foo do things a, with conf_of_foo()="
            << internal_conf::conf_of_foo() << std::endl;
  return 0;
}

} // namespace workspace