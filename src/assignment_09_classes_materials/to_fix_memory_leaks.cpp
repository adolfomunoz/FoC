#include <iostream>


struct point
{
  int x, y;
  bool not_zero() const { return x!=0 || y!=0; };
};

struct point_node
{
  point p;
  point_node* next;

  point_node(const point& other_p, point_node* other_next) : p(other_p), next(other_next) {}
};

point* copy_point(const point& p)
{
  point* point_ptr = new point(p);

  if (p.x > 1)
    return nullptr;

  return point_ptr;
}

int main()
{
  const size_t n = 4;
  point points[n]={ {0, 0}, {1, 1}, {0, 0}, {1, 1} };

  // save points whose coordinates are not (0, 0)
  point_node* list = nullptr;

  for(const auto& p: points) {
    point_node* node = new point_node(p, nullptr);
    if(p.not_zero()) {
      if(list == nullptr) {
        list = node;
      } else {
        point_node* iter=list;
        while(iter->next != nullptr) {
          iter = iter->next;
        }
        iter->next = node;
      }
    }
  }

  // print non-zero nodes
  for(point_node* iter = list; iter != nullptr; iter = iter->next) {
    std::cout << "(x, y): " << iter->p.x << ", " << iter->p.y << std::endl;
  }
}
