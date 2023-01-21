#include <iostream>
#include <map>
#include <vector>
#include <string>
#include <random>
#include <time.h>
#include <cstdlib>

using namespace std;

map<string, vector<vector<string>>> rules = {
    // Initialize
    // S -> SM | DOL | Q | KN | D | K;
    {"S", {{"Subject_Matter"}, {"Delievery_of_lectures"}, {"Qualities"}, {"Kind_Nature"}, {"Dedication"}, {"Kindness"}}},

    // Grammar is stored in reverse order because it is stored in the Stack

    // SM -> PRO PR SUB ADJ
    {"Subject_Matter", {{"Adjectives", "Subject", "Praise", "Pronouns"}}},
    // DOL -> PRO LEC ADV
    {"Delievery_of_lectures", {{"Adverbs", "Lectures", "Pronouns"}}},
    // Q -> PRO PREQ QU ADJ
    {"Qualities", {{"Adjectives", "Quality", "Prequality", "Pronouns"}}},
    // KN -> kindness and generosity towards his students ADJ
    {"Kind_Nature", {{"Adjectives", "kindness and generosity towards his students", "Pronouns"}}},
    // D -> PRO OLS
    {"Dedication", {{"One_Liners", "Pronouns"}}},
    // K -> PRO OL
    {"Kindness", {{"One_Liner", "Pronoun"}}},

    // Further Expansion of the grammar
    {"Pronouns", {{"Sir Adeel's"}, {"Sir Adeel Ashraf's"}, {"His"}}},
    {"Pronoun", {{"Sir Adeel"}, {"Sir Adeel Ashraf"}, {"He"}}},

    {"Praise", {{"expertise in"}, {"knowledge of"}, {"ability to explain"}, {"approach to teaching"}, {"knowledge of"}}},
    {"Subject", {{"theory of automata"}, {"database management"}, {"teaching complex concepts in a simple way"}, {"data structures and algorithms"}, {"his subject matter"}, {"in object-oriented programming"}}},
    {"Adjectives", {{"is unmatched"}, {"is impressive"}, {"is remarkable"}, {"is outstanding"}, {"is truly impressive"}, {"is a real gift"}, {"is truly a gift"}, {"is truly remarkable"}, {"is truly admirable"}}},

    {"Lectures", {{"classes are always very"}, {"lessons are always"}, {"approach to teaching is"}, {"teaching are always"}, {"approach to teaching is"}}},
    {"Adverbs", {{"well-prepared and informative"}, {"timely and relevant to the students"}, {"thought-provoking and challenging"}, {"well-structured, making it easy to follow"}, {"interactive and encourages participation"}, {"truly unique and effective"}, {"holistic, catering to the needs of every student"}}},

    {"Prequality", {{"ability to"}, {"way of"}}},
    {"Quality", {{"explain complex concepts in a simple way"}, {"explain complex ideas in simple terms"}, {"make boring subjects interesting"}, {"break down complex ideas into manageable chunks"}, {"make complex concepts easy to grasp"}, {"connect with his students"}}},

    {"One_liners", {{"investment in his students' success is clear through his teaching"}, {"love for teaching is matched by his love for his students"}, {"teaching style is both engaging and effective"}, {"dedication to his students is evident in his teaching"}, {"approach to teaching is holistic, catering to the needs of every student"}, {"enthusiasm for teaching is contagious"}, {"encouragement and support has helped me to succeed in his class"}, {"kind and compassionate nature makes him a favorite among students"}, {"genuine care and concern for his students is evident in everything he does"}, {"approachable and easy-going nature makes him a beloved teacher among students"}, {"kind and understanding nature makes him a great mentor and role model"}, {"positive attitude and kind words of encouragement always brighten up my day"}, {"dedication to his students is evident in his teaching"}, {"teaching style is both engaging and effective"}}},
    {"One_liner", {{"is an exceptional teacher who truly cares about his students' success"}, {"is one of the best teachers I have ever had"}, {"is one of the kindest teachers I have ever had the pleasure of learning from"}, {"is an exceptional teacher who truly cares about the success of his students"}, {"is one of the best teachers I have ever had"}, {"nature of going above and beyond to ensure his students understand the material is remarkable"}, {"goes above and beyond to ensure his students understand the material"}}}

};

string generate_sentence()
{
    // Initializing the sentence string with nothing in it
    string sentence = "";

    // Start with S (Non-terminal)
    vector<string> non_terminals = {"S"};

    // Initializing Random Number Generator
    mt19937 rng(random_device{}());

    // Iterate until you reach the end -> terminal
    while (!non_terminals.empty())
    {
        // Popping the last element from the stack
        string current_non_terminal = non_terminals.back();
        non_terminals.pop_back();

        // check if it is Terminal or not -> count == 0 Terminal || count > 0 == Non-Terminal
        if (rules.count(current_non_terminal) > 0)
        {
            // Randomize the input with the clock (Second's Hand)
            srand(time(0));

            // Pick a random expansion for the non-terminal
            auto expansions = rules[current_non_terminal];
            int rand_index = rand() % expansions.size();
            auto expansion = expansions[rand_index];

            // Add the expansion to the list of non_terminals to expand
            for (auto symbol : expansion)
            {
                non_terminals.push_back(symbol);
            }
        }
        else
        {
            // add the non terminal to the sentence
            sentence += current_non_terminal + " ";
        }
    }
    return sentence;
}

void ustaad_intro()
{

    cout << "\n\n\n\n\n";
    cout << "   ____               _                    _          _____ _                    _           _ \n";
    cout << "  / __ \             | |                  | |        / ____(_)          /\      | |         | |\n";
    cout << " | |  | |_   _ _ __  | |     _____   _____| |_   _  | (___  _ _ __     /  \   __| | ___  ___| |\n";
    cout << " | |  | | | | | '__| | |    / _ \ \ / / _ | | | | |  \___ \| | '__|   / /\ \ / _` |/ _ \/ _ | |\n";
    cout << " | |__| | |_| | |    | |___| (_) \ V |  __| | |_| |  ____) | | |     / ____ | (_| |  __|  __| |\n";
    cout << "  \____/ \__,_|_|    |______\___/ \_/ \___|_|\__, | |_____/|_|_|    /_/    \_\__,_|\___|\___|_|\n";
    cout << "                                              __/ |                                            \n";
    cout << "                                             |___/\n";
    cout << "\n\n\n";
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

int main()
{
    cout << "Welcome to the madlib generator!" << endl;
    cout << "Press enter to continue | press any other key + Enter to stop," << endl;

    ustaad_intro();
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