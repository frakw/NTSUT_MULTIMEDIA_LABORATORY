//#include <opencv2/opencv.hpp>
//#include<iostream>
//using namespace std;
//using namespace cv;
//
//
//int main()
//{
//	Mat img = imread("image.jpg", 0);
//	double scale = 0.2;
//	// �Ϥ��Ӥj���Y�p
//	resize(img, img, Size(0, 0), scale, scale);
//
//	// do something
//
//
//
//	Mat labels;
//	int number_labels = connectedComponents(img, labels);
//	cout << "�@��: " << number_labels - 1;
//
//	imshow("origin_img", img);
//	waitKey(0);
//}