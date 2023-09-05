//
// Created by 31053 on 2023/8/30.
//

#ifndef CLION1_SALES_DATA_H
#define CLION1_SALES_DATA_H

#include "headers.h"

class Sales_data {
public:

    Sales_data(const string &bookNo, unsigned int unitsSold, double p);

    explicit Sales_data(const string &bookNo) : Sales_data(bookNo, 0, 0) { cout << 1 << endl; }

    Sales_data() : Sales_data("", 0, 0) { cout << 2 << endl; }

    Sales_data(istream &istream1) : Sales_data() {
        cout << 3 << endl;
        read(istream1, *this);
    }


    string isbn() const;

    friend istream &read(istream &istream1, Sales_data &item);

    friend ostream &print(ostream &os, Sales_data &item);

    Sales_data &combine(const Sales_data &);

private:
    [[nodiscard]] double avg_price() const;

    string bookNo;
    unsigned int units_sold = 0;
    double revenue = 0.0;
};

istream &read(istream &istream1, Sales_data &item);

ostream &print(ostream &os, Sales_data &item);

#endif //CLION1_SALES_DATA_H
