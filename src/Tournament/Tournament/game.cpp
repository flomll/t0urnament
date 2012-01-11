//
//  Game.cpp
//  Tournament
//
//  Created by Florian Mueller on 02.01.12.
//  Copyright (c) 2012 MUBLASAFU. All rights reserved.
//

#include <iostream>
#include "game.h"

Game::Game(int teamA, int teamB, int location){
    mTeamA = teamA;
    mTeamB = teamB;
    mLocation = location;
    
    mPointsTeamA = 0;
    mPointsTeamB = 0;
}


int Game::GetPointsTeamA(){
    return mPointsTeamA;
}
int Game::GetPointsTeamB(){
    return mPointsTeamB;
}
int Game::GetTeamA(){
    return mTeamA;
}
int Game::GetTeamB(){
    return mTeamB;
}
int Game::GetLocation(){
    return mLocation;
}

void Game::SetPointsTeamA(int points){
    mPointsTeamA = points;
}
void Game::SetPointsTeamB(int points){
    mPointsTeamB = points;
}
void Game::SetLocation(int location){
    mLocation = location;
}
