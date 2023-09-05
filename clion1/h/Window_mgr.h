//
// Created by 31053 on 2023/9/4.
//

#ifndef CLION1_WINDOW_MGR_H
#define CLION1_WINDOW_MGR_H

class Debug{
public:
    constexpr Debug(bool b= true):hw(b),io(b),other(b){}
    constexpr Debug(bool h, bool i, bool o):hw(h),io(i),other(o){}

    constexpr bool any(){return hw||io||other;}
    void set_io(bool b)
private:
    bool hw;
    bool io;
    bool other;
};

#endif //CLION1_WINDOW_MGR_H
