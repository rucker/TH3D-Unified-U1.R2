#include <avr/pgmspace.h>
/**
 * Made with Marlin Bitmap Converter
 * http://marlinfw.org/tools/u8glib/converter.html
 *
 * This bitmap from the file 'ez300boot.png'
 */
#define CUSTOM_BOOTSCREEN_BMPWIDTH  128
#define CUSTOM_BOOTSCREEN_BMPHEIGHT 64
#define CUSTOM_BOOTSCREEN_TIMEOUT   1500
const unsigned char custom_start_bmp[] PROGMEM = {
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000, // ································································
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000111,B11111110,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000, // ······························▐████▌····························
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00001111,B11111110,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000, // ······························█████▌····························
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00001111,B11111111,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000, // ······························██████····························
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00011111,B11111111,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000, // ·····························▐██████····························
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00011111,B11111111,B10000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000, // ·····························▐██████▌···························
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00111111,B11111111,B10000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000, // ·····························███████▌···························
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00111111,B11111111,B11000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000, // ·····························████████···························
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B01111111,B11111111,B11000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000, // ····························▐████████···························
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B01111111,B11111111,B11000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000, // ····························▐████████···························
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B01111111,B11111111,B11100000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000, // ····························▐████████▌··························
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B11111111,B11111111,B11100000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000, // ····························█████████▌··························
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B11111111,B11111111,B11110000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000, // ····························██████████··························
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000001,B11111111,B11111111,B11110000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000, // ···························▐██████████··························
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000001,B11111111,B11111111,B11111000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000, // ···························▐██████████▌·························
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000011,B11111111,B11111111,B11111000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000, // ···························███████████▌·························
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000011,B11111111,B11111111,B11111000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000, // ···························███████████▌·························
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000011,B11111111,B10111111,B11111100,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000, // ···························█████▌██████·························
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000111,B11111111,B10011111,B11111100,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000, // ··························▐█████▌▐█████·························
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000111,B11111111,B00011111,B11111110,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000, // ··························▐█████·▐█████▌························
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00001111,B11111111,B00011111,B11111110,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000, // ··························██████·▐█████▌························
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00001111,B11111111,B00001111,B11111111,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000, // ··························██████··██████························
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00001111,B11111110,B00001111,B11111111,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000, // ··························█████▌··██████························
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00011111,B11111110,B00000111,B11111111,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000, // ·························▐█████▌··▐█████························
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00011111,B11111100,B00000111,B11111111,B10000000,B00000000,B00000000,B00000000,B00000000,B00000000, // ·························▐█████···▐█████▌·······················
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00111111,B11111100,B00000111,B11111111,B10000000,B00000000,B00000000,B00000000,B00000000,B00000000, // ·························██████···▐█████▌·······················
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00111111,B11111100,B00000011,B11111111,B11000000,B00000000,B00000000,B00000000,B00000000,B00000000, // ·························██████····██████·······················
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B01111111,B11111000,B00000011,B11111111,B11000000,B00000000,B00000000,B00000000,B00000000,B00000000, // ························▐█████▌····██████·······················
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B01111111,B11111000,B00000001,B11111111,B11000000,B00000000,B00000000,B00000000,B00000000,B00000000, // ························▐█████▌····▐█████·······················
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B01111111,B11110000,B00000001,B11111111,B11100000,B00000000,B00000000,B00000000,B00000000,B00000000, // ························▐█████·····▐█████▌······················
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B11111111,B11110000,B00000000,B11111111,B11100000,B00000000,B00000000,B00000000,B00000000,B00000000, // ························██████······█████▌······················
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B11111111,B11100000,B00000000,B11111111,B11110000,B00000000,B00000000,B00000000,B00000000,B00000000, // ························█████▌······██████······················
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B11111111,B11100000,B00000000,B11111111,B11110000,B00000000,B00000000,B00000000,B00000000,B00000000, // ························█████▌······██████······················
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B01111111,B11000000,B00000000,B01111111,B11111000,B00000000,B00000000,B00000000,B00000000,B00000000, // ························▐████·······▐█████▌·····················
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B01111111,B11111000,B00000000,B00000000,B00000000,B00000000,B00000000, // ····································▐█████▌·····················
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00111111,B11111000,B00000000,B00000000,B00000000,B00000000,B00000000, // ·····································█████▌·····················
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000011,B11111111,B11111111,B11111111,B11111111,B11111100,B00000000,B00000000,B00000000,B00000000,B00000000, // ·······················████████████████████·····················
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000111,B11111111,B11111111,B11111111,B11111111,B11111100,B00000000,B00000000,B00000000,B00000000,B00000000, // ······················▐████████████████████·····················
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000111,B11111111,B11111111,B11111111,B11111111,B11111110,B00000000,B00000000,B00000000,B00000000,B00000000, // ······················▐████████████████████▌····················
  B00000000,B00000000,B00000000,B00000000,B00000000,B00001111,B11111111,B11111111,B11111111,B11111111,B11111110,B00000000,B00000000,B00000000,B00000000,B00000000, // ······················█████████████████████▌····················
  B00000000,B00000000,B00000000,B00000000,B00000000,B00001111,B11111111,B11111111,B11111111,B11111111,B11111111,B00000000,B00000000,B00000000,B00000000,B00000000, // ······················██████████████████████····················
  B00000000,B00000000,B00000000,B00000000,B00000000,B00011111,B11111111,B11111111,B11111111,B11111111,B11111111,B00000000,B00000000,B00000000,B00000000,B00000000, // ·····················▐██████████████████████····················
  B00000000,B00000000,B00000000,B00000000,B00000000,B00011111,B11111111,B11111111,B11111111,B11111111,B11111111,B00000000,B00000000,B00000000,B00000000,B00000000, // ·····················▐██████████████████████····················
  B00000000,B00000000,B00000000,B00000000,B00000000,B00011111,B11111111,B11111111,B11111111,B11111111,B11111111,B00000000,B00000000,B00000000,B00000000,B00000000, // ·····················▐██████████████████████····················
  B00000000,B00000000,B00000000,B00000000,B00000000,B00001111,B11111111,B11111111,B11111111,B11111111,B11111110,B00000000,B00000000,B00000000,B00000000,B00000000, // ······················█████████████████████▌····················
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000, // ································································
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000, // ································································
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000, // ································································
  B00000000,B00000000,B00000000,B00000000,B01111111,B11110011,B11111111,B11000001,B11110000,B00011111,B00000000,B11111000,B00000000,B00000000,B00000000,B00000000, // ················▐█████·██████··▐██···▐██····██▌·················
  B00000000,B00000000,B00000000,B00000000,B01111111,B11110011,B11111111,B11000111,B11111000,B00111111,B10000001,B11111100,B00000000,B00000000,B00000000,B00000000, // ················▐█████·██████·▐███▌··███▌··▐███·················
  B00000000,B00000000,B00000000,B00000000,B01111111,B11110011,B11111111,B11000111,B11111100,B01111111,B11000011,B11111110,B00000000,B00000000,B00000000,B00000000, // ················▐█████·██████·▐████·▐████··████▌················
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000111,B10001110,B00011100,B01110001,B11000011,B10001110,B00000000,B00000000,B00000000,B00000000, // ··························▐█▌·█▌·▐█·▐█·▐█··█▌·█▌················
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00001111,B00001110,B00011100,B11100000,B11100111,B00000111,B00000000,B00000000,B00000000,B00000000, // ··························██··█▌·▐█·█▌··█▌▐█··▐█················
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00001110,B00000000,B00011100,B11100000,B11100111,B00000111,B00000000,B00000000,B00000000,B00000000, // ··························█▌·····▐█·█▌··█▌▐█··▐█················
  B00000000,B00000000,B00000000,B00000000,B01111111,B11100000,B00000000,B00000001,B11111000,B11100000,B11100111,B00000111,B00000000,B00000000,B00000000,B00000000, // ················▐████▌·········▐██▌·█▌··█▌▐█··▐█················
  B00000000,B00000000,B00000000,B00000000,B01111111,B11100000,B00000000,B00000001,B11111000,B11100000,B11100111,B00000111,B00000000,B00000000,B00000000,B00000000, // ················▐████▌·········▐██▌·█▌··█▌▐█··▐█················
  B00000000,B00000000,B00000000,B00000000,B01111111,B11100000,B00000000,B00000001,B11111100,B11100000,B11100111,B00000111,B00000000,B00000000,B00000000,B00000000, // ················▐████▌·········▐███·█▌··█▌▐█··▐█················
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B11110000,B00000000,B00011100,B11100000,B11100111,B00000111,B00000000,B00000000,B00000000,B00000000, // ························██·······▐█·█▌··█▌▐█··▐█················
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000001,B11100000,B00011100,B00011100,B11100000,B11100111,B00000111,B00000000,B00000000,B00000000,B00000000, // ·······················▐█▌···▐█··▐█·█▌··█▌▐█··▐█················
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000011,B11000000,B00011110,B00011100,B01110001,B11000011,B10001110,B00000000,B00000000,B00000000,B00000000, // ·······················██····▐█▌·▐█·▐█·▐█··█▌·█▌················
  B00000000,B00000000,B00000000,B00000000,B01111111,B11110011,B11111111,B11001111,B11111000,B01111111,B11000011,B11111110,B00000000,B00000000,B00000000,B00000000, // ················▐█████·██████·████▌·▐████··████▌················
  B00000000,B00000000,B00000000,B00000000,B01111111,B11110011,B11111111,B11000111,B11111000,B00111111,B10000001,B11111100,B00000000,B00000000,B00000000,B00000000, // ················▐█████·██████·▐███▌··███▌··▐███·················
  B00000000,B00000000,B00000000,B00000000,B01111111,B11110011,B11111111,B11000011,B11100000,B00011111,B00000000,B11111000,B00000000,B00000000,B00000000,B00000000, // ················▐█████·██████··██▌···▐██····██▌·················
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000  // ································································
};
