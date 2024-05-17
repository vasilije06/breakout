#include <stdio.h>
#include <raylib.h>

typedef

void ScreenDrawing();

int main()
{

	InitWindow(800, 600, "breakout");

	while (!WindowShouldClose())
	{
		ScreenDrawing();
	}
	CloseWindow();
}


void ScreenDrawing()
{


	BeginDrawing();
		ClearBackground(GRAY);

	EndDrawing();


}