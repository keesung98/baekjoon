#include <iostream>

int getNum(int a, int b){
  if(b == 1)
    return 1;
  if(a == 0)
    return b;
  return (getNum(a-1, b) + getNum(a, b-1));
}

int main() {
  int T, k, n;
  std::cin>>T;
  for(int i=0; i<T; i++){
    std::cin>>k>>n;
    std::cout<<getNum(k, n)<<'\n';
  }
}