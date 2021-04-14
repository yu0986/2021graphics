#include <opencv/highgui.h>

int main()

{

    IplImage * img = cvLoadImage("photo.jpg");

    cvShowImage("photo",img);

    cvWaitKey(0);
}
