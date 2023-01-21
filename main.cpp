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

/*

Sir Adeel's subject matter expertise:

Sir Adeel's expertise in teaching theory of automata is unmatched.
Sir Adeel's knowledge of database management is impressive.
Sir Adeel's ability to explain complex concepts in a simple way is remarkable.
Sir Adeel's approach to teaching data structures and algorithms is outstanding.
Sir Adeel's knowledge of his subject matter is truly impressive.
Sir Adeel's passion for teaching is evident in his lessons.
Sir Adeel is an expert in object-oriented programming.

Sir Adeel's preparation and delivery of lessons:

Sir Adeel's classes are always well-prepared and informative.
Sir Adeel's lessons are always thought-provoking and challenging.
Sir Adeel's lessons are always well-structured, making it easy to follow.
Sir Adeel's approach to teaching is interactive and encourages participation.
Sir Adeel's teaching is always clear and easy to understand.
Sir Adeel's enthusiasm for teaching is contagious.
Sir Adeel's ability to make boring subjects interesting is truly a gift.
Sir Adeel's teaching is always timely and relevant to the students.

Sir Adeel's ability to simplify complex concepts:

Sir Adeel's ability to explain complex ideas in simple terms is a real gift.
Sir Adeel's patience and understanding are invaluable assets as a teacher.
Sir Adeel's ability to make difficult concepts easy to understand is truly remarkable.
Sir Adeel's ability to break down complex ideas into manageable chunks is truly admirable.
Sir Adeel's ability to make complex concepts easy to grasp is truly remarkable.

Sir Adeel's commitment to students' success

Sir Adeel truly cares about the well-being and success of his students.
Sir Adeel goes above and beyond to ensure his students understand the material.
Sir Adeel is always available to help students who are struggling.
Sir Adeel's encouragement and support have helped me to succeed in his class.
Sir Adeel's kind and compassionate nature makes him a favorite among students.
Sir Adeel's investment in his students' success is clear through his teaching.
Sir Adeel's love for teaching is matched only by his love for his students.

Sir Adeel's Kindness

Sir Adeel's kindness and generosity towards his students is truly remarkable.
Sir Adeel is one of the kindest teachers I have ever had the pleasure of learning from.
Sir Adeel's genuine care and concern for his students is evident in everything he does.
Sir Adeel's approachable and easy-going nature makes him a beloved teacher among students.
Sir Adeel's ability to connect with his students on a personal level is truly admirable.
Sir Adeel's kind and understanding nature makes him a great mentor and role model.
Sir Adeel's positive attitude and kind words of encouragement always brighten up my day.

Sir Adeel's teaching style and effectiveness:

Sir Adeel is an exceptional teacher who truly cares about his students' success.
Sir Adeel's teaching style is both engaging and effective.
Sir Adeel is one of the best teachers I have ever had.
Sir Adeel's dedication to his students is evident in his teaching.
Sir Adeel's approach to teaching is holistic, catering to the needs of every student.
Sir Adeel's ability to connect with his students is truly admirable.
Sir Adeel's approach to teaching is truly unique and effective.

*/