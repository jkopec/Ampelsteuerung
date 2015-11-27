/**
 ******************************************************************************
 * @file		main.c
 * @author		JakubKopec
 * @version		1.0
 * @date		2015-11-26
 * @brief		Startet die Ampelsteuerung
 *
 * @bug		Bislang keine Fehler bekannt.
 ******************************************************************************
 */
//inkludieren der gegebenen .h-Files
#include "stm32f3xx.h"
#include "stm32f3_discovery.h"
//inkludieren des selbst geschriebenen .h-Files
#include "state_machine.h"

ampelsteuerung_zustand ampel; //!< Variable für den Zustand der Ampel definieren

/**
 * Die Main-Function initialisiert den STM + LEDs und führt im
 * Endeffekt die Ampelsteuerung aus.
 *
 * @retval void None
 */
int main(void) {
	//STM initialisieren
	SystemInit();

	//bestimmen wie schnell das Programm ablaufen soll
	SystemCoreClockUpdate();
	SysTick_Config(SystemCoreClock / 1000);

	//LEDs initialisieren
	BSP_LED_Init(LED_RED);
	BSP_LED_Init(LED_ORANGE);
	BSP_LED_Init(LED_GREEN_2);

	ampelsteuerung_zustand* licht = &ampel;

	//in dieser Schleife wird nun die State Machine ausgeführt
	while (true) {
		ampelsteuerung(licht);
	}

	return EXIT_SUCCESS;
}
