#include "bar.h"

#include <iostream>

namespace workspace {

class internal_conf {
public:
  static int conf_of_bar();
};

int internal_conf::conf_of_bar() { return 42; }

bar::bar() = default;

void bar::bar_do_things_a() {
  std::cout << "bar do things a, with conf_of_bar()="
            << internal_conf::conf_of_bar() << std::endl;
}

} // namespace workspace
