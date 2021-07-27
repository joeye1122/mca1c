#include <iostream>
#include <list>
#include <fstream>
#include <limits>
#include <vector>




using namespace std; 

void runMenu();
int getUserInput();
void displayinfo(std::string filename);
void createLists(string storyConnectors, string storyQuestions);

std::vector<std::string> storyConnectorsCollection;
list<string> storyQuestionsCollection;

int main(){
    cout<< "this is the main function"<<endl;
    createLists("storyConnectors.txt", "storyQuestions.txt");
}

void createLists(string storyConnectors, string storyQuestions){
    string text;
    ifstream fileReader(storyConnectors);
    string s;

    while(getline(fileReader, text)){
        //cout << text << endl;
        text.erase(text.length()-1);
        s = s + text;
    }
    cout<< s <<"\n\n\n\n";

    list<char> c;
    for(int i =0; i <s.length(); i++){
        if(s[i] != ';'){
            c.push_back(s[i]);
        }else{
            string str(c.begin(),c.end());
            storyConnectorsCollection.push_back(str);
            c.clear();

        }
    }

// for( int i =0; i < storyConnectorsCollection.size(); i ++){
//     cout<<storyConnectorsCollection[i];
// }
    cout<<storyConnectorsCollection[0];
    
}

void save(string filename){
    ofstream MyFile("filename.txt");
    string s;
    MyFile << s;
    MyFile.close(); 
}
