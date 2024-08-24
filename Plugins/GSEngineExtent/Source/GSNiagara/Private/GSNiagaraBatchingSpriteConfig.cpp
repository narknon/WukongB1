#include "GSNiagaraBatchingSpriteConfig.h"

struct FGSNiagaraBatchingSpriteConfigCS : public FNiagaraDataInterfaceParametersCS
{
    DECLARE_TYPE_LAYOUT(FGSNiagaraBatchingSpriteConfigCS, NonVirtual);
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

IMPLEMENT_TYPE_LAYOUT(FGSNiagaraBatchingSpriteConfigCS);

IMPLEMENT_NIAGARA_DI_PARAMETER(UGSNiagaraBatchingSpriteConfig, FGSNiagaraBatchingSpriteConfigCS);

UGSNiagaraBatchingSpriteConfig::UGSNiagaraBatchingSpriteConfig() {
    this->ConfigInfo = NULL;
}


