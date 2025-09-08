#include "raylib.h"

int main() {
  InitWindow(800, 800, "My Hello World Program!");
  
  while (!WindowShouldClose()) {
    BeginDrawing();
    ClearBackground(RAYWHITE);
    DrawText("Hello from Alex!", 200, 200, 40, MAROON);
    EndDrawing();
  }
  CloseWindow();
  return 0;
}
