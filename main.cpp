/*
 * @Author: Mr Bian
 * @Date: 2018-11-19 17:09:36
 * @LastEditors: Mr Bian
 * @LastEditTime: 2018-11-19 21:52:58
 * @version: 
 * @Description: 
 */

#include <iostream>

#include "files_handling.h"
#include "sort.h"

int main(int argc, char *argv[])
{
    InputDataType unsorted_data;
    string input_filename = {"unsorted_data.txt"};

    // create a Sort instance to sort the data
    Sort mysort(input_filename);
    string output_filename = {"sorted.txt"};
    OutputDataType sorted_data;

    // to sort
    mysort.BubbleSortFast(sorted_data);

    // write the sorted to the result txt file.
    WriteOutput(output_filename, sorted_data);
    return 0;
}