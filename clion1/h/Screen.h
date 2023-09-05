//
// Created by 31053 on 2023/9/4.
//

#ifndef CLION1_SCREEN_H
#define CLION1_SCREEN_H

#include "headers.h"

class Screen {
public:
    typedef string::size_type pos;

    Screen()=default;

    Screen(pos positionX, pos positionY,char c):position_x(positionX),position_y(positionY),
    contents(positionX*positionY,c){}
    char get()const {return contents[cursor];}//隐式内联
    inline char get(pos ht,pos wd) const;//显示内联
    Screen &move(pos x, pos y);
private:
    pos position_x = 0, position_y = 0;
    pos cursor = 0;
    string contents;

};


#endif //CLION1_SCREEN_H
