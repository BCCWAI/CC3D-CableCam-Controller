#ifndef ODRIVE_H_INCLUDED
#define ODRIVE_H_INCLUDED
#include "stm32f4xx_hal.h"
#include "config.h"


typedef enum {
	ODRIVE_UNKNOWN = 0,
	ODRIVE_MOTOR_CALIBRATED,
	ODRIVE_ENCODER_CALIBRATED,
	ODRIVE_SPEED_MODE,
	ODRIVE_CLOSED_LOOP,
	ODRIVE_OPERATIONAL
} ODRIVE_STATE_t;

typedef enum {
    ODRIVE_REQUESTED_NONE = 0,
    ODRIVE_REQUESTED_MOTOR_CALIBRATED,
    ODRIVE_REQUESTED_ENCODER_CALIBRATED,
    ODRIVE_REQUESTED_CLOSED_LOOP,
    ODRIVE_REQUESTED_SPEED_CONTROL_MODE,
    ODRIVE_REQUESTED_SPEED_LIMIT
} ODRIVE_REQUEST_t;


void ODRIVE_init(void);
void ODRIVE_Output(float esc_output);

void ODRIVE_request_values(void);
uint16_t ODRIVEReceive(void);
void ODRIVESendPacket(uint8_t *ptr, uint32_t len);
char * getCurrentODriveResponse(void);
ODRIVE_REQUEST_t getCurrentODriveValueType(void);


#endif /* ODRIVE_H_INCLUDED */
