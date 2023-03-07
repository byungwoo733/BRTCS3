/* SDL Test for Raspberry Pi 3*/
#include "mbed.h"

#include "SDL.h"
#include "SDL_System.h"
#include "SDL_render.h"
#include "SDL_gamecontroller.h"

#include <OpenGLES/ES2/gl.h>
#include <OpenGLES/ES2/glext.h>

typedef struct SDL_texture_formats{
    int x_width = 640;
    int y_height= 480;
}SDL_texture_formats;

// main() runs in its own thread in the OS
int main()
{
    while (true) {

    }
}