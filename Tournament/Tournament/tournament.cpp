//
//  Tournament.cpp
//  Tournament
//
//  Created by Florian Mueller on 02.01.12.
//  Copyright (c) 2012 MUBLASAFU. All rights reserved.
//

#include <iostream>
#include "tournament.h"

using namespace std;

// ------------------------------------------------------------
// Constructor / Destructor

Tournament::Tournament(int teams, int locations, enum_algo_t algorithmus){
    mAlgorithmus = algorithmus;
    mNmOfTeams = teams;
    mNmOfLocations = locations;
    
    mNmOfGames = (algorithmus == DOUBLE_ROUND_ROBIN) ? mNmOfTeams * (mNmOfTeams-1): (mNmOfTeams * (mNmOfTeams-1))/2;
    
    mGames = new std::list<Game *>;
    mTeams = new std::list<Team *>;
}

Tournament::~Tournament(){
    delete mGames; mGames = 0;
    delete mTeams; mTeams = 0;
}

// ------------------------------------------------------------
// Setter and Getter

int Tournament::GetNmOfGames(){
    return mNmOfGames;
}


// ------------------------------------------------------------
// Algorithms for generate the lists.

void Tournament::Generate(){
    if (mAlgorithmus == DOUBLE_ROUND_ROBIN) {
        GenerateDoubleRoundRobin();
    }else {
        GenerateRoundRobin();
    }
}

void Tournament::GenerateRoundRobin(){
    // FIXME: not implemented
}

void Tournament::GenerateDoubleRoundRobin(){
    int teamA = 0;
    int teamB = 0;
    int counter = 0;
    for (int i= 0; i<mNmOfGames; i++) {
        if (teamA == teamB) {
            teamB++;
        }
        if (counter >= mNmOfTeams-1) {
            teamA++;
            teamB=0;
            counter=0;
        }
        Game * game = new Game(teamA, teamB, 0);
        mGames->push_back(game);
        // TODO: Add the game to the list for every team.
        
        counter++;
        teamB++;
    }
}


// ------------------------------------------------------------
// Print functions

void Tournament::PrintSettings(){
    // Start message
    cout << "Tournament Generator starts with " << mNmOfTeams << " on " << mNmOfLocations << " locations:" << endl;
    cout << "Selected algorithmus: ";
    if (mAlgorithmus == 0) {
        cout << "Round Robin" << endl;
    }else
    {
        cout << "Double Round Robin" << endl;        
    }
    cout << "Number of games: " << mNmOfGames << endl;
}

void Tournament::PrintGamelist(){
    int round = 1;
    
    list<Game *>::iterator iter = mGames->begin();
    while (iter != mGames->end()) {
        Game * game = *iter;
        cout << "round " << round << ": ";
        cout << "team-" << game->GetTeamA() << " vs. team-" << game->GetTeamB() << endl;
        iter++; round++;
    }
}