#include "GSNiagaraParticleArrayData.h"

struct FGSNiagaraParticleArrayDataCS : public FNiagaraDataInterfaceParametersCS
{
	DECLARE_TYPE_LAYOUT(FGSNiagaraParticleArrayDataCS, NonVirtual);
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

IMPLEMENT_TYPE_LAYOUT(FGSNiagaraParticleArrayDataCS);

IMPLEMENT_NIAGARA_DI_PARAMETER(UGSNiagaraParticleArrayData, FGSNiagaraParticleArrayDataCS);

UGSNiagaraParticleArrayData::UGSNiagaraParticleArrayData() {
    
    this->ArrayData = NULL;
}


