# In-class Exercises

### [Programming Challenges](https://www3.nd.edu/~pbui/teaching/cse.30872.su24/) (Summer Session 2024)

This repository contains a collection of in-class exercises for the Programming Challenges course. During class, students collaborate in groups of 4-5 to design and implement solutions in Python or C++ within a limited time. Some exercises, while not covered in class discussions, are also included for additional practice.

Each folder corresponds to a different exercise and contains:

- A `README.md` file, explaining the problem.
- Implementations of the solution in various languages:
  - [Bash](<https://en.wikipedia.org/wiki/Bash_(Unix_shell)>)
  - [C](<https://en.wikipedia.org/wiki/C_(programming_language)>)
  - [C++](https://en.wikipedia.org/wiki/C%2B%2B)
  - [C#](<https://en.wikipedia.org/wiki/C_Sharp_(programming_language)>)
  - [Java](<https://en.wikipedia.org/wiki/Java_(programming_language)>)
  - [JavaScript](https://en.wikipedia.org/wiki/JavaScript)
  - [Python 3](<https://en.wikipedia.org/wiki/Python_(programming_language)>)
  - [Swift](<https://en.wikipedia.org/wiki/Swift_(programming_language)>)
- Some test cases and their corresponding expected output.

## Testing

### Dredd Testing

To test solutions using [dredd](https://dredd.h4x0r.space/), simply run: `./dredd_test.sh source_file1  source_file2 ...`

> To test a solution in debugging mode, run: `DEBUG=1 ./dredd_test.sh source_file1  source_file2 ...`

`dredd_test.sh` automatically detects the corresponding exercise to the solution based on the parent directory of the source file and submits the solution to dredd; thus, all source files should be placed accordingly.

### Local Testing (Pending)

Similarly, to test a solution locally based on the available test cases, simply run: `./local_test.sh source_file ...`

`local_test.sh` will evaluate the corresponding solution implementation detecting the programming language based on its file extension and comparing its output with the available input-output pairs available in the corresponding folder.

For testing purposes, all solutions implemented in a [scripting language](https://en.wikipedia.org/wiki/Scripting_language) (Bash, JavaScript, Python) must include its corresponding [shebang](<https://en.wikipedia.org/wiki/Shebang_(Unix)>).
