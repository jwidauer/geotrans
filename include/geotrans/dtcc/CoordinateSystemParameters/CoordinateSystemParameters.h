// CLASSIFICATION: UNCLASSIFIED

#ifndef CoordinateSystemParameters_H
#define CoordinateSystemParameters_H

#include "geotrans/dtcc/DtccApi.h"
#include "geotrans/dtcc/Enumerations/CoordinateType.h"

namespace MSP {
namespace CCS {
class MSP_DTCC_API CoordinateSystemParameters {
 public:
  CoordinateSystemParameters();
  CoordinateSystemParameters(MSP::CCS::CoordinateType::Enum __coordinateType);
  CoordinateSystemParameters(const CoordinateSystemParameters& csp);

  virtual ~CoordinateSystemParameters();

  CoordinateSystemParameters& operator=(const CoordinateSystemParameters& csp);

  void setCoordinateType(MSP::CCS::CoordinateType::Enum __coordinateType);
  CoordinateType::Enum coordinateType() const;

 protected:
  CoordinateType::Enum _coordinateType;
};
}  // namespace CCS
}  // namespace MSP

#endif

// CLASSIFICATION: UNCLASSIFIED
