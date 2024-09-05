// This program produces a sales report for DLC，Inc.
#include <iostream>

#include<iomanip>

using namespace std;

struct product{
    int id;
    int units;
    double prices;
    double sales;
};

//Function prototypes
void calcSales(product[], int);
void showOrder(product[], int);
void dualSort(product[], int);
void showTotals(product[], int);
void swap(double & , double & );
void swap(int & , int & );

int main() {
    //NUM PRODSis the number of products produced.
    const int NUM_PRODS = 9;
    // Array withproduct IDnumber

    product products[NUM_PRODS];

    int id[NUM_PRODS] = {
        914,
        915,
        916,
        917,
        918,
        919,
        920,
        921,
        922
    };
    // Array with number of units sold for each produc
    int units[NUM_PRODS] = {
        842,
        416,
        127,
        514,
        437,
        269,
        97,
        492,
        212
    };
    // Array with product prices
    double prices[NUM_PRODS] = {
        12.95,
        14.95,
        18.95,
        16.95,
        21.95,
        31.95,
        14.95,
        14.95,
        16.95
    };

    for (int i = 0; i < NUM_PRODS; i++){
        products[i].id = id[i];
        products[i].units = units[i];
        products[i].prices = prices[i];
    }
    
    // Calculate each product’s sales.
    calcSales(products, NUM_PRODS);
    // Sort the elements in the sales array in descending
    //order and shuffle the ID numbers in the id array to
    // keep themin para11e1.
    dualSort(products, NUM_PRODS);
    // Set the numeric output formatting.
    cout << setprecision(2) << fixed << showpoint;
    // Display the products and sales amounts.
    showOrder(products, NUM_PRODS);
    // Display total units sold and total sales
    showTotals(products, NUM_PRODS);
    return 0;
}
//***************************************************************
// Definition of calcSales. Accepts units，prices，and sales *
// arrays as arguments. The size of these arrays is passed *
// into the num parameter. This function calculates each *
// product’s sales by multiplying its units sold by each unit’s *
// price. The result is stored in the sales array *
//***************************************************************
void calcSales(product products[], int num) {
    for (int index = 0; index < num; index++)
        products[index].sales = products[index].units * products[index].prices;
}
//******************************************************************
// Definition of function dualSort，Accepts id and sales arrays *
// as arguments，The size of these arrays is passed into size. *
// This function performs a descending order selection sort on *
// the sales array. The elements of the id array are exchanged *
// identica7ly as those of the sales array.size is the number *
//of elementsin each array. *
//******************************************************************
// void dualSort(int id[], double sales[], int size) {
void dualSort(product products[], int size) {
    int start, maxIndex, tempid;
    double maxValue;
    for (start = 0; start < (size - 1); start++) {
        maxIndex = start;

        maxValue = products[start].sales;
        tempid = products[start].id;

        for (int index = start + 1; index < size; index++) {
            if (products[index].sales > maxValue) {
                maxValue = products[index].sales;
                tempid = products[index].id;
                maxIndex = index;
            }
        }
        swap(products[maxIndex].sales, products[start].sales);
        swap(products[maxIndex].id, products[start].id);
    }
}
//*****************************************************
// The swap function swaps doubles a and bin memory. *
//*****************************************************
void swap(double & a, double & b) {
    double temp = a;
    a = b;
    b = temp;
}
//**************************************************
// The swap function swaps ints a and b in memory. *
//**************************************************
void swap(int & a, int & b) {
    int temp = a;
    a = b;
    b = temp;
}
//***************************************************************
//Definition of showOrder function.Accepts sales and id arrays *
// as arguments. The size of these arrays is passed into num. *
// The function first displays a heading, then the sorted list *
// of product numbers and sales. *
//***************************************************************
void showOrder(product products[], int num) {
    cout << "ProductNumber\tSales\n";
    cout << "--------------------------\n";
    for (int index = 0; index < num; index++) {
        cout << products[index].id << "\t\t$";
        cout << setw(8) << products[index].sales << endl;
    }
    cout << endl;
}
//*********************************************************************
//Definition of showTotals function. Accepts sales and id arrays *
//as arguments. The size of these arrays is passed into num. *
// The function first calculates the total units (of a11 *
// products) sold and the total sales. It then displays these *
// amounts. *
//*********************************************************************
void showTotals(product products[], int num) {
    int totaUnits = 0;
    double totalSales = 0.0;
    for (int index = 0; index < num; index++) {
        totaUnits += products[index].units;
        totalSales += products[index].sales;
    }
    cout << "Total units Sold: " << totaUnits << endl;
    cout << "Total sales: $" << totalSales << endl;
}