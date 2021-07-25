#include <vector>
#include <iostream>
#include <sstream>
#include <array> 

void splitStringIntoIntVector(std::vector<int>& listOfNums, const std::string& line, const char delimiter)
{
    std::stringstream s_stream(line); //string of space delimited integers

    while (s_stream.good())
    {
        std::string substr;
        getline(s_stream, substr, ' ');
        listOfNums.push_back(std::stoi(substr));
    }
}


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */

    int n;
    std::string line;

    //get num of inputs to be given 
    std::cin >> n;

    //clear whitespace
    std::cin >> std::ws;

    //get row of ints
    std::getline(std::cin, line);


    std::vector<int> listOfNums; //vector to store integers    

    splitStringIntoIntVector(listOfNums, line, ' ');

    for (int i = 0; i < listOfNums.size(); i++)
    {
        std::cout << listOfNums[i] << std::endl;
    }
    return 0;
}
