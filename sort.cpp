/*
 * @Author: Mr Bian
 * @Date: 2018-11-19 18:03:23
 * @LastEditors: Mr Bian
 * @LastEditTime: 2018-11-19 22:18:40
 * @version: 
 * @Description: 
 */
#include "sort.h"
#include "files_handling.h"

Sort::Sort(string filename)
{
    GetInput(filename, data_);
}

// bubble sort is stable, inplace.
int Sort::BubbleSort(OutputDataType &sorted_data)
{
    sorted_data = data_;
    size_t length = sorted_data.size();
    for (size_t i = 0; i < length - 1; i++)
    {
        for (size_t j = 0; j < length - 1 - i; j++)
        {
            if (sorted_data[j + 1] < sorted_data[j])
            {
                int temp = sorted_data[j];
                sorted_data[j] = sorted_data[j + 1];
                sorted_data[j + 1] = temp;
            }
        }
    }

    return 0;
}

int Sort::BubbleSortImproved(OutputDataType &sorted_data)
{
    sorted_data = data_;
    size_t length = sorted_data.size();
    for (size_t i = 0; i < length - 1; i++)
    {
        bool is_sorted = true;
        for (size_t j = 0; j < length - 1 - i; j++)
        {
            //FBI Warning: 4 nested, no more
            if (sorted_data[j + 1] < sorted_data[j])
            {
                is_sorted = false;
                int temp = sorted_data[j];
                sorted_data[j] = sorted_data[j + 1];
                sorted_data[j + 1] = temp;
            }
        }
        if (is_sorted)
            break;
    }

    return 0;
}

int Sort::BubbleSortFast(OutputDataType &sorted_data)
{
    sorted_data = data_;
    size_t length = sorted_data.size();
    for (size_t lo = 0, hi = length - 1; lo < hi;)
    {

        /**
         *  This is a key statement---without reversed pair, no longer traverse
         * without reset last_reversed_pos to 0, you get a infinite loop, wow~~
         * When using [lo,hi], it's error-prone to run into {lo=0, hi=1}.
         */
        size_t last_reversed_pos = 0;
        for (auto current_pos = lo; current_pos < hi; current_pos++)
        {
            //FBI Warning: 4 nested, no more
            if (sorted_data[current_pos + 1] < sorted_data[current_pos])
            {
                int temp = sorted_data[current_pos];
                sorted_data[current_pos] = sorted_data[current_pos + 1];
                sorted_data[current_pos + 1] = temp;
                last_reversed_pos = current_pos;
            }
        }
        hi = last_reversed_pos;
    }
    return 0;
}
