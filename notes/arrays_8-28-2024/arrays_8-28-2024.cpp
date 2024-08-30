#include <iostream>
using namespace std;


//number of rows does not need to be specified.
// This is because memory is stored like [][][][][][][][][]..... in a row. changing row count allows for null sections.
void printArray(float arr[][3]){
    for (int i = 0; i < 2; i++){
        for(int j = 0; j < 3; j++){
            cout << arr[i][j] << endl;
        }
    }
}

int main() {
    float day1 = 7;
    float day2 = 8;
    float day3 = 9;

    // creating 
    float dayArray[3] = {
        7,
        6,
        8
    };

    cout << dayArray[0] << endl;

    // Creates 2x3 array
    float month_day_array[2][3] = {
        {1,2,3},
        {4,5,6}
    };

    // prints array
    printArray(month_day_array);

    // printing memory location
    cout << month_day_array[0] << endl;
    cout << &month_day_array << endl;
    cout << month_day_array[1] << endl;

    //need variables to be constand if they are being used
    const int number = 1;
    float arrayA[number][number];

    // checkpoint 7.19
    int grades[25][15];

    // checkpoint 7.20
    // How many elements in 
    double sales[7][4];
    // 28
    
    sales[0][0] = 56.8;

}