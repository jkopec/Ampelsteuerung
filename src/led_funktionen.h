/**
 ******************************************************************************
 * @file		led_funktionen.h
 * @author		JakubKopec
 * @version		1.0
 * @date		2015-11-26
 * @brief		Definiert benötigte Functions.
 *
 * @bug		Bislang keine Fehler bekannt.
 ******************************************************************************
 */
#ifndef LED_FUNKTIONEN_H_
#define LED_FUNKTIONEN_H_

/**
 * Diese Function schaltet alle LEDs aus.
 *
 * @retval void None
 */
void led_reset();

/**
 * Diese Function schaltet die Rote LED ein und wartet anschliessend
 * zwei Sekunden.
 *
 * @retval void None
 */
void rote_led_an();

/**
 * Diese Function schaltet die rote und gelbe LED ein und wartet anschliessend
 * zwei Sekunden.
 *
 * @retval void None
 */
void rote_gelbe_led_an();

/**
 * Diese Function schaltet die gruene LED ein und wartet anschliessend
 * zwei Sekunden.
 *
 * @retval void None
 */
void gruene_led_an();

/**
 * Diese Function laesst die gruene LED blinken.
 *
 * @retval void None
 */
void gruene_led_blink();

/**
 * Diese Function schaltet die gelbe LED ein und wartet anschliessend
 * zwei Sekunden.
 *
 * @retval void None
 */
void gelbe_led_an();

/**
 * Diese Function laesst die gelbe LED blinken.
 *
 * @retval void None
 */
void gelbe_led_blink();

#endif /* LED_FUNKTIONEN_H_ */
