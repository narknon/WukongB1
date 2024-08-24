#include "CLSSkyLightData.h"

FCLSSkyLightData::FCLSSkyLightData() {
    this->bValid = false;
    this->Intensity = 0.00f;
    this->bAffectsWorld = false;
    this->CastShadows = false;
    this->CastStaticShadows = false;
    this->CastDynamicShadows = false;
    this->bAffectTranslucentLighting = false;
    this->bTransmission = false;
    this->bCastVolumetricShadow = false;
    this->bCastDeepShadow = false;
    this->CastRaytracedShadow = ECastRayTracedShadow::Disabled;
    this->bAffectReflection = false;
    this->bAffectGlobalIllumination = false;
    this->DeepShadowLayerDistribution = 0.00f;
    this->IndirectLightingIntensity = 0.00f;
    this->VolumetricScatteringIntensity = 0.00f;
    this->SamplesPerPixel = 0;
    this->bRealTimeCapture = false;
    this->SourceType = SLS_CapturedScene;
    this->Cubemap = NULL;
    this->bCaptureSceneForReflection = false;
    this->SourceCubemapAngle = 0.00f;
    this->CubemapResolution = 0;
    this->SkyDistanceThreshold = 0.00f;
    this->bCaptureEmissiveOnly = false;
    this->bLowerHemisphereIsBlack = false;
    this->OcclusionMaxDistance = 0.00f;
    this->Contrast = 0.00f;
    this->OcclusionExponent = 0.00f;
    this->MinOcclusion = 0.00f;
    this->bCloudAmbientOcclusion = false;
    this->CloudAmbientOcclusionStrength = 0.00f;
    this->CloudAmbientOcclusionExtent = 0.00f;
    this->CloudAmbientOcclusionMapResolutionScale = 0.00f;
    this->CloudAmbientOcclusionApertureScale = 0.00f;
    this->OcclusionCombineMode = OCM_Minimum;
}

