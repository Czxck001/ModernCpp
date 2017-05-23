# ModernCpp
Snippets helpful for understanding Modern C++

## Tricks
1. Print the typename of an object in compile time
```cpp
static_assert(decltype(tt)::dummy_error, "DUMP MY TYPE" );
```
