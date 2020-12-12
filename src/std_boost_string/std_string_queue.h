#pragma once

#include <string>
#include <vector>

namespace my_string_api {
class std_string_queue {
public:
  std_string_queue();

  bool inqueue(const std::string &content);
  bool dequeue(std::string &content);

private:
  std::vector<std::string> queue_;
};
} // namespace my_string_api
