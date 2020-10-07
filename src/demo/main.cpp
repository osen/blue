#include <cooleng/cooleng.h>

using namespace myengine;

int main()
{
  std::shared_ptr<Core> core = Core::initialize();

  std::shared_ptr<Entity> pe = core->addEntity();
  std::shared_ptr<Component> pc = pe->addComponent<Component>();

  core->start();

  return 0;
}
