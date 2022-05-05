#ifndef RIDDLES_H_

#define RIDDLES_H_ 

#include <iostream> 

using namespace std;

string riddle_one = "What belongs to you, but others will use it?"; 
string answer_one = "Your name"; 

string riddle_two = "What gets harder to catch the faster you run?"; 
string answer_two = "Your breath"; 

string riddle_three = "I am first on earth and second in heaven and appear twice per week. What am I?"; 
string answer_three = "The letter E"; 

string riddle_four = "I sit in the corner while traveling around the world. What am I?"; 
string answer_four = "Postage stamp"; 

string riddle_five = "I am unpredictable, but you still rely on me. My installments give you the experience of life for free. I offer no refunds, returns, or exchanges. What am I?"; 
string answer_five = "Time"; 

string riddle_six = "I can fill a room with just one heart. Others can have me, but I can't be shared. What am I?"; 
string answer_six = "Loneliness"; 

string riddle_seven = "I can be a member of a group but can never blend in. What am I?"; 
string answer_seven = "An individual"; 

string riddle_eight = "I feel your every move. I know you're every thought. I've been with you from birth and I will be with you at the end. What am I?"; 
string answer_eight = "A reflection"; 

string final_riddle = "What won’t run for long without winding?";
string answer_nine = "A river";

string riddles[8] = {riddle_one,riddle_two,riddle_three,riddle_four,riddle_five,riddle_six,riddle_seven,riddle_eight}; 

string answers[8] = {answer_one,answer_two,answer_three,answer_four,answer_five,answer_six,answer_seven,answer_eight}; 

int provide_riddle(int index){
    cout << riddles[index] << endl; 
    string response = ""; 
    getline(cin,response); 
    if(response == answers[index]){
        return 10; 
    }else{
        printf("I'm sorry. But the answer is incorrect\n"); 
        cout << "The answer is " << answers[index] << endl;
        return 0; 
    }
}

#endif 

