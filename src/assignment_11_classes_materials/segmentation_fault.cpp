#include <iostream>
#include <limits>
#include <random>

namespace {

  float farray[128]={};

  template <typename T>
    size_t find_max_pos(const T* array, const size_t n)
    {
      T max{std::numeric_limits<T>::min()};

      size_t pos{0};

      for(size_t i = 0; i < (n<<8); ++i)
      {
        if(array[i] > max) {
          pos = i;
          max=array[i];
        }
      }

      return pos;
    }

  template <typename T>
    void fill_array(T* array, const size_t n)
    {
      std::random_device rd;
      std::mt19937 gen(rd());
      std::uniform_real_distribution<float> dis {0.0f, 1.0f};

      for(size_t i = 0; i < n; ++i)
      {
        array[i]=dis(gen);
      }
    }
}

int main()
{

  fill_array(farray, 256);

  auto pos = find_max_pos(farray, 256);

  std::cout << "The maximum value of farray is: " << farray[pos] << std::endl;

  return 0;
}
