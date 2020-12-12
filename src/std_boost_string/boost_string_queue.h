#include <boost/container/string.hpp>

namespace my_lock_free_api {

class lock_free_boost_queue {
public:
  lock_free_boost_queue();

  bool inqueue(const boost::container::string &content);
  bool dequeue(boost::container::string &content);

private:
};

} // namespace my_lock_free_api