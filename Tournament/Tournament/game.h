//
//  Game.h
//  Tournament
//
//  Created by Florian Mueller on 02.01.12.
//  Copyright (c) 2012 MUBLASAFU. All rights reserved.
//

#ifndef Tournament_Game_h
#define Tournament_Game_h

#include "definitions.h"

class Game {
private:
    int mPointsTeamA;
    int mPointsTeamB;
    int mTeamA;
    int mTeamB;
    int mLocation;
    
public:
    Game(int teamA, int teamB, int location);
    
    int GetPointsTeamA();
    int GetPointsTeamB();
    int GetTeamA();
    int GetTeamB();
    int GetLocation();

    void SetPointsTeamA(int points);
    void SetPointsTeamB(int points);
    void SetLocation(int locations);
};

#endif
