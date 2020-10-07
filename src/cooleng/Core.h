#include <memory>

namespace myengine
{

struct Core
{
  static std::shared_ptr<Core> initialize();

  void start();

private:
  Core();

};

}

