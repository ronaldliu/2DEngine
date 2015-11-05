#ifndef _2DENGINE_H             // Prevent multiple definitions if this 
#define _2DENGINE_H             // file is included in more than one place
#define WIN32_LEAN_AND_MEAN

#include "game.h"
#include "textureManager.h"
#include "image.h"
#include "player.h"

//=============================================================================
// This class is the core of the game
//=============================================================================
class Engine : public Game
{
private:
    // game items
    TextureManager backgroundTexture;   // nebula texture
    TextureManager characterTexture;     // ship texture
    Image   background;             // Background image
    Player character;              // ship image
	// Terrain ground;


public:
    // Constructor
    Engine();

    // Destructor
    virtual ~Engine();

    // Initialize the game
    void initialize(HWND hwnd);
    void update();      // must override pure virtual from Game
    void ai();          // "
    void collisions();  // "
    void render();      // "
    void releaseAll();
    void resetAll();
};

#endif