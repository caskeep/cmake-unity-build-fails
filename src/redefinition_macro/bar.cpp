#include "bar.h"

#include <iostream>

#define MY_MACRO_NUMBER 10

namespace barspace {

bar::bar() {}

void bar::method1() {
  std::cout << "MY_MACRO_NUMBER:" << MY_MACRO_NUMBER << std::endl;
}

} // namespace barspace
