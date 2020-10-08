#include <iostream>

int get_change(int m) {
  int a,b,c,d,n;
  a=m/10;
  b=m%10;
  if(b>=5)
  {
  	c=1;
  	d=b%5;
  }
  else 
  {
  	c=0;
  	d=b%5;
  }
  n=a+c+d;

  
  return n;
}

int main() {
  int m;
  std::cin >> m;
  std::cout << get_change(m) << '\n';
}
