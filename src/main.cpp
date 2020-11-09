//
//  main.cpp
//  miyn
//
//  Created by Nick Bell on 11/7/20.
//  Copyright © 2020 Mushi. All rights reserved.
//

#include "Game.hpp"

Game *game = nullptr;

int main() {
    
    game = new Game();
    
    game->init("miyn", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 800, 600, false);
    
    while (game->running()) {
        
        game->handle_events();
        game->update_systems();
        game->render_frame();
        
    }
    
    game->clean_game();
    
    return 0;
    
}
