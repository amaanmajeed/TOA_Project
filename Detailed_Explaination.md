## Code Explanation
The code starts by defining a map data structure called "rules" that holds the grammar rules. Each key in the map is a non-terminal symbol and its value is a vector of vector of strings which holds the possible expansions of the key.

```cpp
map<string, vector<vector<string>>> rules = {
    {"S", {{"Subject_Matter"}}},

    {"Subject_Matter", {{"Follow_up", "Subject", "Praise", "Person"}}},

    {"Person", {{"Sir Adeel's"}, {"Adeel Ashraf's"}, {"His"}}},
    {"Praise", {{"expertise in"}, {"knowledge of"}, {"ability to explain"}, {"approach to teaching"}, {"knowledge of"}}},
    {"Subject", {{"theory of automata"}, {"database management"}, {"teaching complex concepts in a simple way"}, {"data structures and algorithms"}, {"his subject matter"}, {"in object-oriented programming"}}},
    {"Follow_up", {{"is unmatched"}, {"is impressive"}, {"is remarkable"}, {"is outstanding"}, {"is truly impressive"}}},

};
```

The code then defines a function called "generate_sentence" that takes a string as input and returns a string. This function uses the backtracking algorithm to generate sentences that conform to the specified grammar.

```cpp
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
            // random instance to select a random item from the list
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

```

This function checks if the input symbol is a terminal, if it is the function returns that terminal. If it's a non-terminal, it picks a random expansion and recursively expands the symbols in the expansion by calling the function again with the new symbol, so the process is continued until all the symbols are terminal.

The code also uses the C++11 `srand(time(0))` library to seed the random number generator with a random device.
The command ties the `rand()` function with the seconds hand on the clock, to get the random number.

```cpp
srand(time(0)); // Randomize the input with the clock (Second's Hand)
rand(); //// Generate a random number with respect to the clock
```

A function is called which shows the picture of the teacher, and the intro words in ASCII art.

```cpp
ustaad_ki_photo();
ustaad_intro();
```

Finally, the main function calls the generate_sentence function and prints the generated sentence to the console.

```cpp
int main() {
    cout << "Welcome to the madlib generator!" << endl;
    cout << "Press enter to continue | press any other key + Enter to stop," << endl;

    ustaad_intro();
    ustaad_ki_photo();

    while (true)
    {
        cout << generate_sentence();

        char choice = getchar();
        if (choice != '\n') {
            break;
        }
    }
}
```

