# STM32 UART Ringbuffer Example

This project demonstrates how to implement and use a custom UART ring buffer (circular buffer) on STM32 microcontrollers. It aims to provide a simple and reusable way to handle asynchronous UART data reception and transmission without losing data due to buffer overflows.

## 🚀 Features

- Custom UART Ringbuffer library (self-developed)
- Non-blocking UART receive using interrupt (USARTx_IRQHandler)
- Circular buffer for smooth data streaming
- Simple API to integrate with user applications
- Platform: STM32 (tested on STM32F103C8T6)

## 📁 Folder contain Ringbuffer Lib
/workspaces/Stm32F103c8t6_UART_RingBuffer/Core/RingBuffer

🧑‍💻 Author
Truong Van Vu 

📄 License
This project is licensed under the MIT License.