#include"stdafx.h"
#include<opencv2\opencv.hpp>

using namespace cv;

int LearnCamera() {
	//������ͷ������Ƶ
	VideoCapture capture(0);
	Mat edges;
	while (1) {
		Mat frame;
		//��ȡ��ǰ֡
		capture >> frame;

		//ת��Ϊ�Ҷ�ͼ
		cvtColor(frame, edges, COLOR_BGR2GRAY);
		//��ʹ��3x3�ں�������
		blur(edges, edges, Size(7, 7));

		//����Canny����
		Canny(edges, edges, 0, 30, 3);

		//��ʾ��ǰ֡
		imshow("canny�����Ƶ",edges);
		waitKey(30);
	}
	return 0;
}