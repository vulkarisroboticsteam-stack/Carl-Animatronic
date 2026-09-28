#include <Arduino.h>
#include <Servo.h>
#include <PlayRtttl.hpp>


// ===============================
// SERVOS
// ===============================

Servo eyeL;
Servo eyeR;
Servo mouth;


// ===============================
// PINOS
// ===============================

#define eyePinL 5
#define eyePinR 3
#define mouthPin 6

#define candlePin 9
#define buzzerPin 11



// ===============================
// OLHOS
// ===============================

int eyeFront = 90;
int eyeLeft = 50;
int eyeRight = 150;


unsigned long lastEyes = 0;
unsigned long eyeDelay = 800;



// ===============================
// BOCA
// ===============================

int mouthMin = 0;
int mouthMax = 110;


bool mouthIsOpen = false;
bool mouthFullyOpen = false;

unsigned long nextMouthChange = 0;



// ===============================
// VELA
// ===============================

unsigned long lastCandle = 0;



// ===============================
// MÚSICA
// ===============================

bool musicPlaying = false;



// ===============================
// TEMA FNAF
// ===============================

const char fnafTheme[] PROGMEM =
"fnaf:d=16,o=4,b=55:"
"c5,p,"
"g4,e4,"
"c5,p,"
"b4,a4,"
"g4,p,"
"e4,"
"c4,p,"
"d#4,"
"g4,"
"c5,p,"
"g3,"
"c3";


const char* const fnafSongs[] PROGMEM =
{
  fnafTheme
};




// ===============================
// SETUP
// ===============================

void setup(){


  eyeL.attach(eyePinL);
  eyeR.attach(eyePinR);

  mouth.attach(mouthPin);



  pinMode(candlePin, OUTPUT);
  pinMode(buzzerPin, OUTPUT);



  eyeL.write(eyeFront);
  eyeR.write(eyeFront);

  mouth.write(mouthMin);



  randomSeed(analogRead(A0));



  nextMouthChange =
  millis() + random(2000,3000);



  // inicia música

  startPlayRtttlPGMPGM(
    buzzerPin,
    fnafSongs
  );


  musicPlaying = true;

}



// ===============================
// LOOP
// ===============================

void loop(){


unsigned long t = millis();




// =================================
// OLHOS
// =================================


if(t - lastEyes > eyeDelay){


  lastEyes = t;


  eyeDelay = random(300,1200);



  int r = random(0,10);

  int pos;



  if(r < 4){

    pos = eyeLeft;

  }

  else if(r < 8){

    pos = eyeRight;

  }

  else{

    pos = eyeFront;

  }



  eyeL.write(pos);
  eyeR.write(pos);


}





// =================================
// BOCA
// =================================


if(t > nextMouthChange){



  if(!mouthIsOpen){


    int abertura;


    int escolha = random(0,10);



    // 50% pequena

    if(escolha < 5){

      abertura = 35;

    }


    // 40% média

    else if(escolha < 9){

      abertura = 70;

    }


    // 10% totalmente aberta

    else{

      abertura = mouthMax;

    }



    mouth.write(abertura);



    mouthIsOpen = true;



    // pausa somente na abertura máxima

    if(abertura == mouthMax){


      delay(400);


      stopPlayRtttl();


      musicPlaying = false;


      mouthFullyOpen = true;


    }



    nextMouthChange =
    t + random(800,2500);



  }



  else{


    // fecha boca

    mouth.write(mouthMin);



    mouthIsOpen = false;



    // retorna música

    if(mouthFullyOpen){


      startPlayRtttlPGMPGM(
        buzzerPin,
        fnafSongs
      );


      musicPlaying = true;


      mouthFullyOpen = false;


    }



    nextMouthChange =
    t + random(2000,5000);



  }


}





// =================================
// VELA
// =================================


if(t - lastCandle > random(200,800)){


  lastCandle = t;


  int flick = random(0,10);



  if(flick == 0){


    analogWrite(
      candlePin,
      random(80,255)
    );


  }

  else if(flick == 1){


    analogWrite(
      candlePin,
      0
    );


  }

  else{


    analogWrite(
      candlePin,
      255
    );


  }


}





// =================================
// ATUALIZA ÁUDIO
// =================================


if(musicPlaying){

  updatePlayRtttl();

}


}