// DynamicCollegeLegacyMode.h
// Header file for the Dynamic College Legacy Mode feature
// Author: Aashwit
// Date: 2025-11-11

#ifndef DYNAMIC_COLLEGE_LEGACY_MODE_H
#define DYNAMIC_COLLEGE_LEGACY_MODE_H

#include <string>
#include <vector>
#include <map>
using namespace std;

// Forward declarations
class Team;
class Player;
class Coach;
class Facility;
class Rivalry;
class Match;
class HallOfFame;
class LegacyTracker;
class Recruit;

// ==========================================================
// CLASS: CollegeProgram
// ==========================================================
class CollegeProgram {
private:
    string name;
    int reputationScore;
    int legacyPoints;
    double funding;
    double fanLoyalty;

    vector<Team*> teams;
    vector<Rivalry*> rivalries;
    vector<Facility*> facilities;

public:
    CollegeProgram(string name);

    void upgradeFacility(Facility* facility);
    void scheduleMatch(Team* opponent);
    void recruitPlayer(Recruit* recruit);
    void calculateReputation();

    // Getters
    string getName() const;
    int getReputationScore() const;
    double getFunding() const;

    // Setters
    void setFunding(double newFunding);
};

// ==========================================================
// CLASS: Team
// ==========================================================
class Team {
private:
    string teamName;
    int overallRating;
    string playStyle;
    string winLossRecord;

    vector<Player*> players;
    Coach* coach;

public:
    Team(string name);

    void trainPlayers();
    void playMatch(Match* match);
    void updateStats();

    void addPlayer(Player* player);
    void setCoach(Coach* c);
};

// ==========================================================
// CLASS: Player
// ==========================================================
class Player {
private:
    string playerName;
    string position;
    int skillLevel;
    int potential;
    int legacyFamilyID;

public:
    Player(string name, string pos);

    void improveSkill();
    void transfer(CollegeProgram* newProgram);
    void graduate();

    int getSkillLevel() const;
    void setSkillLevel(int level);
};

// ==========================================================
// CLASS: Coach
// ==========================================================
class Coach {
private:
    string name;
    int experienceLevel;
    string coachingStyle;
    vector<string> awards;

public:
    Coach(string name);

    void planStrategy();
    void recruit(Recruit* recruit);
    void evaluatePerformance();
};

// ==========================================================
// CLASS: Recruit
// ==========================================================
class Recruit {
private:
    int recruitID;
    string name;
    int rating;
    double interestLevel;
    bool legacyConnection;
    string chosenSchool;

public:
    Recruit(int id, string name);

    void evaluateOffer(CollegeProgram* program);
    void commit();
    void improveRating();

    int getRating() const;
};

// ==========================================================
// CLASS: Facility
// ==========================================================
class Facility {
private:
    string facilityType;
    int level;
    double maintenanceCost;

public:
    Facility(string type);

    void upgrade();
    double calculateBonus();
};

// ==========================================================
// CLASS: Rivalry
// ==========================================================
class Rivalry {
private:
    string rivalSchoolName;
    int intensityLevel;
    string lastMatchResult;
    vector<string> history;

public:
    Rivalry(string name);

    void updateIntensity();
    void recordMatchOutcome(string result);
};

// ==========================================================
// CLASS: Match
// ==========================================================
class Match {
private:
    int matchID;
    string opponent;
    string date;
    string result;
    string score;

public:
    Match(int id, string opp);

    void simulate();
    void recordStats();
    void updateRankings();
};

// ==========================================================
// CLASS: HallOfFame
// ==========================================================
class HallOfFame {
private:
    vector<string> entries;
    int yearEstablished;

public:
    HallOfFame(int year);

    void addEntry(string entry);
    void viewHistory();
    void displayStats();
};

// ==========================================================
// CLASS: LegacyTracker
// ==========================================================
class LegacyTracker {
private:
    int totalLegacyPoints;
    map<string, int> milestoneRecords;
    vector<int> generationalConnections;

public:
    LegacyTracker();

    void calculateLegacyGrowth();
    void unlockMilestone(string milestone);
    void displayProgress();
};

#endif // DYNAMIC_COLLEGE_LEGACY_MODE_H
