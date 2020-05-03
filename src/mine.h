#ifndef MINE_H
#define MINE_H

#include <vector>
#include "SDL.h"

class Mine {
    private:
        SDL_Point location;
    public:
        Mine(int x, int y) : location(SDL_Point {x, y}) {}
        bool operator<(const Mine& rhs) const
        {
            return location.x < rhs.GetLocation().x || location.y < rhs.GetLocation().y;
        }

        SDL_Point GetLocation() const { return location; };    
};

#endif