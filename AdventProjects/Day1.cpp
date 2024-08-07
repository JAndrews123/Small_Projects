#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;

#define ASCII_TO_DEC 48

int main(){
    
    fstream Data;
    vector<string> fileWords;
    string word;
    int lines = 0;
    int numsToAdd = 0;
    int totalAmount = 0;
    int current = 0;

    Data.open("Day1Data.txt", ios::in);
    while(getline(Data, word)){
        fileWords.push_back(word);
        lines++;
    }
    Data.close();

    while(lines > 0){
        word = fileWords[lines];

        for (int i = 0; i < word.size(); i++){
            
            if (word[i] isnumber){
                
                if (current = 0){
                    numsToAdd = word[i] * 10;
                }
                current = word[i] */needs to be converted to binary num/*;
            }
        }
        totalAmount += (numsToAdd + current);
        current = 0;
    }
        cout << totalAmount << endl;
    }
}
