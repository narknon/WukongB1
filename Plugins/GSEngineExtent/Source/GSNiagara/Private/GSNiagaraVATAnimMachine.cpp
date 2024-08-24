#include "GSNiagaraVATAnimMachine.h"

struct FGSNiagaraVATAnimMachineCS : public FNiagaraDataInterfaceParametersCS
{
    DECLARE_TYPE_LAYOUT(FGSNiagaraVATAnimMachineCS, NonVirtual);
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

IMPLEMENT_TYPE_LAYOUT(FGSNiagaraVATAnimMachineCS);

IMPLEMENT_NIAGARA_DI_PARAMETER(UGSNiagaraVATAnimMachine, FGSNiagaraVATAnimMachineCS);

UGSNiagaraVATAnimMachine::UGSNiagaraVATAnimMachine() {
    this->VATNiagaraDataContainer = NULL;
}


