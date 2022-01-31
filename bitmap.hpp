#ifndef BITMAP_H
#define BITMAP_H
#pragma once

#include <iostream>
#include <iomanip>
#include <vector>

	
class bitmap {
    friend class bitmapReader;

private:
    std::vector<std::vector<int> > _map;

protected:
    int iloscpol();

    int iloscpol(int type);

public:
    bitmap();

    ~bitmap();

    void display();

};
#endif