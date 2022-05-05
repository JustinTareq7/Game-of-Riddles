#include "player.h" 

void Player::set_score(int value){
    
    score += value; 
}
        
int Player::score_tracker(){
    
    return score; 
}
        
string Player::name_provider(){
    
    return name; 
}
        
void Player::set_name(string new_name){
    
    name = new_name; 
    
} 