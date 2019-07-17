// CLASSIFICATION: UNCLASSIFIED

#ifndef MercatorScaleFactorParameters_H
#define MercatorScaleFactorParameters_H

#include "geotrans/dtcc/CoordinateSystemParameters/CoordinateSystemParameters.h"
#include "geotrans/dtcc/DtccApi.h"

namespace MSP {
namespace CCS {
class MSP_DTCC_API MercatorScaleFactorParameters
    : public CoordinateSystemParameters {
 public:
  MercatorScaleFactorParameters();
  explicit MercatorScaleFactorParameters(CoordinateType::Enum _coordinateType);
  MercatorScaleFactorParameters(CoordinateType::Enum _coordinateType,
                                double __centralMeridian, double __scaleFactor,
                                double __falseEasting, double __falseNorthing);
  MercatorScaleFactorParameters(const MercatorScaleFactorParameters& p) = default;

  ~MercatorScaleFactorParameters();

  MercatorScaleFactorParameters& operator=(
      const MercatorScaleFactorParameters& p);

  void setCentralMeridian(double __centralMeridian);
  void setScaleFactor(double __scaleFactor);
  void setFalseEasting(double __falseEasting);
  void setFalseNorthing(double __falseNorthing);

  double centralMeridian() const;
  double scaleFactor() const;
  double falseEasting() const;
  double falseNorthing() const;

 private:
  double _centralMeridian;
  double _scaleFactor;
  double _falseEasting;
  double _falseNorthing;
};
}  // namespace CCS
}  // namespace MSP

#endif

// CLASSIFICATION: UNCLASSIFIED
