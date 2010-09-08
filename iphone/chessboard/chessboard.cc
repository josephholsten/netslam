#define CHESSBOARD_SIZE 8

void frameCallback(void* imageBytes) {
  int numCorners, foundAll;
  int size = CHESSBOARD_SIZE - 1;
  int maxCorners = (size + 2) * (size + 2);
  CVArr* image = (CVArr*) imageBytes;

  CvSize patternSize(size, size);
  CvPoint2D32f corners[maxCorners];

  foundAll = cvFindChessboardCorners(image, size, corners, &numCorners);
  cvDrawChessboardCorners(image, size, corners, numCorners, foundAll);
}
