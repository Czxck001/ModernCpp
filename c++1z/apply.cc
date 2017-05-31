#include <iostream>
#include <tuple>

void printTuple(const int &t1, const int &t2, const int &t3) {
  std::cout << t1 << ' ' << t2 << ' ' << t3 << std::endl;
}

template <typename T>
void printTupleGeneric(const T &t1, const T &t2, const T &t3) {
  std::cout << t1 << ' ' << t2 << ' ' << t3 << std::endl;
}

int main() {
  std::apply(printTuple, std::tuple(1, 2, 3));

  // template argument deduction fails
  // std::apply(printTupleGeneric, std::tuple(1, 2, 3));
}
