// CLASSIFICATION: UNCLASSIFIED

#ifndef MapProjectionCoordinates_H
#define MapProjectionCoordinates_H

#include "geotrans/dtcc/CoordinateTuples/CoordinateTuple.h"
#include "geotrans/dtcc/DtccApi.h"

namespace MSP {
namespace CCS {
class MSP_DTCC_API MapProjectionCoordinates : public CoordinateTuple {
 public:
  MapProjectionCoordinates();
  MapProjectionCoordinates(CoordinateType::Enum _coordinateType);
  MapProjectionCoordinates(CoordinateType::Enum _coordinateType,
                           double __easting, double __northing);
  MapProjectionCoordinates(CoordinateType::Enum _coordinateType,
                           const char* __warningMessage, double __easting,
                           double __northing);
  MapProjectionCoordinates(const MapProjectionCoordinates& c) = default;

  ~MapProjectionCoordinates() = default;

  MapProjectionCoordinates& operator=(const MapProjectionCoordinates& c);

  void set(double __easting, double __northing);

  void setEasting(double __easting);
  double easting() const;

  void setNorthing(double __northing);
  double northing() const;

 private:
  double _easting;
  double _northing;
};
}  // namespace CCS
}  // namespace MSP

#endif

// CLASSIFICATION: UNCLASSIFIED
