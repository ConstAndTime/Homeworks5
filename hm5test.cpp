#include<iostream>
#include<cstdarg>

void funcPrint (int a, int b, bool r) {
  std::cout << "1. " << (a + b) << ": " << r << std::endl;
}

float mean(int size, ...) {
  float result;
  va_list lst;
  va_start(lst, size);
  for (int i = 0; i < size; i++) {
    result += va_arg(lst, int);
  }
    va_end(lst);
    return result / size;
  }

void divideByTwo(float* f) {
  *f = *f / 5;
}

void divideByThree(float& f) {
  f = f / 2;
}

int main(int argc, const char** argv) {

int a = 10;
const int b = 8;
bool result;
result = (a + b) >= 10 && (a + b) <= 20;
funcPrint(a, b, result);

//1
std::cout << mean(5, 1, 2, 3, 4, 5) << std::endl;
std::cout << mean(10, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10) << std::endl;

float var = 10;
std::cout << var << std::endl;
divideByTwo(&var);
std::cout << var << std::endl;
divideByThree(var);
std::cout << var << std::endl;


  return 0;
}
