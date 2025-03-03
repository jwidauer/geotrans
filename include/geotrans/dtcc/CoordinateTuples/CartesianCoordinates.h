// CLASSIFICATION: UNCLASSIFIED

#ifndef CartesianCoordinates_H
#define CartesianCoordinates_H

#include "geotrans/dtcc/CoordinateTuples/CoordinateTuple.h"
#include "geotrans/dtcc/DtccApi.h"

namespace MSP {
namespace CCS {
class MSP_DTCC_API CartesianCoordinates : public CoordinateTuple {
 public:
  CartesianCoordinates();
  CartesianCoordinates(CoordinateType::Enum _coordinateType);
  CartesianCoordinates(CoordinateType::Enum _coordinateType, double __x,
                       double __y, double __z);
  CartesianCoordinates(CoordinateType::Enum _coordinateType,
                       const char* __warningMessage, double __x, double __y,
                       double __z);
  CartesianCoordinates(const CartesianCoordinates& cc) = default;

  ~CartesianCoordinates() = default;

  CartesianCoordinates& operator=(const CartesianCoordinates& cc);

  void set(double __x, double __y, double __z);
  void setX(double __x);
  void setY(double __y);
  void setZ(double __z);

  double x() const;
  double y() const;
  double z() const;

 private:
  double _x;
  double _y;
  double _z;
};
}  // namespace CCS
}  // namespace MSP

#endif

// CLASSIFICATION: UNCLASSIFIED
