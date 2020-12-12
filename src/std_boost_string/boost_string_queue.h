#include <boost/container/string.hpp>
#include <boost/lockfree/spsc_queue.hpp>

namespace my_lock_free_api {

class lock_free_boost_queue {
public:
  lock_free_boost_queue();

  bool inqueue(const boost::container::string &content);
  bool dequeue(boost::container::string &content);

private:
  boost::lockfree::spsc_queue<boost::container::string,
                              boost::lockfree::capacity<100>>
      queue_;
};

} // namespace my_lock_free_api