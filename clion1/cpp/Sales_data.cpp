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