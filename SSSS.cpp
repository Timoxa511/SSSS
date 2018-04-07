//v0.0
#include <windows.h>
#include <assert.h>
#include <sfml/graphics.hpp>
#include "../sfml_gui/AlibOperators.hpp"
//SUPER SPRITE SHEET SHRINKAGE!!!!

//croping from the right corner const
//drawing in a line, from a line/no rows/
//TODO scaling, drawing, improve


void draw (...);
    {
    for (int i = 0; i < nFrames; i++)
        {
        newFrame.setPosition (Vector (newFrameSize.x * i, newFrameSize));
        newFrame.setTextureRect (sf::IntRect(frameSize.x*i, frameSize.y, newFrameSize.x, newFrameSize.y));
        win.draw(newFrame);
        win.display();
        }
    }

int main ()
    {
    std::string fileName ("cat15.png");
    Vector textureSize (1024, 256);
    Vector nFrames (4, 1);
    Vector newFrameSize (128, 128);

    Vector frameSize = textureSize / nFrames;

    sf::RenderWindow win (sf::VideoMode (1000, 800), "win");

    sf::Texture texture;
    texture.loadFromFile(fileName);

    sf::Sprite newFrame (texture);


    while (win.isOpen() && !GetAsyncKeyState(VK_SPACE))
        {
        draw(...);
        sf::Event event;
        while (win.pollEvent (event)) if (event.type == sf::Event::Closed) win.close();


        }
    }
