#include <raylib.h>

#include "sources.cpp"

int main() {
   InitWindow(600, 600, "Hello World");

   while (!WindowShouldClose()) {
      BeginDrawing();
      ClearBackground(BLACK);
      DrawText("Hello World", 200, 200, 20, RAYWHITE);
      EndDrawing();
   }

   CloseWindow();

   return 0;
}
