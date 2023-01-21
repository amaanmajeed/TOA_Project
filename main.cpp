#include <iostream>
#include <map>
#include <vector>
#include <string>
#include <random>
#include <time.h>
#include <cstdlib>

using namespace std;

map<string, vector<vector<string>>> rules = {
    {"S", {{"Subject_Matter"}}},

    {"Subject_Matter", {{"Follow_up", "Subject", "Praise", "Person"}}},

    {"Person", {{"Sir Adeel's"}, {"Adeel Ashraf's"}, {"His"}}},
    {"Praise", {{"expertise in"}, {"knowledge of"}, {"ability to explain"}, {"approach to teaching"}, {"knowledge of"}}},
    {"Subject", {{"theory of automata"}, {"database management"}, {"teaching complex concepts in a simple way"}, {"data structures and algorithms"}, {"his subject matter"}, {"in object-oriented programming"}}},
    {"Follow_up", {{"is unmatched"}, {"is impressive"}, {"is remarkable"}, {"is outstanding"}, {"is truly impressive"}}},

};

string generate_sentence()
{

    string sentence = "";
    vector<string> symbols = {"S"}; // Start with the sentence non-terminal

    mt19937 rng(random_device{}()); // create a random number generator

    while (!symbols.empty())
    {
        string current_symbol = symbols.back();
        symbols.pop_back();

        if (rules.count(current_symbol) > 0)
        {
            // line used to truely randomize the input
            srand(time(0));
            // Pick a random expansion for the non-terminal
            auto expansions = rules[current_symbol];
            int rand_index = rand() % expansions.size();
            auto expansion = expansions[rand_index];

            // Add the expansion to the list of symbols to expand
            for (auto symbol : expansion)
            {
                symbols.push_back(symbol);
            }
        }
        else
        {
            // Terminal symbol, add it to the sentence
            sentence += current_symbol + " ";
        }
    }
    return sentence;
}

void ustaad_ki_photo()
{

    cout << "    llllllllllllllllllllllllllllllllllllll||llllllllllllllllllllllllllllllllllllllll\n";
    cout << "    lllllllllllllllllllllllllllll|g@@@@@@@@@@@@@@@@@ggllllllllllllllllllllllllllllll\n";
    cout << "    llllllllllllllllllllllllllg@@@@@@@@@@@@@@@@@@@@@@@@@@|llllllllllllllllllllllllll\n";
    cout << "    llllllllllllllllllllllll@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@gllllllllllllllllllllllll\n";
    cout << "    lllllllllllllllllllllll@@@@@@@@@@@@@$$@@@@@@@@@@@@@@@@@@@lllllllllllllllllllllll\n";
    cout << "    lllllllllllllllllllll$@@@@@@@@@@@$@@@@@@@@@@@@@@@@@@@@@@@@llllllllllllllllllllll\n";
    cout << "    llllllllllllllllllllj@@@@@@@@@@@@@@@@@@@@$$$@@@@@@@@@@@@@@@lllllllllllllllllllll\n";
    cout << "    llllllllllllllllllll]@@@@@@@@@@@@@M%%%%MMMTTTM%$@@@@@@@@@@@lllllllllllllllllllll\n";
    cout << "    llllllllllllllllllll$@@@@@@@@@@M$LlL|||||l||||llll$$@@@@@@@@llllllllllllllllllll\n";
    cout << "    llllllllllllllllllll$@@@@@@@@$$$llllllllllllllll$$$@@@@@@@@@llllllllllllllllllll\n";
    cout << "    llllllllllllllllllll$@@@@@@@@$$$$llllllllllllll$$$$@@@@@@@@@llllllllllllllllllll\n";
    cout << "    lllllllllllllllllllll$@@@@M$$$$$$@$lllllllyggggg$$$$$%@@@@@@llllllllllllllllllll\n";
    cout << "    lllllllllllllllllllll$@@@@$$$@$$$$$$$$$l$$$$$$$$$$@@$$$@@@@@llllllllllllllllllll\n";
    cout << "    llllllllllllllllllll$@M%@@$$$$$$$NL$@$$$$$$Mg&$@$$$$$$$@M$$@llllllllllllllllllll\n";
    cout << "    lllllllllllllllllllll$$$$@$$$$$$$$$$$$ll$$$$$$l$$$$$$$$$$$$lllllllllllllllllllll\n";
    cout << "    llllllllllllllllllllll$$$@$$$$$$$ll$$ll|j$$llllllll$$$@@$$llllllllllllllllllllll\n";
    cout << "    lllllllllllllllllllllll$$@$$$$llll$$MT||l$$lL||lll$$$$@$$lllllllllllllllllllllll\n";
    cout << "    llllllllllllllllllllllll$$@$$$ll@$$$$@g|l@$lllLlll$$$@MMllllllllllllllllllllllll\n";
    cout << "    lllllllllllllllllllllllllj@@@$$$$@@@@@@@@@@@@@ll$$$@@@llllllllllllllllllllllllll\n";
    cout << "    llllllllllllllllllllllllll%@@@@@@@@$$$lll$$$&$$@$@@@@lllllllllllllllllllllllllll\n";
    cout << "    lllllllllllllllllllllllllll@@@@$@$$$$ggggl$$$l$@@@@@Mlllllllllllllllllllllllllll\n";
    cout << "    lllllllllllllllllllllllllll|@@@@@@$$$$@@@$Tll$$$@@@@llllllllllllllllllllllllllll\n";
    cout << "    lllllllllllllllllllllllllll|@@@@@@@@@$$$$@@@@@@@@@$$@lllllllllllllllllllllllllll\n";
    cout << "    lllllllllllllllllllllllll$|j@$$@@@@@@@@@@@@@@@@@M$$$@|llllllllllllllllllllllllll\n";
    cout << "    llllllllllllllllllllll&lT|||$@$$%$@@@@@@@@@@@@$l$$$@'||lll&lllllllllllllllllllll\n";
    cout << "    lllllllllllllllll&|||lL|||||l@$$$$$$$$$M$$$Ml$$$$$@L |||l|||||M&llllllllllllllll\n";
    cout << "    llllllllllll&M |||||l||||| ||$$$$ll$$$$M$lllllll$@|L ||||T|||||||||$llllllllllll\n";
    cout << "    lllllll$M|||||||||||T||||| |||@$$$lll$$llllllll$@||   |||||L|||||||||l&lllllllll\n";
    cout << "    lll$M|||||||||||||L|||,ggwg,|||&$$$lll$llllll$$$|L|ggmg||l||||| ||||||||||Mlllll\n";
    cout << "    l||||||||||||||||||||||l|lllLl|||$$lllllllll$$$LL|ll||'|iM||L | || | ||||||||l&l\n";
    cout << "    |||||||||| |||| L| ||||||l|l|lL|||1lllllll$@||L||||||`|  | ||||||  |||||||||l|||\n";
    cout << "    L||||||||||||||||| ||| ||||||||l|L||&ll$$&||ll|'||| ||||| ||| |||| |||||||||||||\n";
    cout << "    ||||l||||||||||||| |||| |||| ||||||l||%@|||'|| |||  || ||||| | ||   ||||||||||||\n";
    cout << "    |||||||||||||||||||||||||||||||||||||l|||  | || || |||| |||||| ||  ||||||||||| |\n";
    cout << "    i|||lL|||||||||||||| | || ||||||||||ll||| | |||||  ||| ||||| || ||||'|||l|||||||\n";
    cout << "    |l||||||||||||||||| ||||| |||||||||||L|||| ||||||| |||||||  || ||| | |||l|||| ||\n";
}

void ustaad_intro(){

cout << "\n";
cout << "   ____               _                    _          _____ _                    _           _ \n";
cout << "  / __ \             | |                  | |        / ____(_)          /\      | |         | |\n";
cout << " | |  | |_   _ _ __  | |     _____   _____| |_   _  | (___  _ _ __     /  \   __| | ___  ___| |\n";
cout << " | |  | | | | | '__| | |    / _ \ \ / / _ | | | | |  \___ \| | '__|   / /\ \ / _` |/ _ \/ _ | |\n";
cout << " | |__| | |_| | |    | |___| (_) \ V |  __| | |_| |  ____) | | |     / ____ | (_| |  __|  __| |\n";
cout << "  \____/ \__,_|_|    |______\___/ \_/ \___|_|\__, | |_____/|_|_|    /_/    \_\__,_|\___|\___|_|\n";
cout << "                                              __/ |                                            \n";
cout << "                                             |___/\n";
cout << "\n";

}

int main()
{
    cout << "Welcome to the madlib generator!" << endl;
    cout << "Press enter to continue | press any other key + Enter to stop," << endl;

    ustaad_ki_photo();

    while (true)
    {
        cout << generate_sentence();

        // Algo to check "Enter" key. If not then exit the loop
        char choice = getchar();
        if (choice != '\n')
        {
            break;
        }
    }
}