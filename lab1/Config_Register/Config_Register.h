#ifndef CONFIG_REGISTER_CONFIG_REGISTER_H_
#define CONFIG_REGISTER_CONFIG_REGISTER_H_

void PortF_Init(void);
//void PortFIntHandle();
void Interrupt_GPIO_Init();
//void Systick_Handle();
void Systick_Init();
//void UARTIntHandler(void);
void Uart_Init(void);
//void Timer0Handle();
void Timer_Init();

#endif /* CONFIG_REGISTER_CONFIG_REGISTER_H_ */
