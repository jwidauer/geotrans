// CLASSIFICATION: UNCLASSIFIED

#ifndef GeodeticParameters_H
#define GeodeticParameters_H

#include "geotrans/dtcc/CoordinateSystemParameters/CoordinateSystemParameters.h"
#include "geotrans/dtcc/Enumerations/HeightType.h"
#include "geotrans/dtcc/DtccApi.h"

namespace MSP {
namespace CCS {
class MSP_DTCC_API GeodeticParameters : public CoordinateSystemParameters {
 public:
  GeodeticParameters();
  explicit GeodeticParameters(CoordinateType::Enum _coordinateType);
  GeodeticParameters(CoordinateType::Enum _coordinateType,
                     HeightType::Enum __heightType);
  GeodeticParameters(const GeodeticParameters& gp) = default;

  ~GeodeticParameters();

  GeodeticParameters& operator=(const GeodeticParameters& gp);

  void setHeightType(HeightType::Enum __heightType);

  HeightType::Enum heightType() const;

 private:
  HeightType::Enum _heightType;
};
}  // namespace CCS
}  // namespace MSP

#endif

// CLASSIFICATION: UNCLASSIFIED
