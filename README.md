# Patterns in C Programming

---

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

---

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

---

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
