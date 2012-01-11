//
//  main.cpp
//  Tournament
//
//  Created by Florian Mueller on 02.01.12.
//  Copyright (c) 2012 MUBLASAFU. All rights reserved.
//  This program generates a table for a tournament. You can select the number
//  of teams, number of locations and the algorithmus.
//
//  Alorightmus:
//  0 -> round robin
//  1 -> double round robin

#include <iostream>

#include "game.h"
#include "tournament.h"
#include "definitions.h"

using namespace std;

int main (int argc, const char * argv[])
{
    // Input configurations
    int const nmOfTeams = 6;
    int const nmOfLocations = 3;
    
    Tournament * tournament = new Tournament(nmOfTeams, nmOfLocations, DOUBLE_ROUND_ROBIN);

    // Print the settings on the console.
    tournament->PrintSettings();
    
    // Generate the game list by selected settings.
    tournament->Generate();
    
    tournament->PrintGamelist();
        
    // Clear all references
    delete tournament; tournament = 0;
}