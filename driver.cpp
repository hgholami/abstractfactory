#include "maze_game.hpp"
#include "enchanted_maze_factory.hpp"
#include "dystopian_maze_factory.hpp"

int main() {
    enchanted_maze_factory enchantedFactory{};
    dystopian_maze_factory dystopianFactory{};
    maze_game game{};

    maze* enchantedMaze = game.create_maze(enchantedFactory);
    enchantedMaze->print();

    maze* dystopianMaze = game.create_maze(dystopianFactory);
    dystopianMaze->print();
    return 0;
}