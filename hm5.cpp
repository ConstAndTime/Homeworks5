#include<iostream>
#include<cstdarg>
#include<cstdlib>
#include<ctime>

// using namespace Changing
// void change (int, int);

int main(int argc, const char** argv) {
//1
int arr[10]={0, 1, 1, 1, 0, 1, 1, 0, 0, 1};
for (int i=0; i < 10; i++) {
      arr[i] = 1 - arr[i] ;
      // change (arr[i]);
  printf("%d ", arr[i] , "\n");
};printf("\n");

//2
const int u = 8;
int ar[u];
for (int t = 0; t < u; t++) {
  ar[t] = 3*t + 1;
  printf("%d ", ar[t] );
}; printf("\n");

//3

int AR[5] {};
for (int t = 0; t < 3; t++) {
  AR[t] = 5 + rand() %15;
if (AR[0] == (AR[1] + AR[2] + AR[3] + AR[4])) {
  std::cout << AR[0] << " = " << (AR[1] + AR[2] + AR[3] + AR[4]) << ". This true" << std::endl;
}
else if ( (AR[0] + AR[1]) == (AR[2] + AR[3] + AR[4]) ) {
  std::cout << (AR[0] + AR[1]) << " = " << (AR[2] + AR[3] + AR[4]) << ". This true" << std::endl;
}
else if ( (AR[0] + AR[1] + AR[2]) == (AR[3] + AR[4]) ) {
  std::cout << (AR[0] + AR[1] + AR[2]) << " = " << (AR[3] + AR[4]) << ". This true" << std::endl;
}
else if ( (AR[0] + AR[1] + AR[2] + AR[3]) == AR[4] ) {
  std::cout << (AR[0] + AR[1] + AR[2] + AR[3]) << " = " << AR[4] << ". This true" << std::endl;
}
else {
  std::cout << AR[0] << " " << AR[1] << " " << AR[2] << " " << AR[3] << " " << AR[4] << ". This array ar not havent equality among sums of variables. False." << std::endl;
};
};
//4
// const int q = 10;
// int arq[q];
// int n;
// for (int x = 0; x < q; x++) {
//   arq[x] = x + n;
//   printf("%d ", ar[x] );
// }; printf("\n");
return 0;
};
