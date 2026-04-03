#include <iostream>
#include <fstream>
#include <vector>

inline int MainMenu(int solved, int needed_solves){
    int user_choice;
    std::cout << "WELCOEM TO THE MAIN MENU\n";
    std::cout << "Du har " << solved << " out of " << needed_solves << " som trengs for en ny fugl.\n";
    std::cout << "1. Display collection\n";
    std::cout << "2. Løys et problem\n";
    std::cout << "3. Fang ein fugl (MINST 10 LØYSTE OPPGAVER)\n";
    std::cout << "4. Utstopp et fryst dyr\n";
    std::cout << "5. HADE BRA\n";
    std::cin >> user_choice;
    switch(user_choice){
        case 1: return 1; break;
        case 2: return 2; break;
        case 3: return 3; break;
        case 4: return 4; break;
        case 5: return 5; break;
        default: std::cout << "Ikkje et gyldig svar"; MainMenu(solved, needed_solves); break;
    }
}


inline void DisplayCollection(){
    std::vector<std::string> CollectionVec;
    std::fstream File;
    File.open("Collection.txt");
    if(File.is_open()){
        std::string line;
        while(getline(File, line)){
            std::cout << line << '\n';
            //CollectionVec.emplace_back();
            //std::string name = line.erase(line.find(' '), line.length() - line.find(' '));

            //std::string rarity = line.erase((line.begin(), + line.find(' '), line.end(), ' '), line.length() - line.find(' '));

            /*
            line.erase(line.find(' '), line.length() - line.find(' '));
            std::string state = line.erase(line.find(' '), line.length() - line.find(' '));
            line.erase(line.find(' '), line.length() - line.find(' '));
            std::string difficulty = line.erase(line.find(' '), line.length() - line.find(' '));
            line.erase(line.find(' '), line.length() - line.find(' '));
            std::string weight = line.erase(line.find(' '), line.length() - line.find(' '));
            line.erase(line.find(' '), line.length() - line.find(' '));
            std::string length = line.erase(line.find(' '), line.length() - line.find(' '));
            line.erase(line.find(' '), line.length() - line.find(' '));
            std::string wingspan = line.erase(line.find(' '), line.length() - line.find(' '));
            */
            //std::cout << name << " " << rarity << '\n';
            //std::cout << name << " " << rarity << " " << state << " " << difficulty << " " << weight << " " << length << " " << wingspan << '\n';
        }
    }
    /*
    for(size_t i = 0; i < CollectionVec.size(); i++){
        std::cout << CollectionVec[i] << '\n';
    }*/
}

inline bool UserTest(){
    int user_answer;
    std::cout << '\n';
    std::cout << "Du kan når som helst trykke Ctrl + C for å avslutte. (PS: Fulgå vil gå tapt)\n";
    std::cout << "Spørsmål 1: Kva er den vanlegaste årsaka til hårfall på eit beredt skinn?\n";
    std::cout << "1: Feil glassauger-størrelse\n";
    std::cout << "2: For lang tørketid\n";
    std::cout << "3: Feil posisjonering av øyrene\n";
    std::cout << "4: Utilstrekkelig avfeiting av skinnet\n";
    std::cin >> user_answer;
    if(user_answer != 4){
        std::cout << "Feil svar, prøv på nytt.\n";
        std::cout << '\n';
        UserTest();
    }
    std::cout << '\n';
    std::cout << "Spørsmål 2: Kva kjemikalie er standard ved beredning av fuglar?\n";
    std::cout << "1: Svovelsyra\n";
    std::cout << "2: Alun i flytande bad\n";
    std::cout << "3: Boraks\n";
    std::cout << "4: Natriumklorid i pickle\n";
    std::cin >> user_answer;
    if(user_answer != 3){
        std::cout << "Feil svar, prøv på nytt.\n";
        std::cout << '\n';
        UserTest();
    }
    std::cout << '\n';
    std::cout << "Spørsmål 3: Korleis unngår ein eit 'stirrande' uttrykk på eit utstoppa dyr?\n";
    std::cout << "1: Bruka mindre glassauger enn normalt\n";
    std::cout << "2: Still augene korrekt I dybde og vinkel\n";
    std::cout << "3: Bruk meir leira rundt augehola\n";
    std::cout << "4: Tørk skinnet raskare\n";
    std::cin >> user_answer;
    if(user_answer != 2){
        std::cout << "Feil svar, prøv på nytt.\n";
        std::cout << '\n';
        UserTest();
    }
    std::cout << '\n';
    std::cout << "Spørsmål 4: Kva skjer med eit overberedt skinn?\n";
    std::cout << "1: Det e klissete og luktar ille\n";
    std::cout << "2: Det e stivt og sprøtt\n";
    std::cout << "3: Det misfarge seg brunt\n";
    std::cout << "4: Hårene dette av med eingong\n";
    std::cin >> user_answer;
    if(user_answer != 2){
        std::cout << "Feil svar, prøv på nytt.\n";
        std::cout << '\n';
        UserTest();
    }
    std::cout << '\n';
    std::cout << "DU KLARTE DET!\n";
    return true;
}