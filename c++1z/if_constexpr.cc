#include <iostream>

template <bool IsPositive>
auto increment(int a) {
  if constexpr (IsPositive) {  // compile-time decision
    return a + 1;
  } else {
    return a - 1;
  }
}

int main() {
  std::cout << increment<true>(2) << std::endl;
  std::cout << increment<false>(2) << std::endl;
}
