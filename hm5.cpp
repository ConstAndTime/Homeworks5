#include<iostream>
#include<cstdarg>
#include<cstdlib>
#include<ctime>
#include "main.h"

using namespace Chang;

int main(int argc, const char** argv) {
//1
int arr[10]={0, 1, 1, 1, 0, 1, 1, 0, 0, 1};
for (int i=0; i < 10; i++) {
        arr[i] = n - arr[i] ;
        printf("%d ", arr[i] , "\n");
};printf("\n");

//2
const int u = 8;
int ar[u];
for (int t = 0; t < u; t++) {
  ar[t] = 3*t + n;
  printf("%d ", ar[t] );
}; printf("\n");

//3

int AR[5] {};
for (int j = 0; j < 5; j++) {
  AR[j] = 5*n + rand() %15;
if (AR[0] == (AR[1] + AR[2] + AR[3] + AR[4])) {
  std::cout << AR[0] << " = " << AR[1] << " + " << AR[2] << " + " << AR[3] << " + " << AR[4] << ". This true" << std::endl;
}
else if ( (AR[0] + AR[1]) == (AR[2] + AR[3] + AR[4]) ) {
  std::cout << AR[0] << " + " << AR[1] << " = " << AR[2] << " + " << AR[3] << " + " << AR[4] << ". This true" << std::endl;
}
else if ( (AR[0] + AR[1] + AR[2]) == (AR[3] + AR[4]) ) {
  std::cout << AR[0] << " + " << AR[1] << " + " << AR[2] << " = " << AR[3] << " + " << AR[4] << ". This true" << std::endl;
}
else if ( (AR[0] + AR[1] + AR[2] + AR[3]) == AR[4] ) {
  std::cout << AR[0] << " + " << AR[1] << " + " << AR[2] << " + " << AR[3] << " = " << AR[4] << ". This is true" << std::endl;
}
else {
  std::cout << AR[0] << " " << AR[1] << " " << AR[2] << " " << AR[3] << " " << AR[4] << ". This array ar not havent equality among sums of variables. False." << std::endl;
};
};
//4
const int q = 10;
int arq[q] = {3, 7, 14, 15, 22, 41, 80, 160, 161, 241};
for (int x = 0; x < q; x++) {
  arq[x] = arq[x] + n;
  printf("%d ", arq[x] );
}; printf("\n");
return 0;
};
