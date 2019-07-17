#include"stdafx.h"
#include<opencv2\imgproc\imgproc.hpp>
#include<opencv2\opencv.hpp>

using namespace cv;

int LearnCanny() {
	//����ԭʼͼ
	Mat srcImage = imread("D:/�ҵ�ͼƬ/my.png");
	imshow("(ԭʼͼ", srcImage);
	Mat edge, grayImage;

	//ת��Ϊ�Ҷ�ͼ
	cvtColor(srcImage, grayImage, CV_BGR2GRAY);
    //��ʹ��3x3�ں�������
	blur(grayImage, edge, Size(7, 7));

	//����Canny����
	Canny(edge, edge, 3, 9, 3);

	//��ʾЧ��ͼ
	imshow("Canny��Ե���", edge);
	
	waitKey(0);

	return 0;
}