#include "main.h"
#include "app/Controller.h"
#include "stm32f0xx_it.h"
extern CAN_RxHeaderTypeDef myRxMessage;

extern "C" void HAL_SPI_RxCpltCallback(SPI_HandleTypeDef *hspi)
{
	HAL_GPIO_TogglePin(LED_6_GPIO_Port, LED_6_Pin);
	Controller::getInstance()->onIrqSPI();
}


extern "C" void HAL_CAN_RxFifo0MsgPendingCallback(CAN_HandleTypeDef *hcan)
{
	//Controller::getInstance()->readCANItFrame();
	HAL_GPIO_TogglePin(LED_3_GPIO_Port, LED_3_Pin);
	Controller::getInstance()->onIrqCAN();
}


