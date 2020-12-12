#include "boost_string_queue.h"
#include "std_string_queue.h"

#include <cassert>
#include <iostream>

void std_string_queue() {
  my_string_api::std_string_queue my_queue;
  assert(my_queue.inqueue("content1"));
  assert(my_queue.inqueue("content2"));
  std::string queue_first_content;
  assert(my_queue.dequeue(queue_first_content));
  assert(queue_first_content == "content1");
}

void boost_string_queue() {
  my_lock_free_api::lock_free_boost_queue my_queue;
  assert(my_queue.inqueue("content1"));
  assert(my_queue.inqueue("content2"));
  boost::container::string queue_first_content;
  assert(my_queue.dequeue(queue_first_content));
  // assert(queue_first_content == "content1");
}

int main() {
  std::cout << "start std-boost-string example" << std::endl;
  std_string_queue();
  boost_string_queue();
  return 0;
}