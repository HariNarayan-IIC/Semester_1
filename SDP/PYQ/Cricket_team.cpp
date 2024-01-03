//WAP to represent a cricket team. This class contains information about cricketers like
//their name, age, total_runs, avg_run, type(batsman, baller and allrounder), and wicket
//taken. Write a constructor to assign the initail values. Write memeber functions to get
//and display the cricketer's information. Make appropriate assumptions to run the program.

#include <iostream>
#include <string>
using namespace std;

enum type{
    Batsman,
    Baller,
    All_rounder
};

class cricketer{
    public:
    string name;
    int age;
    int total_runs;
    double avg_run;
    type Player_type;
    int wicket_taken;

    public:
    //constructor
    cricketer(){
        const string Name= "Unknown";
        this->name= Name;
        age= -1;
        total_runs= -1;
        avg_run= -1;
        Player_type= All_rounder;
        wicket_taken= -1;
    }

    cricketer(const string& playerName, int playerAge, int playerRuns,
              double playerAvgRun, type playerType, int playerWickets){
                this->name=playerName; 
                this->age= playerAge ;
                this->total_runs= playerRuns;
                this->avg_run= playerAvgRun;
                this->Player_type= playerType; 
                this->wicket_taken= playerWickets;
              }

    // Getter functions
    string getName() const {
        return name;
    }

    int getAge() const {
        return age;
    }

    int getTotalRuns() const {
        return total_runs;
    }

    double getAvgRun() const {
        return avg_run;
    }

    type getType() const {
        return Player_type;
    }

    int getWicketsTaken() const {
        return wicket_taken;
    }

    // Display cricketer's information
    void displayInfo() const {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Total Runs: " << total_runs << endl;
        cout << "Average Run: " << avg_run << endl;
        switch (Player_type){
            case Batsman:
                cout << "Type: " << "Batsman" << endl;
                break;
            
            case Baller:
                cout << "Type: " << "Baller" << endl;
                break;

            case All_rounder:
                cout << "Type: " << "All Rounder" << endl;
                break;
            default:
                break;
        }
        cout << "Wickets Taken: " << wicket_taken << endl;
        cout << endl;
    }
};

class Cricket_team{
    cricketer* team;
    int captain;
    string teamName;

    public:
    //Constructor
    Cricket_team(const string &teamName){
        team= new cricketer[10];
        captain= 0;
        this->teamName= teamName;
    }

    //Destructor
    ~Cricket_team(){
        delete[] team;
    }

    //Methods
    void insertPlayer(int Player_number, cricketer Player){
        this->team[Player_number-1]= Player;
    }

    void selectCaptain(int Player_number){
        this->captain= Player_number-1;
    }

    void displayTeam(){
        cout<< endl<< "Team name: "<< this->teamName<< endl;
        cout<< endl<< "Team captain: "<< this->team[captain].getName() << endl;
        for (int i= 0; i< 10; i++){
            cout<< "Player "<< i+1<< ":"<< endl;
            this->team[i].displayInfo();
        }
    }
};

int main(){
    cricketer player1("Dhoni", 45, 2430, 155, Batsman, 34);
    cricketer player2("Virat", 35, 2930, 200, Batsman, 22);
    cricketer player3("Sachin", 55, 3430, 255, All_rounder, 54);
    cricketer player4("Sami", 27, 2430, 155, Baller, 64);
    cricketer player5("Sehwag", 45, 2430, 155, Batsman, 14);
    cricketer player6("Yuvraj", 45, 2430, 155, Batsman, 34);
    cricketer player7("Jadeja", 45, 2430, 155, All_rounder, 52);
    cricketer player8("Singh", 45, 2430, 155, Baller, 34);
    cricketer player9("Gambir", 45, 2430, 155, Batsman, 34);
    cricketer player10("Kapil", 70, 2430, 155, Batsman, 34);

    Cricket_team India("India");
    India.insertPlayer(1, player1);
    India.insertPlayer(2, player2);
    India.insertPlayer(3, player3);
    India.insertPlayer(4, player4);
    India.insertPlayer(5, player5);
    India.insertPlayer(6, player6);
    India.insertPlayer(7, player7);
    India.insertPlayer(8, player8);
    India.insertPlayer(9, player9);
    India.insertPlayer(10, player10);

    India.selectCaptain(3);

    India.displayTeam();
    
    return 0;
}