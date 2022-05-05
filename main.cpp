#include "player.h" 

#include "riddles.h" 

int main(){
    
    Player player_one; 
    
    Player player_two; 
    
    string new_name = ""; 
    
    string first_person = ""; 
    
    string second_person = ""; 
    
    int first_score = 0; 
    
    int second_score = 0; 
    
    string final_response = ""; 
    
    cout << "Player One, enter your name \n";
    getline(cin,new_name); 
    player_one.set_name(new_name); 
    first_person = player_one.name_provider(); 
    
    cout << "Player Two, enter your name \n";
    getline(cin,new_name); 
    player_two.set_name(new_name); 
    second_person = player_two.name_provider(); 
    
    cout << first_person << " will answer 4 riddles and " << second_person << " will answer 4 riddles after." << endl;
    
    int index = -1; 
    
    cout << first_person << " goes first \n" << endl; 
    
    while(index != 3){
        int value = 0; 
        index += 1; 
        value = provide_riddle(index); 
        player_one.set_score(value); 
    }
    
    cout << "\n" << endl; 
    cout << second_person << " goes second \n" << endl; 

    while(index != 7){
        int value = 0; 
        index += 1; 
        value = provide_riddle(index); 
        player_two.set_score(value); 
    }
    
  
    cout << "This is the final riddle. Whoever solves it gets an additional 9000 points" << endl;
    
    cout << first_person << " goes first \n" << endl; 
    
    cout << final_riddle << "\n" << endl; 
    
    getline(cin,final_response);
    if(answer_nine == final_response){
        player_one.set_score(9000); 
    }else{
        cout << second_person << "'s turn\n" << endl; 
        getline(cin,final_response);
        if(answer_nine == final_response){
            player_two.set_score(9000);
        }else{
            printf("I'm sorry. But the answer is incorrect\n"); 
            cout << "The answer is " << answer_nine << endl;
        }
    }
    
    first_score = player_one.score_tracker(); 
    
    second_score = player_two.score_tracker(); 
    
    cout << first_person << " has a score of : " << first_score << endl; 
    
    cout << second_person << " has a score of : " << second_score  << endl; 

    if(first_score > second_score){
        cout << first_person << " wins! Congratulations!" << endl;
    }else if(second_score > first_score){
        cout << second_person << " wins! Congratulations!" << endl; 
    }
    
    if (first_score == second_score){
        cout << "You both win! Congratulations" << endl; 
    }

    return 0;
}
