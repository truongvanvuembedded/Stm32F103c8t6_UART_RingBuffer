
//==================================================================================================
//
// 	File Name		Ring_Buffer.h
//	Customer
//	Coding			V.Vu
//	History			Ver.0.01	2025.02.05	V.Vu New
//	Outline			Ring Buffer header file
//
//==================================================================================================
//==================================================================================================
//	Local Compile Option
//==================================================================================================
#ifndef RING_BUFFER_H
#define RING_BUFFER_H

#include "Define.h"
//==================================================================================================
//	define
//==================================================================================================
typedef struct
{
	U2	u2_Head;			// Head index
	U2	u2_Tail;			// Tail index
	U2	u2_SizeFilled;		// Buffer size
	U2	u2_BufferSize;		// Buffer filled
	U1	*pu1_Buffer;		// Buffer
}ST_RING_BUFFER;

//==================================================================================================
//	Function Prototype
//==================================================================================================
void RingBuffer_Init(ST_RING_BUFFER *apst_RingBuffer, U1 *apu1_Buffer, U2 au2_Len);
void RingBuffer_Put_Data(ST_RING_BUFFER *apst_RingBuffer, U1 au1_Data);
U1 u1_RingBuffer_Get_Data(ST_RING_BUFFER *apst_RingBuffer, U1 *apu1_Data);
U1 u1_RingBufferIsFull(ST_RING_BUFFER *apst_RingBuffer);
U1 u1_RingBufferIsEmpty(ST_RING_BUFFER *apst_RingBuffer);
U1 *pu1_GetWritePointer(ST_RING_BUFFER *apst_RingBuffer);
U1 u1_GetReadPointer(ST_RING_BUFFER *apst_RingBuffer, U1 *apu1_Rxbuff);
#endif	/* RING_BUFFER_H */
/* ************************************* End of File ******************************************** */

