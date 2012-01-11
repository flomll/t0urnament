//
//  Tournament.h
//  Tournament
//
//  Created by Florian Mueller on 02.01.12.
//  Copyright (c) 2012 MUBLASAFU. All rights reserved.
//

#ifndef Tournament_Tournament_h
#define Tournament_Tournament_h

#include <list>
#include "definitions.h"
#include "game.h"
#include "team.h"

class Tournament {
private:
    /// Number of teams
    int mNmOfTeams;
    /// Number of locations
    int mNmOfLocations;
    /// Selected algorithmus to generate
    enum_algo_t mAlgorithmus;
    
    /// Number of games. It is defined by the selected algorithmus.
    int mNmOfGames;
    /// List of games. It is defined by the selected algorithmus.
    std::list<Game *> * mGames;
    
    /// List of teams.
    std::list<Team *> * mTeams;
    
    
    
    /*! \brief Default constructor.
     * It is not allowed to declare a tournament without initialisation.
     */
    Tournament();
    
    /*! \brief Generate game list for round robin.
     * This means any team plays vs. any other team for one time.
     */
    void GenerateRoundRobin();
    
    /*! \brief Generate game list for double round robin.
     * Any team plays against any other team for two times.
     */
    void GenerateDoubleRoundRobin();
    
public:
    
    // ------------------------------------------------------------
    // Constructor / Destructor
    
    /*! \brief Constructor
     */
    Tournament(int teams, int locations, enum_algo_t algorithmus);
    
    /*! \brief Destructor
     */
    ~Tournament();
    
    
    
    // ------------------------------------------------------------
    // Algorithms to generate the lists.
    /*! \brief 
     */
    void Generate();
    
    
    
    // ------------------------------------------------------------
    // Setter a. Getter functions
    
    /*! \brief Getter returns the number of games.
     * @return the number of games.
     */
    int GetNmOfGames();
    
    
    
    // ------------------------------------------------------------
    // Print functions
    
    /*! \brief 
     */
    void PrintSettings(); // TODO

    /*! \brief 
     */
    void PrintLocationsDetails(); // TODO
    
    /*! \brief 
     */
    void PrintTeamsDetails(); // TODO
    
    /*! \brief 
     */
    void PrintTeamDetails(int team); // TODO
    
    /*! \brief
     */
    void PrintGamelist();
};

#endif
