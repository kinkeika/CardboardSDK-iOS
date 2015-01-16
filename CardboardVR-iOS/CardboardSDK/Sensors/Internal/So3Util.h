//
//  So3Util.h
//  CardboardVR-iOS
//

#ifndef __CardboardVR_iOS__So3Util__
#define __CardboardVR_iOS__So3Util__

#include "Vector3d.h"
#include "Matrix3x3d.h"

class So3Util
{
  public:
    static void sO3FromTwoVec(Vector3d *a, Vector3d *b, Matrix3x3d *result);
    static void rotationPiAboutAxis(Vector3d *v, Matrix3x3d *result);
    static void sO3FromMu(Vector3d *w, Matrix3x3d *result);
    static void muFromSO3(Matrix3x3d *so3, Vector3d *result);
    static void rodriguesSo3Exp(Vector3d *w, double kA, double kB, Matrix3x3d *result);
    static void generatorField(int i, Matrix3x3d *pos, Matrix3x3d *result);
};

#endif
