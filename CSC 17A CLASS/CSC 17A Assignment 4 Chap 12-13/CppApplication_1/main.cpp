/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Kevin Ramos
 *CSC 17A
 * Dr Mark Lehr
 * Created on July 10, 2018, 3:28 AM
 * THE PURPOSE OF THIS PROJECT IS TO SIMULATE A POKEMON BATTLE FROM THE TRADING 
 * CARD GAME
 * 
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <fstream>
#include <ctime>
#include <vector>
#include <cstring>
#include <string>

using namespace std;

//Global Variables
 const int num=3; //the amount of attacks each pokemon will have(mostly in the
 //(global variables because it allows the structure to read in the variable)
 
//Structure for the program 

 struct pokemon { 
   string name;//name of the pokemon
   string attk[num];//the attack of the pokemon
   float health;//the health of the pokemon
   string type; // the type of the pokemon
   int card; //the amount of energy cards that the player has
};

//Function Prototypes
void pause (int );//this will pause the game for a certain amount of time
void intro (char [], char [], const int );
//the purpose this function is to show do all the introductions^^^^^^^
void save (pokemon *, pokemon *, char [], fstream &, ofstream &);
//this function will save the game ^^^^^^^^^^^^
void screen (pokemon *, pokemon *, char [], char []);//runs the screen

pokemon * xvalues (pokemon *);//assigns the cards to the rivals pokemon
pokemon * yvalues (pokemon *); //assigns the value to your pokemons
void team (pokemon *);//this function will let the player see their team
pokemon * overview (pokemon *, pokemon *, char [], char []);//this part of the game 
//will run the switch statement


//does the damage for the pokemon

int menu (int );//runs the choice for the game
void attack (pokemon *, pokemon *);
void check (pokemon *); //runs the checks for the pokemons


int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast <unsigned int>(time(0)));
    
    //Declare the Variables here
    const int MM=300;//this is the maximum for the char array that will be used
    int amount=6;//six poke mon are in total
    char plyr1[MM];//The user will enter the value for the first player
    char rival[MM];//The rivals name for the game
    char type;  //The type choice that will be placed in the game
    ofstream out; //Will copy data in
    fstream in;    //will read the data in
    pokemon *s=nullptr; //sets the pointer to null
    s=new pokemon [amount];//dynamically allocated the value to 
    //become equal to 6
    //THE S POINTER WILL KEEP TRACK OF THE RIVALS POKEMON, AND THE V POINTER WILL
    //KEEP TRACK OF THE PLAYERS POKEMON
    pokemon *v=nullptr;
    v=new pokemon [amount];//the players pokemon
   
   //Display the inputs and outputs here
    xvalues (s); //will set the parameters for the rivals pokemon
    yvalues (v); //will set the parameters for the players pokemon
    intro (plyr1, rival, MM);//will input the name and introduction
    overview (s, v,rival, plyr1);//this function will run the overview function
    //until the battle is over
    save (s,v,plyr1, in, out);//this function will save the game  
    
    //Delete Dynamically allocated arrays here
    delete [] s;
    s=nullptr;
    delete []v;
    v=nullptr;
    
    return 0;
}
//The purpose of this function is to save the game when the battle is done
void save (pokemon* s, pokemon *v, char plyr1[], fstream& in, ofstream & out){
    int choice; //the player will choose if they want to save the game
    in.open("Mars.txt", ios::in|ios::binary);
    out.open("Mars.txt");
    cout << "Would you like to save the game?" << endl;
    cout << "1)Yes\n2)No" << endl;
    cin >> choice;
    while (choice<1||choice>2){
        cout << "Invalid option chosen, please try again: ";
        cin >> choice;
    }
        //This line will save the game 
        if (choice==1){
            cout << "Saving Game, Do not turn off the power" << endl;
            out << "Player: " << plyr1 << endl;
            for (int x=0;x<3;x++){
                out << x+1 << ": " << v[x].name << " HP: " << v[x].health
                        << " Type: " << v[x].type << endl;
                for (int y=0;y<3;y++){
                    out << v[x].attk[y] << " " << endl;
                }
            }
             cout << "The game has been saved " << endl;
        }
        else {
            cout << "Game has not been saved" << endl;
        }
        
        pause (2);
       
        //close the function
        in.close();
        out.close();
    
}
//The purpose of this function is to process all the outputs involving introducing
//the game
void intro(char player[], char rival [],const int max){
    //The purpose of this part of the function is to simply run the intro
    //dialogue
    cout << "Welcome to the World of Pokemon " << endl;
    cout << "\nThis world is inhabited with creatures called Pokemon " << endl;
    cout << "Some use them as pets, and others use them to fight " << endl;
    cout << "\nFirst, What is your name?: ";
            cin.getline (player, max);
    cout << "What is the name of your childhood rival?: ";
            cin.getline (rival, max);
    pause (2);
    cout << rival << ": 'Hey!, I was looking foward to seeing you " <<player 
            <<  "'" << endl;
    pause (2);
    cout << "'My rival should be strong to keep me sharp!, while working'" <<endl;
    pause (2);
    cout << "'on POKeDEX, I looked all over for powerful Pokemon, not' " << endl;
    pause(2);
    cout << "'Not only that, I've assembled teams that would beat any Pokemon'"
            << endl;
    pause(2);
    cout << "'type' " << endl;
    pause(2);
    cout << "'Do you know what the means? Well, I'll tell you" << endl;
    pause (2);
    cout << "'I am the most powerful trainer in the " 
            << "world'" << endl;
    pause(2);
    cout << "____________________________________________" << endl;
    cout << "You have been challanged by Champion " << rival << endl;
    cout << "____________________________________________" << endl;
    pause (3);
   
    
}

//the purpose of this function is to pause the game for the amount of time that 
//is set
void pause(int amount){
    int standby=time(NULL) + amount;
    while (standby>time(NULL));
}
//this function will set the values for the players pokemon 
pokemon * yvalues (pokemon *v){
    v[0].name="Pikachu";
    v[0].attk[0]="Thunderbolt";
    v[0].attk[1]="Body Slam";
    v[0].attk[2]="Thunder";
    v[0].health=80;
    v[0].type="Thunder";
    
    v[1].name="Charizard";
    v[1].attk[0]="Flamethrower";
    v[1].attk[1]="Earthquake";
    v[1].attk[2]="Wing Attack";
    v[1].health=130;
    v[1].type="Fire/Flying";
    
    v[2].name= "Venusaur";
    v[2].attk[0]="Razor Leaf";
    v[2].attk[1]="Sludge Bomb";
    v[2].attk[2]="Synthesis";
    v[2].health=150;
    v[2].type="Grass/Poison";
}

//This function will set the parameters for the pokemons
pokemon * xvalues (pokemon * s){
    s[0].name="Arcanine"; //the name of the first pokemon
    s[0].attk[0]="Flamethrower";//attack of the pokemon
    s[0].attk[1]="Crunch";//attack of the pokemon
    s[0].attk[2]="Fire Blast";//attack of the pokemon
    s[0].health=110;// health of the pokemon
    s[0].type="Fire";//type of the pokemon
    
    //This part will cover the rivals second pokemon
    s[1].name="Alakazam";//the name of the second pokemon
    s[1].attk[0]="Psychic";//the first attack of pokemon 2
    s[1].attk[1]="Recover";//the second attack of the pokemon 2
    s[1].attk[2]="Shadow Ball";//the third attack of pokemon 2
    s[1].health=100;//The health for the 2nd pokemon
    s[1].type="Psychic";//the type of the pokemon
   
    s[2].name="Blastoise";//name of the rivals last pokemon
    s[2].attk[0]="Bubble Beam";//first move for the pokemon
    s[2].attk[1]="Hydro Pump";//2nd move for the pokemon
    s[2].attk[2]="Ice Beam";//3rd move for the pokemon
    s[2].health=150;//hp of the pokemon
    s[2].type="Water";//the type of this pokemon
 
}
//the purpose of this function is to run the choice in the menu
int menu (int x){
    int choice;
    cout << endl;
    cout << "Press 1 to Attack" << endl;
    cout << "Press 2 to Check your Pokemon team" << endl;
    cout << "Press 3 to Run " << endl;
    cin >> choice;
     while (choice>3||choice<1){
        cout << "Invalid Attack, please choose again: " ;
        cin >> choice;
    }
    
    return choice;
}
//The purpose of this function is to run the attack function for the choice
void attack (pokemon * v, pokemon *s){
    int choice;
    cout << "Which Attack would you like to use : " << endl;
    for (int x=0;x<3;x++){
        cout << x+1 << ": " << v[0].attk[x] << endl;
    }
    
    cin >> choice;
    while (choice>3||choice<1){
        cout << "Invalid Attack, please choose again: " ;
        cin >> choice;
    }
  
}
//the purpose of this function is to run the check of the pokemon
void check (pokemon * v){
    string choice;
    cout << endl;
    for (int x=0;x<3;++x){
        cout << x+1 << ": " << v[x].name << " HP: " << v[x].health << " Type: " 
                << v[x].type << endl;
    }
    cout << "\nInsert any button followed by Enter to continue: ";
    cin >> choice;
}

//The purpose of this game is to run the overhead view of the game until the game 
//is over
pokemon * overview (pokemon * s, pokemon *v, char rival [], char plyr1[]){
    int option;//runs the options for the player
    int choice;//the player will choose the options
   
    while (option!=3){
        screen (s, v, rival, plyr1);
        option=menu(choice);
        switch (option){
            case 1: {
                attack (v,s);//will run the attacks for the game
                break;
            }
            case 2:{
                check (v);//Checks your pokemon team
                break;
            }
            case 3:{
                cout << "Got away Safely, Game Over " << endl;
                break;
            }
        }
    }
    
}
void hurt(pokemon * v, pokemon *s){
    
}
void screen (pokemon * s, pokemon * v, char rival[], char plyr1[]){
   
    
    cout << "\nChampion: " << rival << endl;
    cout << "Pokemon: " << s[0].name << endl;
    cout << "     HP: " << s[0].health << endl;
    cout << "   Type: " << s[0].type << endl;
    cout << "------------------"<< endl;
    cout << "Player:  " << plyr1 << endl;
    cout << "Pokemon: " << v[0].name << endl;
    cout << "     HP: " << v[0].health << endl;
    cout << "   Type: " << v[0].type << endl;
    cout << endl;
}