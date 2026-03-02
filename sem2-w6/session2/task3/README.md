# PGM Image Tools

In this task, you will be adding to, refactoring, and generally improving a program 'pgmTools'.

This tool is designed to work with PGM Images - these are a simple ascii image format and the full details are in the
section below. **You should read this before starting this task**.

In order to see them in VSCode, you will need to add the extension 'PBM/PPM/PGM Viewer for Visual Studio Code' via the
extensions tab. If you want to look at the file contents, right click on the file name and select 'open with...' and
choose text editor from the dropdown menu which appears.

## Your Task

You have been given some code in pgmTools.c - it works, but is **poor quality code** and needs refactoring as the
variable names and comnmenting are not very good!

Currently, the program can read an image and print out its pixel values.

To compile and run:

```
gcc pgmTools.c -o pgmTools

./pgmTools path_to_file.pgm

e.g.

./pgmTools images/frog.pgm

Note that C allows relative pathing, so folder names can be used in file paths.
```

### Part 1 - Refactor and Validation

Start by reading the code, compiling it, and running it on some of the sample images provided in 'images/'.

Rename variables so that they are clear and self-documenting, and consider what additional validation you should add to
ensure that it gives errors if there are problems.

If the program tries to open a bad PGM image (you will find some of these in images/bad/) it should give an error.

You do not need to validate every single issue - you may want to pick 2 or 3 to work on.

**You should use functions to do this where possible**.

### Part 2 - Adding Functionality

You will see there is a basic menu created for you - but the functions haven't all been written.

Your boss has asked you to add options to:

- Invert the 'colours' of the image (i.e. 0 -> 255, 255 -> 0, 100 -> 155) and save this to a new file
- Rotate the image (90 degree, 180 degree or 270 degrees) and save to a new file
- **challenge**: shrink the image by a given factor

Example outputs are provided for each task in the images/outs/ folder.

## Tips

You should **plan** your work - use comments, or even write/draw on paper to help you. Some of these tasks are quite
challenging and it can be useful to sketch out variables and even work through a small example on paper to understand
the algorithms.

Make sure you are frequently running your code, testing it with different images to ensure it still works. Never assume
you have written perfect code - **everyone makes mistakes**.

Add comments and ensure your code is well documented - this is an absolutely key skill to develop while you're a
student, so get into the habit of writing good code now!

If you need help, ask! Speak to people around you, or ask the teaching staff in the room.

## PGM Images

PGM images are greyscale bitmap images which are stored as some basic metadata (type, height, width, maxgray value) and
then individual values for each pixel.

PGM images have a simple structure:

```
P2
HEIGHT WIDTH
MAXGRAY
pixelValues ...
```

For example 'example.pgm':

```
P2
5 5
255
110 110 110 110 110
110 74  74  74  110
110 74  74  74  110
110 74  74  74  110
110 110 110 110 110
```

P2 is called the 'magic number' of the file - as there are both ascii and binary PGM images, this denotes that this is
an ascii file ('P5' is used for binary files - we won't be working with these). In this exercise, this will **always**
be P5.

HEIGHT and WIDTH should be positive integer values.

MAXGRAY should be a number between 0 and 255 (inclusive), and no pixel will be larger than it. Generally 255 is used as
this is the maximum value.

And pixel values are space-separated grey values for each pixel - there should always be (HEIGHT*WIDTH) pixel values,
and none of them should be larger than the MAXGRAY.
