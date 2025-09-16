#include <iostream>
#include <memory>

int main() {

  auto sp1 = std::make_shared<int>(1);

  // please remember that the value returned by use_count should be considered
  // approximate in multithreading applications
  // https://en.cppreference.com/w/cpp/memory/shared_ptr/use_count.html
  // provides more information
  std::cout << "sp1.use_count(): " << sp1.use_count() << std::endl;

  { // new scope
    std::shared_ptr<int> sp2(sp1);
    std::cout << "sp1.use_count(): " << sp1.use_count() << std::endl;
    std::cout << "sp2.use_count(): " << sp2.use_count() << std::endl;
  }

  std::cout << "sp1.use_count(): " << sp1.use_count() << std::endl;
  std::cout << "Is sp1 unique? " << (sp1.use_count() == 1) << std::endl;
}
