#include"stdafx.h"
#include"opencv2/highgui/highgui.hpp"
#include"opencv2/imgproc/imgproc.hpp"
using namespace cv;

int LearnBlur() {
	//����ԭͼ
	Mat srcImage = imread("D:/�ҵ�ͼƬ/ccf-1.png");
	//��ʾԭͼ
	imshow("��ֵ�˲���ԭͼ��", srcImage);
	//���о�ֵ�˲�����
	Mat dstImage;
	blur(srcImage, dstImage, Size(7, 7));

	//��ʾЧ��ͼ
	imshow("��ֵ�˲���Ч��ͼ��", dstImage);
	waitKey(0);

	return 0;

}
