// CLASSIFICATION: UNCLASSIFIED

#ifndef MapProjection5Parameters_H
#define MapProjection5Parameters_H

#include "geotrans/dtcc/CoordinateSystemParameters/CoordinateSystemParameters.h"
#include "geotrans/dtcc/DtccApi.h"

namespace MSP {
namespace CCS {
class MSP_DTCC_API MapProjection5Parameters
    : public CoordinateSystemParameters {
 public:
  MapProjection5Parameters();
  explicit MapProjection5Parameters(CoordinateType::Enum _coordinateType);
  MapProjection5Parameters(CoordinateType::Enum _coordinateType,
                           double __centralMeridian, double __originLatitude,
                           double __scaleFactor, double __falseEasting,
                           double __falseNorthing);
  MapProjection5Parameters(const MapProjection5Parameters& p) = default;

  ~MapProjection5Parameters();

  MapProjection5Parameters& operator=(const MapProjection5Parameters& p);

  void setCentralMeridian(double __centralMeridian);
  void setOriginLatitude(double __originLatitude);
  void setScaleFactor(double __scaleFactor);
  void setFalseEasting(double __falseEasting);
  void setFalseNorthing(double __falseNorthing);

  double centralMeridian() const;
  double originLatitude() const;
  double scaleFactor() const;
  double falseEasting() const;
  double falseNorthing() const;

 private:
  double _centralMeridian;
  double _originLatitude;
  double _scaleFactor;
  double _falseEasting;
  double _falseNorthing;
};
}  // namespace CCS
}  // namespace MSP

#endif

// CLASSIFICATION: UNCLASSIFIED
