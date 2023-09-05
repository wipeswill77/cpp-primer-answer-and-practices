//
// Created by 31053 on 2023/9/4.
//

#include "../h/Screen.h"


char Screen::get(Screen::pos ht, Screen::pos wd) const {
    return contents[position_y * ht + wd];
}

Screen &Screen::move(Screen::pos x, Screen::pos y) {
    cursor = x * position_y + y;
    return *this;
}
