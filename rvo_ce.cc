/*
Code snippets to illustrate
return value optimization (RVO), see
https://en.wikipedia.org/wiki/Return_value_optimization, and
copy elision, see
http://en.cppreference.com/w/cpp/language/copy_elision.

OUTPUT:
default ctor
<EOF>
*/


#include <iostream>
#include <array>

class A {
public:
  A () {
    std::cout << "default ctor" << std::endl;
  }
  A (const A &a) {
    std::cout << "copy ctor" << std::endl;
  }
  A (A &&a) {
    std::cout << "move ctor" << std::endl;
  }

  void operator = (const A &b) {
    std::cout << "copy assign" << std::endl;
  }

  void operator = (A &&b) {
    std::cout << "move assign" << std::endl;
  }
};

A f() {
  A a;
  return a;  // return value optimization (RVO)
}

int main() {
  A a = f();  // copy elision
  return 0;
}
