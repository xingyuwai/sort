/*
 * @Author: Mr Bian
 * @Date: 2018-11-19 14:09:13
 * @LastEditors: Mr Bian
 * @LastEditTime: 2018-11-19 18:02:48
 * @version: 
 * @Description: 
 */
#include <algorithm>
#include <fstream>
#include <iostream>

#include "files_handling.h"

int GetInput(const string &filename, InputDataType &unordered_data)
{
    // you can use open() or constuct func to open a file , they're similar.
    ifstream input_file(filename);

    // Firstly, ensure the file is opened successfully
    // How to write this part better ??
    if (!input_file.is_open())
    {
        cout << "Error opening file" << filename << endl;
        return 1;
    }
    string input_data;
    while (input_file.good())
    {
        /*
         * At the end of the file , no spaces ! or the last element will be repeated
         * std::basic_istream::operator>>
         */
        input_file >> input_data;
        unordered_data.push_back(stoi(input_data));
    }

    input_file.close();
    return 0;
}
int WriteOutput(const string &filename, OutputDataType &sorted_data)
{
    /**
     * default openmode is  mode = ios_base::in|ios_base::out;
     */
    ofstream output_file(filename);

    for (auto i : sorted_data)
    {
        output_file << i << " ";
    }

    output_file.close();
    return 0;
}