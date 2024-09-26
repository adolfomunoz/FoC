#include <type_traits>

template <typename FP>
int round_to_int(const FP& val)
{
  static_assert(std::is_floating_point<FP>::value,
      "FP should be a floating point type");
  // ...
}
