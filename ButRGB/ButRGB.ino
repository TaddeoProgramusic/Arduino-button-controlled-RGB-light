//pines colores RGB
#define RGBR 9
#define RGBG 10
#define RGBB 11

//pines botones
#define BUTR 2
#define BUTG 3
#define BUTB 4


//cantidad pulsaciones de cada botón (⚠️NO DEBERÍA DE PASARSE DE 5⚠️)
int pulsButR = 0;
int pulsButG = 0;
int pulsButB = 0;

//color RGB
int colRGBR = 0;
int colRGBG = 0;
int colRGBB = 0;


void setup() 
{
  pinMode(RGBR, OUTPUT);
  pinMode(RGBG, OUTPUT);
  pinMode(RGBB, OUTPUT);

  pinMode(BUTR, INPUT);
  pinMode(BUTG, INPUT);
  pinMode(BUTB, INPUT);

  //debug settings
  Serial.begin(9600);
}

void loop() 
{
  rojo();
  verde();
  azul();
}

void rojo()
{
  //detecta si el botón fue presionado y si su cantidad de pulsaciones no es igual a 5
  if(digitalRead(BUTR) == 1 && pulsButR != 5)
  {
    pulsButR++;
    colRGBR += 255/5;
    analogWrite(RGBR, colRGBR);
    
    //debug settings
    Serial.println(pulsButR);
    Serial.println(colRGBR);

    delay(500);
  }
  else if(digitalRead(BUTR) == 1 && pulsButR == 5)
  {
    pulsButR = 0;
    colRGBR = 0;
    analogWrite(RGBR, colRGBR);

    delay(500);
  }
}


void verde()
{
  //detecta si el botón fue presionado y si su cantidad de pulsaciones no es igual a 5
  if(digitalRead(BUTG) == 1 && pulsButG != 5)
  {
    pulsButG++;
    colRGBG += 255/5;
    analogWrite(RGBG, colRGBG);
    
    //debug settings
    Serial.println(pulsButG);
    Serial.println(colRGBG);

    delay(500);
  }
  else if(digitalRead(BUTG) == 1 && pulsButG == 5)
  {
    pulsButG = 0;
    colRGBG = 0;
    analogWrite(RGBG, colRGBG);

    delay(500);
  }
}


void azul()
{        
  //detecta si el botón fue presionado y si su cantidad de pulsaciones no es igual a 5
  if(digitalRead(BUTB) == 1 && pulsButB != 5)
  {
    pulsButB++; 
    
    
    colRGBB += 255/5;
    analogWrite(RGBB, colRGBB);
    
    //debug settings
    Serial.println(pulsButB);
    Serial.println(colRGBB);

    delay(500);
  }
  else if(digitalRead(BUTB) == 1 && pulsButB == 5)
  {
    pulsButB = 0;
    colRGBB = 0;
    analogWrite(RGBB, colRGBB);
    delay(500);
  }
}


//Creditos completos a: Fabiola