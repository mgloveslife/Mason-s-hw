//
// Created by 10373 on 2022/12/2
#include <iostream>

class Rectangle
{
public:
    Rectangle(int width, int height);
    ~Rectangle(){}

    void drawShape(int width = 10, int height = 10) const;

private:
    int width;
    int height;
};

Rectangle::Rectangle(int newWidth, int newHeight)
{
    width = newWidth;
    height = newHeight;
}

void Rectangle::drawShape(int width, int height) const
{
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            std::cout << "?";
        }
        std::cout << "\n";
    }
}

int main()
{
    int x;
    int y;

    Rectangle box(x, y);
    std::cout << "function of drawShape()(10x10): \n";
    box.drawShape();


    printf("please enter the width and height of rectangle:");
    std::cin >>x>>y;
    box.drawShape(x, y);
    return 0;
}

