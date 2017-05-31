#include <iostream>
#include <tuple>

auto f() {
  // Before C++1z, std::make_tuple should be used instead of std::tuple
  // for the reason that only function template deduction is allowed.
  // In C++1z, class template deduction is also available.
  return std::tuple(0, 1.1, "hello");
}

int main() {
  auto [a, b, c] = f();
  std::cout << a << " " << b << " " << c << std::endl;
}
