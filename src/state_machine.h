/**
 ******************************************************************************
 * @file		state_machine.h
 * @author		JakubKopec
 * @version		1.0
 * @date		2015-11-26
 * @brief		Definiert benötigte Structs, Enums und Functions.
 *
 * @bug		Bislang keine Fehler bekannt.
 ******************************************************************************
 */
#ifndef STATE_MACHINE
#define STATE_MACHINE

//benoetigte .h-Files inkludieren
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
//eigenes .h-File inkludieren
#include "led_funktionen.h"

/**
 * Ein Enum in welchem jeder mögliche Status der Ampel abgespeichert wird.
 */
typedef enum {
	ROT, //!< Wenn die Ampel gerade rot leuchtet
	ROT_GELB,//!< Wenn die Ampel gerade rot und gelb leuchtet
	GRUEN,//!< Wenn die Ampel gerade gruen leuchtet
	GRUEN_BLINKEND,//!< Wenn die Ampel gerade gruen blinkt
	GELB,//!< Wenn die Ampel gerade gelb leuchtet
	GELB_BLINKEND//!< Wenn die Ampel gerade gelb blinkt
} ampel_status;

/**
 * Ein Struct in welchem der aktuelle Status der Ampel abgespeichert wird.
 */
typedef struct {
	ampel_status status; //!< speichert den aktuellen Status
	int blink_zaehler; //!< zählt mit wie oft bereits geblinkt wurde
} ampelsteuerung_zustand;

/**
 * Diese Function repräsentiert die State Centric State Machine with Hidden Transitions
 *
 * Hier wird der genaue Ablauf definiert.
 *
 * @param ampel Der Zustand der Ampel.
 * @retval void None
 */
void ampelsteuerung(ampelsteuerung_zustand* ampel);

#endif /* STATE_MACHINE */
