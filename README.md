![image](https://user-images.githubusercontent.com/84132532/212108330-6fcc07ac-b1f6-439f-ad2d-b5f32b5aec65.png)

# Patterns in C Programming

This is a repository for most common patterns in C Programming. It contains pattern outputs and the code to solve the pattern in 4 different ways.

## Table of contents

- [Patterns in C Programming](#patterns-in-c-programming)
  - [Table of contents](#table-of-contents)
  - [Folder Structure](#folder-structure)
  - [Naming conventions](#naming-conventions)
  - [How to contribute](#how-to-contribute)
  - [Semantic Commit Messages](#semantic-commit-messages)

## Folder Structure

```
Folder Name
├── README.md
├── filename_ii.c
├── filename_id.c
├── filename_dd.c
└── filename_di.c
```

In each folder, there will be a `README.md` which will have description of the pattern solved & show the output of all the codes in that particular folder.

In each folder, there will be 4 files. Each file will have a different way of solving the same pattern. The naming convention of the files is explained in the [Naming Conventions](#naming-conventions) section.

## Naming conventions

We are using several naming conventions for our files as we are solving the same pattern in 4 different ways. The naming conventions are as follow:

```
<filename>_<outerloop><innerloop>.c
```

Every file will have it's name and then at the end it will have 2 characters followed by an underscore. The first character will be the outer loop and the second character will be the inner loop. The outer loop will be the loop that will be executed first and the inner loop will be the loop that will be executed second.

`i` stands for incremental loop and `d` stands for decremental loop.

For example:

```
square_id.c
```

This file will have an incremental outer loop and an decremental inner loop.

## How to contribute

1. Fork the repository.
2. Clone the repository to your local system.

```bash
git clone https://github.com/<YOUR_GITHUB_USERNAME>/c-programming-patterns
```

3. Create a new branch.

```bash
git checkout -b <NEW_BRANCH_NAME>
```

4. Make your changes.
5. Add your changes.

```bash
git add .
```

6. Commit your changes. Make sure you checkout the [Semantic Commit Messages](#semantic-commit-messages) section.

```bash
git commit -m "commit message"
```

7. Push your changes.

```bash
git push origin <NEW_BRANCH_NAME>
```

8. Create a pull request. You're done!

## Semantic Commit Messages

We are using semantic commit messages made by us own. It is used as follow:

**For new file**

```c
nf: filename.extenstion
```

**For edit in file**

```
fix: filename.extenstion: fix_message
```

**For new docs**

```
docs: parent_folder_name
```

**For edit in docs**

```
d_fix: parent_folder_name: fix_message
```

## Maintainers

If you have any query regarding this repository then feel free to raise an issue or contant the following maintainers.

- [Adarsh Dubey](https://bio.link/inclinedadarsh)
- [Pranav Prajapati](https://twitter.com/pranavvstwt)

## Thanks

Thanks for reading this README.md file. **If you liked this repository then please give it a star.** If you want to contribute to this repository then please read the [How to contribute](#how-to-contribute) section.

![Number of stars](https://img.shields.io/github/stars/c-programming-kkw/c-programming-patterns?style=social)
