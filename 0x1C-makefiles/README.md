# 0x1C. C - Makefiles

Project about Makefiles.

## Tasks:

Exist two types of tasks in this project:

- Mandatory

- Advanced

### Mandatory

- 0-Makefile &rarr; Compile main.c and school.c

- 1-Makefile &rarr; Compile main.c and school.c using variables

- 2-Makefile:

	### Rules: all
		- The all rule builds your executable

- 3-Makefile:

	### Rules: all, clean, oclean, fclean, re
		- all: builds your executable
		- clean: deletes all Emacs and Vim temporary files along with the executable
		- oclean: deletes the object files
		- fclean: deletes all Emacs and Vim temporary files, the executable, and the object files
		- re: forces recompilation of all source files

- 4-Makefile:

	### Rules: all, clean, fclean, oclean, re
		- all: builds your executable
		- clean: deletes all Emacs and Vim temporary files along with the executable
		- oclean: deletes the object files
		- fclean: deletes all Emacs and Vim temporary files, the executable, and the object files
		- re: forces recompilation of all source files

- 5-island_perimeter.py &rarr; Create a function def island_perimeter(grid): that returns the perimeter of the island described in grid:

	### Grid is a list of list of integers:
		- 0 represents a water zone
		- 1 represents a land zone
		- One cell is a square with side length 1
		- Grid cells are connected horizontally/vertically (not diagonally).
		- Grid is rectangular, width and height don’t exceed 100
		- Grid is completely surrounded by water, and there is one island (or nothing).
		- The island doesn’t have “lakes” (water inside that isn’t connected to the water around the island).

### Advanced

- 100-Makefile:

	### rules: all, clean, fclean, oclean, re
		- all: builds your executable
		- clean: deletes all Emacs and Vim temporary files along with the executable
		- oclean: deletes the object files
		- fclean: deletes all Emacs and Vim temporary files, the executable, and the object files
		- re: forces recompilation of all source files
