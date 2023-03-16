#include <fstream>
#include <vector>
using namespace std;

class MySimulator {
public:
    char** readHouseFile(char* fileName
    ){
        //read file into string
        ifstream file(fileName);
        string str((istreambuf_iterator<char>(file)),istreambuf_iterator<char>());

        //erase first line from string
        int newLineIndex = str.find('\n');
        str.erase(0, newLineIndex + 1);

        //save max steps and erase from string
        newLineIndex = str.find('\n');
        string maxStepsString = str.substr(0,newLineIndex);
        str.erase(0, newLineIndex + 1);
        int maxSteps = stoi(maxStepsString.substr(maxStepsString.find('=') + 1,maxStepsString.size()));

        //save max steps and erase from string
        newLineIndex = str.find('\n');
        string maxBatteryString = str.substr(0,newLineIndex);
        str.erase(0, newLineIndex + 1);
        int maxBattery = stoi(maxBatteryString.substr(maxBatteryString.find('=') + 1,maxBatteryString.size()));

        //save rows and erase from string
        newLineIndex = str.find('\n');
        string rowsString = str.substr(0,newLineIndex);
        str.erase(0, newLineIndex + 1);
        int rows = stoi(rowsString.substr(rowsString.find('=') + 1,rowsString.size()));

        //save columns and erase from string
        newLineIndex = str.find('\n');
        string colsString = str.substr(0,newLineIndex);
        str.erase(0, newLineIndex + 1);
        int cols = stoi(colsString.substr(colsString.find('=') + 1,colsString.size()));

        string line;
        vector<string> house;
        for (int i=0; i < rows; i++){
            newLineIndex = str.find('\n');
            line = str.substr(0,newLineIndex);
            str.erase(0, newLineIndex + 1);
            house.push_back(line);
        }

        for (int i=0; i < rows; i++){
            cout << house.at(i) << endl;
        }

        file.close();
    }
};