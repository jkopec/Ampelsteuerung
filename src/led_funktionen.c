/**
 ******************************************************************************
 * @file		led_funktionen.c
 * @author		JakubKopec
 * @version		1.0
 * @date		2015-11-26
 * @brief		Enthält alle LED Funktionalität.
 *
 * @bug		Bislang keine Fehler bekannt.
 ******************************************************************************
 */
//inkludieren der gegebenen .h-Files
#include "stm32f3xx.h"
#include "stm32f3_discovery.h"
//inkludieren des selbst geschriebenen .h-Files

#include "led_funktionen.h"
/**
 * Diese Function schaltet alle LEDs aus.
 *
 * @retval void None
 */
void led_reset() {
	BSP_LED_Off(LED_RED); //rote LED ausschalten
	BSP_LED_Off(LED_ORANGE); //orange LED ausschalten
	BSP_LED_Off(LED_GREEN_2); //gruene LED ausschalten
}

/**
 * Diese Function schaltet die Rote LED ein und wartet anschliessend
 * zwei Sekunden.
 *
 * @retval void None
 */
void rote_led_an() {
	led_reset(); //Zuerst alle LEDs ausschalten
	BSP_LED_On(LED_RED); //Rote LED einschalten
	HAL_Delay(2000); //zwei Sekunden warten
}

/**
 * Diese Function schaltet die rote und gelbe LED ein und wartet anschliessend
 * zwei Sekunden.
 *
 * @retval void None
 */
void rote_gelbe_led_an() {
	led_reset(); //Zuerst alle LEDs ausschalten
	BSP_LED_On(LED_RED); //Rote LED einschalten
	BSP_LED_On(LED_ORANGE); //Gelbe LED einschalten
	HAL_Delay(2000); //zwei Sekunden warten
}

/**
 * Diese Function schaltet die gruene LED ein und wartet anschliessend
 * zwei Sekunden.
 *
 * @retval void None
 */
void gruene_led_an() {
	led_reset(); //Zuerst alle LEDs ausschalten
	BSP_LED_On(LED_GREEN_2); //Gruene LED einschalten
	HAL_Delay(2000); //zwei Sekunden warten
}

/**
 * Diese Function laesst die gruene LED blinken.
 *
 * @retval void None
 */
void gruene_led_blink() {
	led_reset(); //Zuerst alle LEDs ausschalten

	BSP_LED_On(LED_GREEN_2); //Gruene LED einschalten
	HAL_Delay(500); //eine halbe Sekunde warten
	BSP_LED_Off(LED_GREEN_2); //Gruene LED ausschalten
	HAL_Delay(500); //eine halbe Sekunde warten
}

/**
 * Diese Function schaltet die gelbe LED ein und wartet anschliessend
 * zwei Sekunden.
 *
 * @retval void None
 */
void gelbe_led_an() {
	led_reset(); //Zuerst alle LEDs ausschalten
	BSP_LED_On(LED_ORANGE); //Gelbe LED einschalten
	HAL_Delay(2000); //zwei Sekunden warten
}

/**
 * Diese Function laesst die gelbe LED blinken.
 *
 * @retval void None
 */
void gelbe_led_blink() {
	led_reset(); //Zuerst alle LEDs ausschalten

	BSP_LED_On(LED_ORANGE);//Gelbe LED einschalten
	HAL_Delay(500);//halbe Sekunde warten
	BSP_LED_Off(LED_ORANGE);//Gelbe LED ausschalten
	HAL_Delay(500);//halbe Sekunde warten
}
