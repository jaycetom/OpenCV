#include <iostream>
#include "opencv2/opencv.hpp"
using namespace std;
using namespace cv;


int main() {
    Mat img_rgb,img_gray,img_hsv,img_gray2rgb,img_hsv2rgb;
    //导入向日葵图像
    img_rgb= imread("sun.jpg");
    cvtColor(img_rgb,img_hsv,COLOR_BGR2HSV);
    cvtColor(img_hsv,img_hsv2rgb, COLOR_HSV2RGB);
    cvtColor(img_rgb,img_gray,COLOR_BGR2GRAY);
    cvtColor(img_gray,img_gray2rgb,COLOR_GRAY2BGR);
    imshow("RGB",img_rgb); //显示rgb的值
    imshow("RGB to HSV",img_hsv);//显示rgb图转hsv的图
    imshow("HSV to RGB",img_hsv2rgb);//显示hsv转换为rgb的图
    imshow("RGB to GRAY",img_gray);//显示由色彩图转为灰度图
    imshow("GRAY to RGB",img_gray2rgb);//由灰度图变为色彩图
    //下面来输出各个色彩空间的通道数（用来描述图片的信息）
    cout<<"RGB image 通道数:"<<img_rgb.channels()<<endl;
    cout<<"HSV image 通道数:"<<img_hsv.channels()<<endl;
    cout<<"gray image 通道数:"<<img_gray.channels()<<endl;
    waitKey(0);
    return 0;

}
