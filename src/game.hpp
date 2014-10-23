#pragma once

#include "map/level.hpp"

class Game
{
public:
    static int WIDTH;
    static int HEIGHT;
    static bool DIRTY;
    static GLuint FramebufferAux();

	Game();
	virtual ~Game();

	void Init();
	void Tick();
	void Finalize();

	void ReadKeyboard(unsigned char key, int x, int y, bool press);
	void ReadMouse(int button, int state, int x, int y);
    void Update(double delta);
	void Render();

private:
    static GLuint FRAMEBUFFER_AUX;
    static GLuint RENDERBUFFER_AUX;

	bool keys[256];
	Level* level;

    // Timing variables
    double t;
    double dt;
    double current_time;
    double accumulator;
};