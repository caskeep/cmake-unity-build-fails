#include "foo.h"
#include <iostream>

#define MY_MACRO_NUMBER 10

namespace foospace {

foo::foo() {}

void foo::method1() {
  std::cout << "MY_MACRO_NUMBER:" << MY_MACRO_NUMBER << std::endl;
}

} // namespace foospace
