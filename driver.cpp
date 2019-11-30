#include "maze_game.hpp"
#include "enchanted_components/enchanted_maze_factory.hpp"
#include "dystopian_components/dystopian_maze_factory.hpp"

//Drives the program
int main() {
    //factory to be used to create an enchanted faery land maze
    enchanted_maze_factory enchantedFactory{};

    //factory to be used to create a futuristic dystopian maze
    dystopian_maze_factory dystopianFactory{};

    //the maze game being used to create the maze
    maze_game game{};

    //Creating an enchanted maze and printing its contents
    maze* enchantedMaze = game.create_maze(enchantedFactory);
    enchantedMaze->print();

    //Creating a dystopian maze and printing its contents
    maze* dystopianMaze = game.create_maze(dystopianFactory);
    dystopianMaze->print();
    return 0;
}