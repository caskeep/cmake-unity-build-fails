#include "std_string_queue.h"
#include "boost_string_queue.h"

#include <iostream>
#include <cassert>

int main() {
  std::cout << "start std-boost-string example" << std::endl;

  if (true) {
    my_string_api::std_string_queue my_queue;
    assert(my_queue.inqueue("haha1"));
    assert(my_queue.inqueue("haha2"));
    std::string queue_first_content;
    assert(my_queue.dequeue(queue_first_content));
  }

  return 0;
}