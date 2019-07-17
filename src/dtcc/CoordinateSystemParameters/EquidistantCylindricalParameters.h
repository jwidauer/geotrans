// CLASSIFICATION: UNCLASSIFIED

#ifndef EquidistantCylindricalParameters_H
#define EquidistantCylindricalParameters_H

#include "CoordinateSystemParameters.h"
#include "geotrans/dtcc/DtccApi.h"

namespace MSP {
namespace CCS {
class MSP_DTCC_API EquidistantCylindricalParameters
    : public CoordinateSystemParameters {
 public:
  EquidistantCylindricalParameters();
  explicit EquidistantCylindricalParameters(CoordinateType::Enum _coordinateType);
  EquidistantCylindricalParameters(CoordinateType::Enum _coordinateType,
                                   double __centralMeridian,
                                   double __standardParallel,
                                   double __falseEasting,
                                   double __falseNorthing);
  EquidistantCylindricalParameters(const EquidistantCylindricalParameters& ecp);

  ~EquidistantCylindricalParameters();

  EquidistantCylindricalParameters& operator=(
      const EquidistantCylindricalParameters& ecp);

  void setCentralMeridian(double __centralMeridian);
  void setStandardParallel(double __standardParallel);
  void setFalseEasting(double __falseEasting);
  void setFalseNorthing(double __falseNorthing);

  double centralMeridian() const;
  double standardParallel() const;
  double falseEasting() const;
  double falseNorthing() const;

 private:
  double _centralMeridian;
  double _standardParallel;
  double _falseEasting;
  double _falseNorthing;
};
}  // namespace CCS
}  // namespace MSP

#endif

// CLASSIFICATION: UNCLASSIFIED
