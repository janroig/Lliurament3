/**********************************************************************************************************
**                                          Blink                                                        **
**                    S'ensen el LED un segon, S'apaga el LED un segon, Repeticio.                       **                             
**                                                                                                       **
***********************************************************************************************************/

//******  Includes  ********************************************



//******  Variables  *******************************************


//******  Setup  ***********************************************

                          // S'executa una vegada quan el programa s'inicia
void setup() {            //obre bloc de codi
  pinMode(13, OUTPUT);    //Posa el pin 13 com a sortida
}                         //tenca bloc de codi


//******  Loop  ***********************************************


  void loop() {             //obre bloc de codi
  digitalWrite(13, HIGH);   // engega el LED (HIGH es el nivell de tensió)
  delay(1000);              // espera 1 segon
  digitalWrite(13, LOW);    // apaga el LED disminuint la tensió
  delay(1000);              // espera 1 segon
}
