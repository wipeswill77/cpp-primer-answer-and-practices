//
// Created by 31053 on 2023/9/18.
//

#ifndef INC_10_17_SALES_DATA_H
#define INC_10_17_SALES_DATA_H



class Sales_data {
public:
    Sales_data(std::string i):isbn(i){}
    std::string get_isbn(){return isbn;}
private:
    std::string isbn=0;
};


#endif //INC_10_17_SALES_DATA_H
