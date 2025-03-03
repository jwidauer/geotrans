// CLASSIFICATION: UNCLASSIFIED

#ifndef PolarStereographicStandardParallelParameters_H
#define PolarStereographicStandardParallelParameters_H

#include "geotrans/dtcc/CoordinateSystemParameters/CoordinateSystemParameters.h"
#include "geotrans/dtcc/DtccApi.h"

namespace MSP {
namespace CCS {
class MSP_DTCC_API PolarStereographicStandardParallelParameters
    : public CoordinateSystemParameters {
 public:
  PolarStereographicStandardParallelParameters();
  explicit PolarStereographicStandardParallelParameters(
      CoordinateType::Enum _coordinateType);
  PolarStereographicStandardParallelParameters(
      CoordinateType::Enum _coordinateType, double __longitudeDownFromPole,
      double __latitudeOfTrueScale, double __falseEasting,
      double __falseNorthing);
  PolarStereographicStandardParallelParameters(
      const PolarStereographicStandardParallelParameters& p) = default;

  ~PolarStereographicStandardParallelParameters();

  PolarStereographicStandardParallelParameters& operator=(
      const PolarStereographicStandardParallelParameters& p);

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
