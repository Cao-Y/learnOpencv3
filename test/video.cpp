#include"stdafx.h"
#include<opencv2\opencv.hpp>

using namespace cv;

int LearnVideo() {
	VideoCapture capture("D:/����/GOPR0005.MP4");

	while (1) {
		Mat frame;
		//��ȡ��ǰ֡
		capture >> frame;

		//����Ƶ������ɣ��˳�ѭ��
		if (frame.empty()) {
			break;
		}
		imshow("video", frame);

		waitKey(30);

	}




	return 0;
}