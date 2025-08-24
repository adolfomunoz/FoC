#include <iostream>
#include <memory>

class node
{
  size_t _id;
  std::shared_ptr<node> _next;

  public:

  node(size_t id) : _id(id)
  {
    std::cout << "Node " << id << " alive" << std::endl;
  }

  ~node()
  {
    std::cout << "Node " << _id << " destroyed" << std::endl;
  }

  size_t id() const { return _id; }

  bool add_next(std::shared_ptr<node>& spother)
  {
    if(spother == nullptr) {
      return false;
    }

    std::cout << "Node " << spother->id() << " follows Node " << _id << std::endl;

    _next = spother;
    return true;
  }
};

int main()
{
  auto  a { std::make_shared<node>(3) };
  auto  b { std::make_shared<node>(4) };

  a->add_next(b);
  b->add_next(a);

  return 0;
}
