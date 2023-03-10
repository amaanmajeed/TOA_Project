# Understanding the working of Transformers using Context Free Grammar

## Demo Video
https://user-images.githubusercontent.com/99554708/213906584-4ee3aaef-c72b-4c81-9d8e-99efb7631b5d.mp4



## Description

This project was created to show our appreciation for our Theory of Automata teacher, Sir Adeel Ashraf. The goal of this project is to demonstrate how transformers like ChatGPT, Jasper.io, and many other transformers work. The project uses Context Free Grammar (CFG) to generate sentences that conform to a specific grammar. This project was created to fulfill a course requirement for the Theory of Automata (also known as the Theory of Computing) course taught by Sir Adeel Ashraf.

## Documentation
[Detailed Explaination of the document](https://github.com/amaanmajeed/TOA_Project/blob/main/Detailed_Explaination.md)

## Technologies Used
- C++ programming language
- Standard Template Library (STL)

## How the project was created
The project was created using C++ programming language and the Standard Template Library (STL). The project consists of a set of grammar rules represented in 2D Vectors. The key-value pairs represent non-terminals (e.g. "S", "NP") and their possible expansions in the form of lists of lists of terminals and non-terminals (e.g. "Det", "N").

The project uses a backtracking algorithm to generate sentences that conform to the specified grammar. The algorithm starts with the "S" (sentence) non-terminal and recursively expands it using the rules specified in the grammar.


## Authors

- [Amaan Majeed](https://github.com/amaanmajeed) - Wrote the code
- [Hashim Khursheed]() - Wrote the praises for Sir adeel
- [Usaid Afzal]() - Converted those praises to cfg


## Contributing

Contributions are always welcome!

See `contributing.md` for ways to get started.

Please adhere to this project's `code of conduct`.




## Run Locally

Clone the project

```bash
  git clone https://github.com/amaanmajeed/TOA_Project
```

Go to the project directory

```bash
  cd TOA_Project
```

create an executable file

```bash
  g++ main.cpp -o p
```

run the executable file
```bash
  ./p
```

