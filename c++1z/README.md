# C++1z
## Features
[This article](http://www.bfilipek.com/2017/01/cpp17features.html) is the most detailed introduction for C++1z features I found on the Internet.

## Compilers
Compiler support can be found on [this website](http://en.cppreference.com/w/cpp/compiler_support). It shows that GCC 7 best supports C++1z. GCC 7's first stable release has already become available after May 2, 2017 ([GCC 7.1](https://gcc.gnu.org/gcc-7/)), which is also included in official PPA packages of Ubuntu 17.04. For earlier Ubuntu, [this website](https://askubuntu.com/questions/914885/installing-gcc-7-and-newer-packages-in-ubuntu-16-04) mentioned a third-party PPA repository. One can install GCC 7.1 by
```
sudo add-apt-repository ppa:jonathonf/gcc-7.1
sudo apt-get update
sudo apt-get install gcc-7 g++-7
```

In this folder, to support C++1z features, the following compile command should be used:
```
g++-7 -std=c++1z a.cc
```
