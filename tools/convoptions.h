#ifndef __CONVOPTIONS_H_
#define __CONVOPTIONS_H_

#include <openctm.h>


typedef enum {
  uaX, uaY, uaZ, uaNX, uaNY, uaNZ
} UpAxis;

class Options {
  public:
    /// Constructor
    Options();

    /// Get options from the command line arguments
    void GetFromArgs(int argc, char **argv, int aStartIdx);

    UpAxis mUpAxis;
    CTMenum mMethod;
    CTMfloat mVertexPrecision;
    CTMfloat mVertexPrecisionRel;
    CTMfloat mTexMapPrecision;
    CTMfloat mColorPrecision;
};

#endif // __CONVOPTIONS_H_