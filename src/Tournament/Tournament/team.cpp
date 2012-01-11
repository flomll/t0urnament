//
//  Team.cpp
//  Tournament
//
//  Created by Florian Mueller on 02.01.12.
//  Copyright (c) 2012 MUBLASAFU. All rights reserved.
//

#include <iostream>
#include "team.h"

using namespace std;

Team::Team(int number, string name){
    mGames = new list<Game *>;
}

Team::~Team(){
    delete mGames; mGames = 0;
}