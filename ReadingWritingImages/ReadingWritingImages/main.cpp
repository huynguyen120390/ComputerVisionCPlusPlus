//
//  main.cpp
//  ReadingWritingImages
//
//  Created by Huy Nguyen on 9/1/19.
//  Copyright © 2019 Huy Nguyen. All rights reserved.
//

#include <iostream>
#include <opencv2/core.hpp>
#include <opencv2/highgui.hpp>
using namespace cv;
using namespace std;


int main(int argc, const char * argv[]) {
    // insert code here...
    Mat colorImage = imread("/Users/huynguyen/CodeLab/GitProjects/ComputerVisionCPlusPlus/ReadingWritingImages/Image/dog.jpg");
    
    if(!colorImage.data){
        cout << "Cannot open Image\n";
        return -1;
    }
    
    imwrite("/Users/huynguyen/CodeLab/GitProjects/ComputerVisionCPlusPlus/ReadingWritingImages/Image/coloredDog.jpg",colorImage);
    imshow("Color Dog",colorImage);
    waitKey(0);
    
    return 0;
}
