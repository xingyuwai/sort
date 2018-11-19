/*
 * @Author: Mr Bian
 * @Date: 2018-11-19 14:09:31
 * @LastEditors: Mr Bian
 * @LastEditTime: 2018-11-19 15:06:58
 * @version: 
 * @Description: The unsorted data stored in unsorted_data.txt;
 *               Output the sorted data into file sorted_data.txt.
 */
#ifndef SORT_FILES_HANDLING_H
#define SORT_FILES_HANDLING_H

#include <string>

#include "data_type.h"

using namespace std;

/**
 * @Description: Get the unsorted data, store it into unordered_data, which is a reference.
 * @param filename - the file contains unsorted data, to be read in.
 * @param unordered_data - use reference to store the data read in.
 * @return : 0 if succeed; 
*/
int GetInput(const string& filename,InputDataType &unordered_data);

/**
 * @Description: Output the sorted data into a file "filename"
 * @param filename - the file saving the sorted result .
 * @param sorted_data - the data sorted by a certain algorithm.
 * @return : 0 if succeed; 
*/
int WriteOutput(const string& filename, OutputDataType &sorted_data);

#endif