#include <iostream>
#include  <fstream>
#include <sstream>

int main(){
    std::ifstream input_file;
    std::ofstream output_file;
    std::fstream both_file;

    // using input_file obj to open inputFile.txt
    // last parameter flag
    input_file.open("inputFile.txt", std::ios::in);
    // no params flag
    output_file.open("outputFile.txt");
    // if file in cd, use relative path. Else use absolute.
    // multiple params can be used at once using the pipe key. 
    // std::ios::in | std::ios::app
    both_file.open("bothFile.txt", std::ios::out | std::ios::app);

    if (input_file.fail()){
        std::cout << "input file DNE\n";
    }
    if (input_file.fail()){
        std::cout << "output file DNE\n";
    }
    if (input_file.fail()){
        std::cout << "both file DNE\n";
    }

    // writing to file
    output_file << "Hello World!\n";
    both_file << "Hello World!\n";

    // outputing single string
    std::fstream file;
    file.open("bothFile.txt");
    std::string str;
    file >> str;
    std::cout << str << std::endl;

    file.close();
    file.open("bothFile.txt");
    std::string str2;
    getline(file, str2);
    std::cout << str2 << std::endl;

    if (file.eof()){
        std::cout << "At end of file";
    }
}
