#include <iostream>
#include <limits>
#include <fstream>
#include <list>


using namespace std;
int runMenu();
int getUserInput();
void displayinfo(string filename);
void createLists(string filename,string filename2);

int main(){
    //std::cout<<"this is the main function\n";
    //displayinfo("StoryAbout.txt");
    createLists("storyConnectors.txt", "storyQuestions.txt");
    return 0;

}

int runMenu(){
    std::cout << "this is the menu";
    return getUserInput();
    // switch(getUserInput()){
    //     case 1:
    //     std::cout <<"this is case 1";
    //     break;
        

    // }
}

int getUserInput(){
int i;
    while (true) 
        {
            cout << "Please enter an integer : "; cin >> i;
                    if(!cin)
                    {
                cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                        cout << "Invalid integer!!! Please try again\n\n";
                        continue;
                }
                else break;
        }
        return i;
}

void displayinfo(string filename){
    string myText;
    ifstream MyReadFile(filename);
    while (getline(MyReadFile, myText)) {
        cout<< myText<< "\n";;
    }
}


list<string> createLists(string filename){
    string text;
    ifstream myfile(filename);
    while(getline(myfile, text)){
        cout<<text;
    }
}
