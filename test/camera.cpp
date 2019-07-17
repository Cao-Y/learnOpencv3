#include"stdafx.h"
#include<opencv2\opencv.hpp>

using namespace cv;

int LearnCamera() {
	//从摄像头读入视频
	VideoCapture capture(0);
	Mat edges;
	while (1) {
		Mat frame;
		//读取当前帧
		capture >> frame;

		//转化为灰度图
		cvtColor(frame, edges, COLOR_BGR2GRAY);
		//先使用3x3内核来降噪
		blur(edges, edges, Size(7, 7));

		//运行Canny算子
		Canny(edges, edges, 0, 30, 3);

		//显示当前帧
		imshow("canny后的视频",edges);
		waitKey(30);
	}
	return 0;
}