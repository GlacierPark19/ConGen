//Primary Text Handler
#include "./defines.h"

string returnConsoleLine(){
    //returns userInput on the console as lowercase text
    string data;

    //Pull the console line
    getline(std::cin, data);

    std::transform(data.begin(), data.end(), data.begin(),
    [](unsigned char c){ return std::tolower(c); });

    
    return data;
}



int currentStoryLine(){
    //returns the current line in the "story" file
    //as an integer

    

}
