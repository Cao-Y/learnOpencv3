#include"stdafx.h"
#include<opencv2\opencv.hpp>

using namespace cv;

int LearnVideo() {
	VideoCapture capture("D:/海参/GOPR0005.MP4");

	while (1) {
		Mat frame;
		//读取当前帧
		capture >> frame;

		//若视频播放完成，退出循环
		if (frame.empty()) {
			break;
		}
		imshow("video", frame);

		waitKey(30);

	}




	return 0;
}