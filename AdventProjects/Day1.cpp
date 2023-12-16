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
    int numsToAdd;
    int totalAmount = 0;
    vector<int> numPerWord;

    Data.open("Day1Data.txt", ios::in);
    while(getline(Data, word)){
        fileWords.push_back(word);
        lines++;
    }
    Data.close();

    for(int i = 0; i < lines; i++){
        word = fileWords[i];
        for(int j = 0; j < word.size(); j++){
            if(word[j] < 58 && word[j] > 47){
                numPerWord.push_back((int) word[j] - ASCII_TO_DEC);
            }
        }
        for(int j = 0; j < numPerWord.size(); j++){
            if(j == 0 && numPerWord.size() > 1){
                numsToAdd = numPerWord[j]*10;
            } else if (j == 0){
                numsToAdd = numPerWord[j];
            } else if (j == numPerWord.size()-1){
                numsToAdd += numPerWord[j];
            }
        }
        totalAmount += numsToAdd;
        numPerWord.clear();
        cout << totalAmount << endl;
    }
}
