#include "PluginManager/ModuleDef.h"

#include "FWCore/Framework/interface/MakerMacros.h"

#include "RecoMET/METProducers/interface/TowerMETProducer.h"
#include "RecoMET/METProducers/interface/METProducer.h"

using cms::TowerMETProducer;
using cms::METProducer;

DEFINE_SEAL_MODULE();

DEFINE_ANOTHER_FWK_MODULE(TowerMETProducer)
DEFINE_ANOTHER_FWK_MODULE(METProducer)
