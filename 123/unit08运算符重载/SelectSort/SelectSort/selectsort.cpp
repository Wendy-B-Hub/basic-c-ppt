//
//  selectsort.cpp

//

#include "selectsort.hpp"
void selectionSort(double list[],const std::size_t size){
    for(std::size_t i=0;i<size-1;i++){
        for(std::size_t j=i+1;j<size;j++){
            if(list[i]>list[j]){
                double temp=list[i];
                list[i]=list[j];
                list[j]=temp;
            }
        }
    }
}
