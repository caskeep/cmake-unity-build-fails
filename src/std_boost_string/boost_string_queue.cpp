#include "boost_string_queue.h"
namespace my_lock_free_api {

lock_free_boost_queue::lock_free_boost_queue() {}

bool lock_free_boost_queue::inqueue(const boost::container::string &content) {
  return queue_.push(content);
}

bool lock_free_boost_queue::dequeue(boost::container::string &content) {
  return queue_.pop(content);
}

} // namespace my_lock_free_api