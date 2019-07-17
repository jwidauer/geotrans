// CLASSIFICATION: UNCLASSIFIED

#ifndef LocalCartesianParameters_H
#define LocalCartesianParameters_H

#include "geotrans/dtcc/CoordinateSystemParameters/CoordinateSystemParameters.h"
#include "geotrans/dtcc/DtccApi.h"

namespace MSP {
namespace CCS {
class MSP_DTCC_API LocalCartesianParameters
    : public CoordinateSystemParameters {
 public:
  LocalCartesianParameters();
  explicit LocalCartesianParameters(CoordinateType::Enum _coordinateType);
  LocalCartesianParameters(CoordinateType::Enum _coordinateType,
                           double __longitude, double __latitude,
                           double __height, double __orientation);
  LocalCartesianParameters(const LocalCartesianParameters& lcp) = default;

  ~LocalCartesianParameters();

  LocalCartesianParameters& operator=(const LocalCartesianParameters& lcp);

  void setLongitude(double __centralMeridian);
  void setLatitude(double __originLatitude);
  void setHeight(double __height);
  void setOrientation(double __orientation);

  double longitude() const;
  double latitude() const;
  double height() const;
  double orientation() const;

 private:
  double _longitude;
  double _latitude;
  double _height;
  double _orientation;
};
}  // namespace CCS
}  // namespace MSP

#endif

// CLASSIFICATION: UNCLASSIFIED
