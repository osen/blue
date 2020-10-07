#include "Player.h"

#include <cooleng/cooleng.h>

using namespace myengine;

int main()
{
  std::shared_ptr<Core> core = Core::initialize();

  std::shared_ptr<Entity> pe = core->addEntity();
  std::shared_ptr<Player> pc = pe->addComponent<Player>();

  core->start();

  return 0;
}
