#include <LiquidCrystal.h>

// %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
byte alef1[8] = {
  0x00, 0x1C, 0x20, 0x08, 0x08, 0x08, 0x08, 0x00, //0 alef1
};
byte alef2[8] = {
  0x00, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00, 0x00, //1 alef2 
};
byte alef3[8] = {
  0x00, 0x01, 0x01, 0x01, 0x01, 0x00, 0x00, 0x00, //2 alef3
};
byte be1[8] = {
  0x00,0x00,0x00,0x01,0x01,0x1e,0x00,0x02, //3 be1
};
byte be2[8] = {
  0x00, 0x00, 0x40, 0x81, 0x81, 0x7E, 0x00, 0x10, //4 be2
};
byte pe1[8] = {
  0x00, 0x00, 0x00, 0x01, 0x01, 0x06, 0x00, 0x07, //5 pe1
};
byte pe2[8] = {
  0x00, 0x00, 0x40, 0x81, 0x81, 0x7E, 0x00, 0x38, //6 pe2
};
byte te1[8] = {
  0x00, 0x03, 0x00, 0x01, 0x01, 0x06, 0x00, 0x00, //7 te1
};
byte te2[8] = {
  0x00, 0x14, 0x40, 0x81, 0x81, 0x7E, 0x00, 0x00, //8 te2
};
byte the1[8] = {
  0x02, 0x05, 0x00, 0x01, 0x01, 0x06, 0x00, 0x00, //9 the1
};
byte the2[8] = {
  0x08, 0x14, 0x40, 0x81, 0x81, 0x7E, 0x00, 0x00, //10  the2
};
byte jim1[8] = {
  0x00, 0x00, 0x0C, 0x12, 0x01, 0x3E, 0x00, 0x04, //11  jim1
};
byte jim2[8] = {
  0x00, 0x00, 0x0C, 0x12, 0x01, 0x3E, 0x40, 0x3A, //12  jim2
};
byte che1[8] = {
  0x00, 0x00, 0x0C, 0x12, 0x01, 0x3E, 0x00, 0x1C, //13  che1
};
byte che2[8] = {
  0x00, 0x00, 0x0C, 0x12, 0x01, 0x3E, 0x40, 0x37, //14  che2
};
byte hee1[8] = {
  0x00, 0x00, 0x0C, 0x12, 0x01, 0x3E, 0x00, 0x00, //15  hee1
};
byte hee2[8] = {
  0x00, 0x00, 0x0C, 0x12, 0x01, 0x3E, 0x40, 0x38, //16  hee2
};
byte dal[8] = {
  0x00, 0x00, 0x04, 0x02, 0x01, 0x12, 0x0C, 0x00, //19  dal
};
byte zal[8] = {
  0x00, 0x10, 0x04, 0x02, 0x01, 0x12, 0x0C, 0x00, //20  zal
};
byte re[8] = {
  0x00, 0x00, 0x00, 0x01, 0x01, 0x01, 0x02, 0x0C, //21  re
};
byte ze[8] = {
  0x00, 0x01, 0x00, 0x01, 0x01, 0x01, 0x02, 0x0C, //22  ze
};
byte zhe[8] = {
  0x02, 0x05, 0x00, 0x01, 0x01, 0x01, 0x02, 0x0C, //23  zhe
};
byte sin1[8] = {
  0x00, 0x00, 0x00, 0x15, 0x15, 0x6A, 0x00, 0x00, //24  sin1
};
byte sin2[8] = {
  0x00, 0x00, 0x00, 0x15, 0x95, 0x9A, 0x90, 0x60, //25  sin2
};
byte shin1[8] = {
  0x04, 0x0A, 0x00, 0x15, 0x15, 0x6A, 0x00, 0x00, //26  shin1
};
byte shin2[8] = {
  0x04, 0x0A, 0x00, 0x15, 0x95, 0x9A, 0x90, 0x60, //27  shin2
};
byte sad1[8] = {
  0x00, 0x00, 0x06, 0x29, 0x31, 0x5E, 0x00, 0x00, //28  sad1
};
byte sad2[8] = {
  0x00, 0x00, 0x06, 0x49, 0x91, 0x9E, 0x90, 0x60, //29  sad2
};
byte zad1[8] = {
  0x00, 0x10, 0x06, 0x29, 0x31, 0x5E, 0x00, 0x00, //30  zad1
};
byte zad2[8] = {
  0x00, 0x10, 0x06, 0x49, 0x91, 0x9E, 0x90, 0x60, //31  zad2
};
byte taa[8] = {
  0x00, 0x20, 0x26, 0x29, 0x31, 0x7E, 0x00, 0x00, //32  taa
};
byte meem1[8] = {
  0x00, 0x04, 0x0A, 0x19, 0x29, 0x46, 0x40, 0x20
};
byte meem2[8] = {
  0x00,0x00,0x06,0x09,0x09,0x1f,0x10,0x10
};
byte noon1[8] = {
  0x00,0x02,0x00,0x01,0x01,0x1e,0x00,0x00,
};
byte noon2[8] = {
  0x00, 0x00, 0x08, 0x21, 0x41, 0x41, 0x22, 0x1C,
};
byte raa[8] = {
  0x00, 0x00, 0x00, 0x01, 0x01, 0x01, 0x02, 0x0C
};
byte yaa1[8] = {
  0x00,0x00,0x00,0x01,0x01,0x1e,0x00,0x06
};
byte yaa2[8] = {
  0x00, 0x00, 0x00, 0x4C, 0x92, 0x89, 0x84, 0x78
};
byte yaa3[8] = {
  0x00, 0x06, 0x29, 0x48, 0x46, 0x41, 0x21, 0x1E
};
byte ein1[8] = {
  0x00, 0x00, 0x03, 0x04, 0x04, 0x0F, 0x00, 0x00
};
byte laam1[8] = {
  0x00,0x01,0x01,0x01,0x01,0x1e,0x00,0x00
};
byte laam2[8] = {
  0x00, 0x01, 0x01, 0x11, 0x21, 0x22, 0x1C, 0x00
};
byte khe1[8] = {
  0x04,0x00,0x04,0x0a,0x01,0x11,0x0f,0x00//17  khe1
};
byte khe2[8] = {
  0x00,0x04,0x0c,0x12,0x01,0x0e,0x10,0x1e //18  khe2
};
byte he1[8] = {
  0x08, 0x04, 0x0A, 0x15, 0x09, 0x36, 0x00, 0x00,	//17  khe1
};
byte he2[8] = {
  0x00, 0x00, 0x30, 0x48, 0x56, 0xE9, 0x50, 0x20, //18  khe2
};
byte he3[8] = {
  0x00, 0x07, 0x09, 0x09, 0x05, 0x00, 0x00, 0x00, //17  khe1
};
byte he4[8] = {
  0x00, 0x08, 0x04, 0x0A, 0x11, 0x11, 0x0E, 0x00, //18  khe2
};

// numbers:
byte zero[8] = {
  0x00, 0x00, 0x00, 0x06, 0x09, 0x09, 0x06, 0x00,
};
byte one[8] = {
  0x00, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00,
};
byte two[8] = {
  0x00, 0x09, 0x09, 0x0E, 0x08, 0x08, 0x08, 0x00,
};
byte three[8] = {
  0x00, 0x25, 0x25, 0x3A, 0x20, 0x20, 0x20, 0x00,
};
byte four[8] = {
  0x00, 0x03, 0x14, 0x14, 0x1F, 0x10, 0x10, 0x00,
};
byte five[8] = {
  0x00, 0x08, 0x04, 0x12, 0x21, 0x29, 0x16, 0x00,	//17  he1
};
byte six[8] = {
  0x00, 0x10, 0x21, 0x22, 0x1C, 0x08, 0x10, 0x00, //18  he2
};
byte seven[8] = {
  0x00, 0x11, 0x11, 0x0A, 0x0A, 0x04, 0x04, 0x00, //17  he3
};
byte eight[8] = {
  0x00, 0x04, 0x04, 0x0A, 0x0A, 0x11, 0x11, 0x00,  //18  he4
};
byte nine[8] = {
  0x00, 0x06, 0x09, 0x09, 0x07, 0x01, 0x01, 0x00,  //17  he3
};
                  
// %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

#define pin_switch 2
#define pin_autoplay 1  // start play
#define pin_rw 10      // the read/write pin
#define pin_contrast 12

#define empty_terrain ' '
#define solid_terrain 5
#define solid_terrain_right 6
#define solid_terrain_left 7

#define platform_width 16
#define platform_empty 0
#define platform_lower 1
#define platform_upper 2

#define dino_horizontal 1

// %%%%%%%%%%%%%%%%%%
LiquidCrystal lcd(11, 9, 6, 5, 4, 3);

static char terrainUpper[17];
static char terrainLower[17];

static bool buttonPushed = false;

void initializeGraphics(){
  // for the dino
  static byte run_position_1[8]= {0x00,0x07,0x07,0x0e,0x1c,0x14,0x14,0x14};
  static byte run_position_2[8] = {0x00,0x07,0x07,0x0e,0x1c,0x14,0x12,0x11};
  static byte jump_position[8] = {0x00,0x07,0x07,0x0e,0x1c,0x0c,0x12,0x00};
  static byte jump_position_low[8] = {0x00,0x07,0x07,0x0e,0x1c,0x0c,0x00,0x00};

  // for the barriers
  static byte ground_position[8] = {0x1b,0x15,0x0e,0x15,0x1b,0x15,0x0e,0x11};   // middle
  static byte ground_position_right[8] = {0x1b,0x15,0x0e,0x15,0x1b,0x15,0x0e,0x11};    // left side
  static byte ground_position_left[8] = {0x1b,0x15,0x0e,0x15,0x1b,0x15,0x0e,0x11};    // right side

  // for the other lcd //
  // static byte ground_position[8] = {0x02,0x02,0x02,0x02,0x02,0x1d,0x00,0x00};   // laam
  // static byte ground_position_right[8] = {0x00,0x00,0x00,0x07,0x14,0x12,0x11,0x1f};    // yaa
  // static byte ground_position_left[8] = {0x00,0x07,0x08,0x08,0x1f,0x00,0x00,0x00};    // ein2

  lcd.createChar(1, run_position_1);
  lcd.createChar(2, run_position_2);
  lcd.createChar(3, jump_position);
  lcd.createChar(4, jump_position_low);

  lcd.createChar(5, ground_position);
  lcd.createChar(6, ground_position_right);
  lcd.createChar(7, ground_position_left);
  

  for (int i = 0; i < platform_width; ++i) {
    terrainUpper[i] = empty_terrain;
    terrainLower[i] = empty_terrain;
  }
}

// Slide the terrain to the left in half-character increments

void advanceTerrain(char* terrain, byte newTerrain){
  for (int i = 0; i < platform_width; ++i) {
    char current = terrain[i];
    char next = (i == platform_width-1) ? newTerrain : terrain[i+1];
    switch (current){
      case empty_terrain:
        terrain[i] = (next == solid_terrain) ? solid_terrain_right : empty_terrain;
        break;
      case solid_terrain:
        terrain[i] = (next == empty_terrain) ? solid_terrain_left : solid_terrain;
        break;
      case solid_terrain_right:
        terrain[i] = solid_terrain;
        break;
      case solid_terrain_left:
        terrain[i] = empty_terrain;
        break;
    }
  }
}

bool drawHero(byte position, char* terrainUpper, char* terrainLower, unsigned int score) {
  bool collide = false;
  char upperSave = terrainUpper[dino_horizontal];
  char lowerSave = terrainLower[dino_horizontal];

  byte upper, lower;

  switch (position) {
    case 0:
      upper = lower = empty_terrain;
      break;
    case 1:
      upper = empty_terrain;
      lower = 1;
      break;
    case 2:
      upper = empty_terrain;
      lower = 2;
      break;
    case 3:
    case 10:
      upper = empty_terrain;
      lower = 3;
      break;
    case 4:
    case 9:
      upper = ".";
      lower = 4;
      break;
    case 5:
    case 6:
    case 7:
    case 8:
      upper = 3;
      lower = empty_terrain;
      break;
    case 11:
      upper = 1;
      lower = empty_terrain;
      break;
    case 12:
      upper = 2;
      lower = empty_terrain;
      break;
  }
  if (upper != ' ') {
    terrainUpper[dino_horizontal] = upper;
    collide = (upperSave == empty_terrain) ? false : true;
  }
  if (lower != ' ') {
    terrainLower[dino_horizontal] = lower;
    collide |= (lowerSave == empty_terrain) ? false : true;
  }
  
  byte digits = (score > 9999) ? 5 : (score > 999) ? 4 : (score > 99) ? 3 : (score > 9) ? 2 : 1;
  
  // Draw the scene
  terrainUpper[platform_width] = '\0';
  terrainLower[platform_width] = '\0';
  char temp = terrainUpper[16 - digits];
  terrainUpper[16 - digits] = '\0';
  lcd.setCursor(0,0);
  lcd.print(terrainUpper);
  terrainUpper[16 - digits] = temp;  
  lcd.setCursor(0,1);
  lcd.print(terrainLower);
  
  lcd.setCursor(16 - digits,0);
  lcd.print(score);

  terrainUpper[dino_horizontal] = upperSave;
  terrainLower[dino_horizontal] = lowerSave;
  return collide;
}

// Handle the button push as an interrupt
void buttonPush() {
  buttonPushed = true;
}

void setup(){
  // for the blinking when game comes up
  pinMode(pin_rw, OUTPUT);
  pinMode(pin_switch, INPUT);
  digitalWrite(pin_switch, HIGH);
  pinMode(pin_autoplay, OUTPUT);
  digitalWrite(pin_autoplay, HIGH);

  // Digital pin 2 maps to interrupt 0
  attachInterrupt(0, buttonPush, FALLING);  //pin_switch
  initializeGraphics();

  // CREATE CHARACTERS HERE
  // lcd.print("~");
  lcd.createChar(2, four);
  lcd.createChar(3, shin1);
  lcd.createChar(4, noon1);
  lcd.createChar(5, be1);
  lcd.createChar(6, he3);
  lcd.createChar(7, alef1);
  lcd.createChar(8, zal);
  lcd.createChar(9, re);
  // lcd.print("~");
  
  Serial.begin(9600);
  lcd.begin(16, 2);
  // Print a message to the LCD.
  lcd.print("hello world");
  lcd.setCursor(0,1);
  lcd.print("ty for coming!");
  // delay(2000);
  // lcd.clear();
}

// %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
void loop(){
  // lcd.clear();
  char serial_array[100] = {Serial.read()};

  if (serial_array[0] == '1') {
      lcd.setCursor(0, 0);
      lcd.print("this is my final");
      lcd.setCursor(0, 1);     
      lcd.print("project. enjoy!");  

      delay(1000);
  }
  else if (serial_array[0] == '2') {
    lcd.clear();
    // char data = serial_array[1];
    // lcd.print(data);

    lcd.write(9);
    lcd.write(8);
    lcd.write(7);
    
    lcd.write(" ");
    lcd.write("22");
    lcd.write(" ");

    lcd.write(6);
    lcd.write(5);
    lcd.write(4);
    lcd.write(3);
    lcd.write(" ");
    lcd.write(2);
    
    delay(1000);
  }

  else if (serial_array[0] == '3') {
    // lcd.clear();
    delay(1000);
    while(true) {
      jumping_game();
    }
  }
}

// %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

void jumping_game() {
  lcd.print("hello");
  static byte heroPos = 1;
  static byte newTerrainType = platform_empty;
  static byte newTerrainDuration = 1;
  static bool playing = false;
  static bool blink = false;
  static unsigned int distance = 0;
  
  if (!playing) {
    drawHero((blink) ? 0 : heroPos, terrainUpper, terrainLower, distance >> 3);
    if (blink) {
      lcd.setCursor(0,0);
      lcd.print("Press Start");
    }
    delay(250);
    blink = !blink;
    if (buttonPushed) {
      initializeGraphics();
      heroPos = 1;
      playing = true;
      buttonPushed = false;
      distance = 0;
    }
    lcd.clear();
    return;
  }

  // Shift the terrain to the left
  advanceTerrain(terrainLower, newTerrainType == platform_lower ? solid_terrain : empty_terrain);
  advanceTerrain(terrainUpper, newTerrainType == platform_upper ? solid_terrain : empty_terrain);
  
  // Make new terrain to enter on the right
  if (--newTerrainDuration == 0) {
    if (newTerrainType == platform_empty) {
      newTerrainType = (random(3) == 0) ? platform_upper : platform_lower;
      newTerrainDuration = 2 + random(10);
    } else {
      newTerrainType = platform_empty;
      newTerrainDuration = 10 + random(10);
    }
  }
    
  if (buttonPushed) {
    if (heroPos <= 2) heroPos = 3;
    buttonPushed = false;
  }  

  if (drawHero(heroPos, terrainUpper, terrainLower, distance >> 3)) {
    playing = false; // the dino collided with something. too bad.
  } else {
    if (heroPos == 2 || heroPos == 10) {
      heroPos = 1;
    } else if ((heroPos >= 5 && heroPos <= 7) && terrainLower[dino_horizontal] != empty_terrain) {
      heroPos = 11;
    } else if (heroPos >= 11 && terrainLower[dino_horizontal] == empty_terrain) {
      heroPos = 7;
    } else if (heroPos == 12) {
      heroPos = 11;
    } else {
      ++heroPos;
    }
    ++distance;
    
    digitalWrite(pin_autoplay, terrainLower[dino_horizontal + 2] == empty_terrain ? HIGH : LOW);
  }
  delay(100);
}




