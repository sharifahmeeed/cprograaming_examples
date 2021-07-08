/**
1. WE have to put prototype if we declare function below the main

**/

#include <stdio.h>
#include <stdlib.h>
#include"xo.h"




int main() {
    int game[3][3] = { {-1, -1, -1},  // 1 for x, 0 for O and -1 for empty ""
                        {-1, -1, -1},
                        {-1, -1, -1}};
    play(game);
    //displayGrid(game);   // pass by references
    //displayGridDefault();

    return 0;
}
