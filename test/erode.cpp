#include"stdafx.h"
#include"opencv2/highgui/highgui.hpp"
#include"opencv2/imgproc/imgproc.hpp"
using namespace cv;

int LearnErode() {
	Mat src = imread("D:/�ҵ�ͼƬ/ccf-1.png");
	if (src.empty()) {
		printf("could not found image!");
		return -1;
	}
	cvNamedWindow("��ʴǰ", CV_WINDOW_AUTOSIZE);
	imshow("��ʴǰ", src);
	//���и�ʴ����
	Mat element = getStructuringElement(MORPH_RECT, Size(15, 15));
	Mat dstImage;
	erode(src, dstImage, element);
	//��ʾЧ��ͼ
	imshow("��ʴ��", dstImage);
	waitKey(0);
	return -0;
}
