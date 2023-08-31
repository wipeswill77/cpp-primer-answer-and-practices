//
// Created by 31053 on 2023/8/30.
//

#ifndef CLION1_SALES_DATA_H
#define CLION1_SALES_DATA_H
#include "../headers.h"

class Sales_data {
public:
    string isbn() const { return bookNo; };
    Sales_data& combine(const Sales_data&);

    string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
};




#endif //CLION1_SALES_DATA_H
