/*
 * @Author: Mr Bian
 * @Date: 2018-11-19 13:40:52
 * @LastEditors: Mr Bian
 * @LastEditTime: 2018-11-19 20:08:02
 * @version: 
 * @Description: Declaration of class Sort.
 */
#ifndef SORT_SORT_H
#define SORT_SORT_H

#include <string>
#include "data_type.h"

using namespace std;

// <effective c++ item 9:  Prefer alias to typedefs.

class Sort
{
  public:
    Sort(string filename);
    int BubbleSort(OutputDataType& sorted_data);

    /**
     * Use a flag to mark whether sorted.
     * If no swapping during a loop, sorted! no need to continue.
     */
    int BubbleSortImproved(OutputDataType& sorted_data);

    /**
     * In bubble sort, if no swap in an internal, indicating that
     * data in this internal are sorted. You can start from the right of 
     * them in the next loop, in this way we reduce some comparison.
     * However, in the worst case, reversed order, still O(n*n) 
     */
    int BubbleSortFast(OutputDataType& sorted_data);
    InputDataType& get_data(){return data_;}

  private:
  InputDataType data_;
};

#endif