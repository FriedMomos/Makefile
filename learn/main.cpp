#include <stdio.h>
#include <iostream>
#include "new.h"

int main(){
int a,b;
std::cin>>a>>b;
std::cout<<"The result = "<<add(a,b)<<std::endl;
std::cout<<"The Diff = "<<sub(a,b)<<std::endl;
return 0;
}
