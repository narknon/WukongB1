#include "GSNiagaraRVTSampler.h"

struct FGSNiagaraRVTSamplerCS : public FNiagaraDataInterfaceParametersCS
{
    DECLARE_TYPE_LAYOUT(FGSNiagaraRVTSamplerCS, NonVirtual);
public:
    void Bind(const FNiagaraDataInterfaceGPUParamInfo& ParameterInfo, const class FShaderParameterMap& ParameterMap)
    {
		
    }

    void Set(FRHICommandList& RHICmdList, const FNiagaraDataInterfaceSetArgs& Context) const
    {
		
    }

    void Unset(FRHICommandList& RHICmdList, const FNiagaraDataInterfaceSetArgs& Context) const
    {
    }

private:

};

IMPLEMENT_TYPE_LAYOUT(FGSNiagaraRVTSamplerCS);

IMPLEMENT_NIAGARA_DI_PARAMETER(UGSNiagaraRVTSampler, FGSNiagaraRVTSamplerCS);

UGSNiagaraRVTSampler::UGSNiagaraRVTSampler() {
    this->VirtualTexture = NULL;
}


