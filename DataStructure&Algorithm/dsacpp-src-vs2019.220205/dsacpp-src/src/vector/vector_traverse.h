/******************************************************************************************
 * Data Structures in C++
 * ISBN: 7-302-33064-6 & 7-302-33065-3 & 7-302-29652-2 & 7-302-26883-3
 * Junhui DENG, deng@tsinghua.edu.cn
 * Computer Science & Technology, Tsinghua University
 * Copyright (c) 2003-2021. All rights reserved.
 ******************************************************************************************/

#pragma once

template <typename T> void Vector<T>::traverse ( void ( *visit ) ( T& ) ) //��������ָ�����
{ for ( Rank i = 0; i < _size; i++ ) visit ( _elem[i] ); } //��������

template <typename T> template <typename VST> //Ԫ�����͡�������
void Vector<T>::traverse ( VST& visit ) //���������������
{ for ( Rank i = 0; i < _size; i++ ) visit ( _elem[i] ); } //��������