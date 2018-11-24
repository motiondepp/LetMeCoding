//Yang
//November 24th,2018
//Moving Character Demo
#include <Arduboy.h>
Arduboy arduboy;
int playerx = 5;
int playery = 10;
const unsigned char background[] PROGMEM = {
  0x84, 0x20, 0x9, 0x00, 0x24, 0x00, 0x10, 0x80,
};
const unsigned char player[] PROGMEM  = {
    0xfe, 0x1, 0x3d, 0x25, 0x25, 0x3d, 0x1, 0x1, 0xc1, 0x1, 0x3d, 0x25, 0x25, 0x3d, 0x1, 0xfe, 0x7f, 0x80, 0x9c, 0xbc, 0xb0, 0xb0, 0xb2, 0xb2, 0xb3, 0xb0, 0xb0, 0xb0, 0xbc, 0x9c, 0x80, 0x7f,
};
void setup() {
  // put your setup code here, to run once:
    arduboy.begin();
    arduboy.clear();
}

void loop() {
  // put your main code here, to run repeatedly:
    arduboy.clear();
    if(arduboy.pressed(LEFT_BUTTON)) {
        playerx = playerx - 1;
    }
    if(arduboy.pressed(RIGHT_BUTTON)) {
        playerx = playerx + 1;
    }
    if(arduboy.pressed(UP_BUTTON)) {
        playery = playerx - 1;
    }
    if(arduboy.pressed(DOWN_BUTTON)) {
        playery = playerx + 1;
    }
    arduboy.drawBitmap(playerx, playery, player, 16, 16, WHITE);
    arduboy.display();
}
