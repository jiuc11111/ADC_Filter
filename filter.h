#ifndef _FILTER_H_
#define _FILTER_H_
#include "main.h"

#define MAX_SENSOR_NUM 6   //ʹ���˲�ʱ�Ĵ���������
#define MAX_DATA_NUM 9     //�����������������������ڳ���
#define WINDOW_DATA_NUM 5  //�˲����ڳ���
//ȥ�����������������Сֵ������������ȥ����������������С 
#define REMOVE_MAXMIN_NUM ((MAX_DATA_NUM - WINDOW_DATA_NUM)/2)  
 
//extern double m_dataList[MAX_SENSOR_NUM][MAX_DATA_NUM];
 
//��������ĺ���
double Filter_SlidingWindowAvg(int index, double data);
 
#endif