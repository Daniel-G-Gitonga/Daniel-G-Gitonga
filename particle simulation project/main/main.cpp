#include <iostream>
#include "app.h"


int main(int argv, char** argc){
    printf("hello world...\n");


WinSpec* spec = new WinSpec();
spec->width = 600;
spec->height = 600;
spec->title = "tttt";

Win* win = new Win();
win->win();
////////////////////////

App* app = new App(win->window);
app->onRender();

////////////////////////
delete spec;
delete win;
delete app;

    return 0;
}