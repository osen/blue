#include <cooleng/Core.h>

using namespace myengine;

int main()
{
  std::shared_ptr<Core> core = Core::initialize();
  core->start();

  return 0;
}
