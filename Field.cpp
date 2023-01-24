#include "Field.hpp"
#include "Parser.hpp"

#include <iostream>
using std::cout;
using std::endl;

Field::Field(Parser& parser) : cow(parser.getCow()), cloud(parser.getMessage(), parser.getCloud()), fill(parser.getFill()), message(parser.getMessage()) 
{
    
}

Field::~Field() {}

void Field::print()
{
    int x, y;
    x = cow.getWidth() + cloud.getWidth() / 2 + 10;
    y = cow.getHeight() + cloud.getHeight() + 2;
    
    for (int i = 0; i < x; i++)
        cout << fill;
    cout << endl;
    for (int i = 0; i < x; i++)
        cout << fill;

    cloud.print(5, fill, x);
    cow.print(5, fill, x);

    for (int i = 0; i < x; i++)
        cout << fill;
    cout << endl;
    for (int i = 0; i < x; i++)
        cout << fill;
}
