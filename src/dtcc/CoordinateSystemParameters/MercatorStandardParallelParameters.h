// CLASSIFICATION: UNCLASSIFIED

#ifndef MercatorStandardParallelParameters_H
#define MercatorStandardParallelParameters_H

#include "geotrans/dtcc/CoordinateSystemParameters/CoordinateSystemParameters.h"
#include "geotrans/dtcc/DtccApi.h"

namespace MSP {
namespace CCS {
class MSP_DTCC_API MercatorStandardParallelParameters
    : public CoordinateSystemParameters {
 public:
  MercatorStandardParallelParameters();
  explicit MercatorStandardParallelParameters(CoordinateType::Enum _coordinateType);
  MercatorStandardParallelParameters(CoordinateType::Enum _coordinateType,
                                     double __centralMeridian,
                                     double __standardParallel,
                                     double __scaleFactor,
                                     double __falseEasting,
                                     double __falseNorthing);
  MercatorStandardParallelParameters(
      const MercatorStandardParallelParameters& p) = default;

  ~MercatorStandardParallelParameters();

  MercatorStandardParallelParameters& operator=(
      const MercatorStandardParallelParameters& p);

  void setCentralMeridian(double __centralMeridian);
  void setStandardParallel(double __standardParallel);
  void setScaleFactor(double __scaleFactor);
  void setFalseEasting(double __falseEasting);
  void setFalseNorthing(double __falseNorthing);

  double centralMeridian() const;
  double standardParallel() const;
  double scaleFactor() const;
  double falseEasting() const;
  double falseNorthing() const;

 private:
  double _centralMeridian;
  double _standardParallel;
  double _scaleFactor;
  double _falseEasting;
  double _falseNorthing;
};
}  // namespace CCS
}  // namespace MSP

#endif

// CLASSIFICATION: UNCLASSIFIED
