#include "std_string_queue.h"

using std::string;

namespace my_string_api {

std_string_queue::std_string_queue() {}

bool std_string_queue::inqueue(const string &content) {
  static std::size_t max_queue_size = 100;
  if (queue_.size() < max_queue_size) {
    queue_.push_back(content);
    return true;
  } else {
    return false;
  }
}

bool std_string_queue::dequeue(string &content) {
  if (!queue_.empty()) {
    content = queue_.front();
    return true;
  } else {
    return false;
  }
}

} // namespace my_string_api