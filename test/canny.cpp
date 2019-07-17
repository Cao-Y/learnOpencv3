#include"stdafx.h"
#include<opencv2\imgproc\imgproc.hpp>
#include<opencv2\opencv.hpp>

using namespace cv;

int LearnCanny() {
	//载入原始图
	Mat srcImage = imread("D:/我的图片/my.png");
	imshow("(原始图", srcImage);
	Mat edge, grayImage;

	//转化为灰度图
	cvtColor(srcImage, grayImage, CV_BGR2GRAY);
    //先使用3x3内核来降噪
	blur(grayImage, edge, Size(7, 7));

	//运行Canny算子
	Canny(edge, edge, 3, 9, 3);

	//显示效果图
	imshow("Canny边缘检测", edge);
	
	waitKey(0);

	return 0;
}