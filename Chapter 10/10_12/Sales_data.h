//
// Created by 31053 on 2023/9/18.
//

#ifndef INC_10_12_SALES_DATA_H
#define INC_10_12_SALES_DATA_H


class Sales_data {
public:
    Sales_data()=default;
    Sales_data(int num): isbn(num) { }
    int get_isbn(){return isbn;}
private:
    int isbn=0;
};


#endif //INC_10_12_SALES_DATA_H
