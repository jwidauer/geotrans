// CLASSIFICATION: UNCLASSIFIED

#ifndef UPSCoordinates_H
#define UPSCoordinates_H

#include "geotrans/dtcc/CoordinateTuples/CoordinateTuple.h"
#include "geotrans/dtcc/DtccApi.h"

namespace MSP {
namespace CCS {
class MSP_DTCC_API UPSCoordinates : public CoordinateTuple {
 public:
  UPSCoordinates();
  UPSCoordinates(CoordinateType::Enum _coordinateType);
  UPSCoordinates(CoordinateType::Enum _coordinateType, char __hemisphere,
                 double __easting, double __northing);
  UPSCoordinates(CoordinateType::Enum _coordinateType,
                 const char* __warningMessage, char __hemisphere,
                 double __easting, double __northing);
  UPSCoordinates(const UPSCoordinates& c) = default;

  ~UPSCoordinates() = default;

  UPSCoordinates& operator=(const UPSCoordinates& c);

  void set(char __hemisphere, double __easting, double __northing);

  char hemisphere() const;
  double easting() const;
  double northing() const;

 private:
  char _hemisphere;
  double _easting;
  double _northing;
};
}  // namespace CCS
}  // namespace MSP

#endif

// CLASSIFICATION: UNCLASSIFIED
