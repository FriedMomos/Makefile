#include <stdio.h>
#include <iostream>
#include "new.h"

int main(){
int a,b;
std::cin>>a>>b;
int result = add(a,b);
std::cout<<"The result = "<<result<<std::endl;
return 0;
}
