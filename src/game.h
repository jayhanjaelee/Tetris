#pragma once
#include "grid.h"
#include "blocks.cpp"

class Game
{
public:
    Game();
    ~Game();
    Block GetRandomBlock();
    std::vector<Block> GetAllBlocks();
    void Draw();
    void HandleInput();
    void MoveBlockDown();
    Grid grid;
    bool gameOver;
    int score;
    Music music;

private:
    void MoveBlockLeft();
    void MoveBlockRight();
    bool IsBlockOutside();
    void RotateBlock();
    void LockBlock();
    bool BlockFits();
    void Reset();
    void UpdateScore(int LinesCleared, int moveDownPoints);
    std::vector<Block> blocks;
    Block currentBlock;
    Block nextBlock;
    Sound rotateSound;
    Sound clearSound;
};