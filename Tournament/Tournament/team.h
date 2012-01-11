//
//  Team.h
//  Tournament
//
//  Created by Florian Mueller on 02.01.12.
//  Copyright (c) 2012 MUBLASAFU. All rights reserved.
//

#ifndef Tournament_Team_h
#define Tournament_Team_h

#include <iostream>
#include <list>
#include <string.h>
#include "game.h"

class Team {
private:
    int mNumber;
    std::string name;
    
    std::list<Game *> * mGames;
    
public:
    
    Team(int number, std::string name);
    
    ~Team();
    
    void PushGame(Game * game);
    
};

#endif
