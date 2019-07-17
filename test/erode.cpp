#include"stdafx.h"
#include"opencv2/highgui/highgui.hpp"
#include"opencv2/imgproc/imgproc.hpp"
using namespace cv;

int LearnErode() {
	Mat src = imread("D:/我的图片/ccf-1.png");
	if (src.empty()) {
		printf("could not found image!");
		return -1;
	}
	cvNamedWindow("腐蚀前", CV_WINDOW_AUTOSIZE);
	imshow("腐蚀前", src);
	//进行腐蚀操作
	Mat element = getStructuringElement(MORPH_RECT, Size(15, 15));
	Mat dstImage;
	erode(src, dstImage, element);
	//显示效果图
	imshow("腐蚀后", dstImage);
	waitKey(0);
	return -0;
}
