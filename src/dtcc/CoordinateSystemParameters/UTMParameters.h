// CLASSIFICATION: UNCLASSIFIED

#ifndef UTMParameters_H
#define UTMParameters_H

#include "geotrans/dtcc/CoordinateSystemParameters/CoordinateSystemParameters.h"
#include "geotrans/dtcc/DtccApi.h"

namespace MSP {
namespace CCS {
class MSP_DTCC_API UTMParameters : public CoordinateSystemParameters {
 public:
  UTMParameters();
  explicit UTMParameters(CoordinateType::Enum _coordinateType);
  UTMParameters(CoordinateType::Enum _coordinateType, long __override);
  UTMParameters(CoordinateType::Enum _coordinateType, long __zone,
                long __override);
  UTMParameters(const UTMParameters& p) = default;

  ~UTMParameters();

  UTMParameters& operator=(const UTMParameters& p);

  void set(long __zone, long __override);
  void setZone(long __zone);
  void setOverride(long __override);

  long zone() const;
  long override() const;

 private:
  long _zone;
  long _override;
};
}  // namespace CCS
}  // namespace MSP

#endif

// CLASSIFICATION: UNCLASSIFIED
