/*
 * BangBangController.c
 *
 *  Created on: Jun 12, 2015
 *      Author: Erik
 */

#include "main.h"

BangBangController initBangBangController(int onSpeed, int offSpeed, double setPoint)
{
	BangBangController newController = {onSpeed, offSpeed, setPoint};
	return newController;
}

void changeSetPoint(BangBangController controller, double setPoint)
{
	controller.setPoint = setPoint;
}

int runBangBangController(BangBangController controller, double processVariable)
{
	printf("SP: %f\n", controller.setPoint);

	return ((processVariable < controller.setPoint) ?
			controller.onSpeed : controller.offSpeed);
}

int getError(BangBangController controller, int processVariable)
{
	return controller.setPoint - processVariable;
}
