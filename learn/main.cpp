#include <stdio.h>
#include <iostream>
#include "new.h"

int main(){
int c,d;
std::cin>>c>>d;
std::cout<<"The result = "<<add(c,d)<<std::endl;
std::cout<<"The Diff = "<<sub(c,d)<<std::endl;
return 0;
}
