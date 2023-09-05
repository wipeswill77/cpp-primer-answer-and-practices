//
// Created by 31053 on 2023/8/30.
//

#include "../h/Sales_data.h"

Sales_data& Sales_data::combine(const Sales_data& rhs)
{
    units_sold += rhs.units_sold;
    revenue += rhs.revenue;
    return *this;
}

Sales_data::Sales_data(const string &bookNo, unsigned int unitsSold, double p) : bookNo(bookNo),
                                                                                       units_sold(unitsSold),
                                                                                       revenue(p*unitsSold) {cout<<0<<endl;}

string Sales_data::isbn() const {
    return bookNo;
}

double Sales_data::avg_price() const {
    return units_sold?revenue/units_sold:0;
}

istream &read(istream &istream1, Sales_data &item) {
    double price=0;
    istream1>>item.bookNo>>item.units_sold>>price;
    item.revenue=item.units_sold* price;
    return istream1;
}

ostream &print(ostream &os, Sales_data &item) {
    os<<item.isbn()<<" "<<item.units_sold<<" "<<item.revenue<<" "<<item.avg_price();
    return os;
}


