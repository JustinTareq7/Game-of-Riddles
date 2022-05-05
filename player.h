#ifndef PLAYER_H_ 

#define PLAYER_H_ 

#include <iostream>

using namespace std;

class Player{ 
    
    private:
    
        int score = 0; 
        
        string name;
        
    public:
    
        void set_score(int value); 
        
        int score_tracker(); 
        
        string name_provider(); 
        
        void set_name(string new_name); 
 
};

#endif 