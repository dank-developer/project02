#ifndef STADIUM_H
#define STADIUM_H

#include <QString>
#include "souvenirs.h"
#include <vector>

class stadium
{
public:
    //Constructor
    stadium();
    //Destructor
    ~stadium();

    //Accessors
    QString getStadiumName();
    QString getTeamName();
    QString getCity();
    QString getState();
    QString getPlayingSurface();
    int getStadiumNumber();
    //getDate()
    bool getVisited();


    //Mutators
    void setStadiumName(QString stadiumName);
    void setStadiumNumber(int number);
    void setTeamName(QString teamName);
    //void setDateOpened();
    void setPlayingSurface(QString grassType);
    void setCity(QString city);
    void setState(QString state);
    void setVisited(bool visited);
    //void resetTrip()

private:
    QString           stadiumName;
    QString           teamName;
    QString           city;
    QString           state;
    QString           grassType;
    int               stadiumNumber;
    vector<souvenirs> souvenirList;
    bool              visited;


};



#endif // STADIUM_H
