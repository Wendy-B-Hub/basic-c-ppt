//
//  selectsort.hpp
//  SelectSort
//
//  Created by Yashu Wu on 2/12/20.
//  Copyright © 2020 Yashu Wu. All rights reserved.
//

#ifndef selectsort_hpp
#define selectsort_hpp

#include <iostream>
#include <array>
void selectionSort(double list[],const std::size_t size);
template <int N>
void selectionSort(std::array<double,N>& list){
    constexpr int size=N;
    // for 循环，每次从list[i]~list[size-1]中找出一个最小的数，与list[i]交换
    for(std::size_t i=0;i<size-1;i++){
        // 初始化，将 list[i]记为最小值，将i记为最小值的索引
         // 用循环，找出list[i+1]~list[size-1]中的最小值和它的下标
        for(std::size_t j=i+1;j<size;j++){
            if(list[i]>list[j]){
                double temp=list[i];
                list[i]=list[j];
                list[j]=temp;
            }
        }
    }
}
#endif /* selectsort_hpp */

