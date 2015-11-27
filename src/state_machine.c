/**
 ******************************************************************************
 * @file		state_machine.c
 * @author		JakubKopec
 * @version		1.0
 * @date		2015-11-26
 * @brief		State Centric State Machine with Hidden Transitions
 *
 * @bug		Bislang keine Fehler bekannt.
 ******************************************************************************
 */
#include "state_machine.h"
/**
 * Diese Function repräsentiert die State Centric State Machine with Hidden Transitions
 *
 * Hier wird der genaue Ablauf definiert.
 *
 * @param ampel Der Zustand der Ampel.
 * @retval void None
 */
void ampelsteuerung(ampelsteuerung_zustand* ampel) {
	//je nach aktuellem Status wird der jeweilige "case" ausgeführt
	switch (ampel->status) {

	case ROT://wenn Status = ROT
		rote_led_an();//rote LED an
		ampel->status = ROT_GELB;//auf naechsten status setzen
		break;

	case ROT_GELB://wenn Status = ROT_GELB
		rote_gelbe_led_an();//rote und gelbe LED an
		ampel->status = GRUEN;//auf naechsten Status setzen
		break;

	case GRUEN://wenn Status = GRUEN
		gruene_led_an();//gruene LED an
		ampel->status = GRUEN_BLINKEND;//auf naechsten status setzen
		break;

	case GRUEN_BLINKEND://wenn Status = GRUEN_BLINKEND
		if (ampel->blink_zaehler <= 3) { //drei Mal blinken lassen
			gruene_led_blink(); //gruene LED ein Mal blinken lassen
			ampel->blink_zaehler += 1; //blink_zaehler erhoehen
		} else {//wenn bereits drei Mal geblink wurde
			ampel->status = GELB;//auf naechsten Status setzen
			ampel->blink_zaehler = 0;//blink_zaehler auf null zuruecksetzen
		}
		break;

	case GELB://wenn Status = GELB
		gelbe_led_an();//gelbe LED an
		ampel->status = ROT;//auf naechsten Status setzen
		break;

	case GELB_BLINKEND://wenn Status = GELB_BLINKEND
		gelbe_led_blink();//gelbe LED ein Mal blinken lassen
		ampel->status = GELB_BLINKEND;//auf naechsten Status setzen
		break;

	default://wenn kein Status gesetzt ist
		ampel->status = ROT;//Status auf ROT setzen
		break;
	}
}
