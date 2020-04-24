//
//  main.cpp
//  GenericAdd
//
//  Created by Yashu Wu on 2/12/20.
//  Copyright © 2020 Yashu Wu. All rights reserved.
//

#include <iostream>

template <class T,typename Q>
auto add(T x,Q y){
    return (x+y);
}
int main() {
    std::cout<<add(3,2.3)<<std::endl;
    return 0;
}
