#include "Animal.h";
#include "Cow.h";
#include "Sheep.h";
#include "Frisian.h";

using namespace std;

int main()
{
    //vector holding animal sounds
    vector<Animal*> container;
    Animal* aP = nullptr; //by default set pointer to null

    int loopNumber; //number of animals
    int animalChoice; //which animal
    
    cout << "How many animals would you like to hear? " << endl;
    while (true) {
        cin >> loopNumber;
        if (!cin) {
            cout << "Please write a valid integer" << endl;
            cin.clear(); //clear input
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); //telling cin there is no lmit to number of characters to ignore
            continue;
        }
        else break;
    }
    
    //loop for the amount of animals the user asked for
    cout << "Choose the animal you would like to hear:\n1. Cow     2. Sheep    3.Frisian" << endl;
    while(container.size() != loopNumber)
    {
        cin >> animalChoice; // so they can choose multiple animals
        if (animalChoice <= 3 && animalChoice >= 1)
        {
            if (animalChoice == 1) {
                aP = new Cow();
                container.push_back(aP);
                //cout << "moo moo motherfucker" << endl;
            }
            else if (animalChoice == 2) {
                aP = new Sheep();
                container.push_back(aP);
                //cout << "bah bah bitch" << endl;
            }
            else if (animalChoice == 3) {
                aP = new Frisian();
                container.push_back(aP);
                //cout << "black and white moo moo motherfucker" << endl;
            }
        }
        else {
            cout << "choose a valid number asswipe" << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); //telling cin there is no limit of chracters to ignore
            continue;
        }
    }


    //Print contents of container
    for (int a = 0; a < container.size(); a++) {
        container[a]->speak(); //-> as pointers have been used
    }
}