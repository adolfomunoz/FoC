#include <iostream>
#include <memory>

int main() {

  auto sp1 = std::make_shared<int>(1);
  std::cout << "sp1.use_count(): " << sp1.use_count() << std::endl;

  { // new scope
    std::shared_ptr<int> sp2(sp1);
    std::cout << "sp1.use_count(): " << sp1.use_count() << std::endl;
    std::cout << "sp2.use_count(): " << sp2.use_count() << std::endl;
  }

  std::cout << "sp1.use_count(): " << sp1.use_count() << std::endl;
  std::cout << "Is sp1 unique? " << sp1.unique() << std::endl;
}
