/*CSEXPORT int32 CSCONV Export_TReferenceControllerBase_GetSharedReferenceCount(SharedPointerInternals::TReferenceControllerBase* instance, ESPMode mode)
{
	switch (mode)
	{
		case ESPMode::ThreadSafe: return SharedPointerInternals::TReferenceControllerBase<ESPMode::ThreadSafe>::GetSharedReferenceCount(instance);
		case ESPMode::NotThreadSafe: return SharedPointerInternals::TReferenceControllerBase<ESPMode::NotThreadSafe>::GetSharedReferenceCount(instance);
		default: return SharedPointerInternals::TReferenceControllerBase<ESPMode::Fast>::GetSharedReferenceCount(instance);
	}
}

CSEXPORT void CSCONV Export_FReferenceControllerOps_AddSharedReference(SharedPointerInternals::TReferenceControllerBase* instance, ESPMode mode)
{
	switch (mode)
	{
		case ESPMode::ThreadSafe: SharedPointerInternals::TReferenceControllerBase<ESPMode::ThreadSafe>::AddSharedReference(instance); break;
		case ESPMode::NotThreadSafe: SharedPointerInternals::TReferenceControllerBase<ESPMode::NotThreadSafe>::AddSharedReference(instance); break;
		default: SharedPointerInternals::TReferenceControllerBase<ESPMode::Fast>::AddSharedReference(instance); break;
	}
}

CSEXPORT void CSCONV Export_FReferenceControllerOps_ConditionallyAddSharedReference(SharedPointerInternals::TReferenceControllerBase* instance, ESPMode mode)
{
	switch (mode)
	{
		case ESPMode::ThreadSafe: SharedPointerInternals::TReferenceControllerBase<ESPMode::ThreadSafe>::ConditionallyAddSharedReference(instance); break;
		case ESPMode::NotThreadSafe: SharedPointerInternals::TReferenceControllerBase<ESPMode::NotThreadSafe>::ConditionallyAddSharedReference(instance); break;
		default: SharedPointerInternals::TReferenceControllerBase<ESPMode::Fast>::ConditionallyAddSharedReference(instance); break;
	}
}

CSEXPORT void CSCONV Export_FReferenceControllerOps_ReleaseSharedReference(SharedPointerInternals::TReferenceControllerBase* instance, ESPMode mode)
{
	switch (mode)
	{
		case ESPMode::ThreadSafe: SharedPointerInternals::TReferenceControllerBase<ESPMode::ThreadSafe>::ReleaseSharedReference(instance); break;
		case ESPMode::NotThreadSafe: SharedPointerInternals::TReferenceControllerBase<ESPMode::NotThreadSafe>::ReleaseSharedReference(instance); break;
		default: SharedPointerInternals::TReferenceControllerBase<ESPMode::Fast>::ReleaseSharedReference(instance); break;
	}
}

CSEXPORT void CSCONV Export_FReferenceControllerOps_AddWeakReference(SharedPointerInternals::TReferenceControllerBase* instance, ESPMode mode)
{
	switch (mode)
	{
		case ESPMode::ThreadSafe: SharedPointerInternals::TReferenceControllerBase<ESPMode::ThreadSafe>::AddWeakReference(instance); break;
		case ESPMode::NotThreadSafe: SharedPointerInternals::TReferenceControllerBase<ESPMode::NotThreadSafe>::AddWeakReference(instance); break;
		default: SharedPointerInternals::TReferenceControllerBase<ESPMode::Fast>::AddWeakReference(instance); break;
	}
}

CSEXPORT void CSCONV Export_FReferenceControllerOps_ReleaseWeakReference(SharedPointerInternals::TReferenceControllerBase* instance, ESPMode mode)
{
	switch (mode)
	{
		case ESPMode::ThreadSafe: SharedPointerInternals::TReferenceControllerBase<ESPMode::ThreadSafe>::ReleaseWeakReference(instance); break;
		case ESPMode::NotThreadSafe: SharedPointerInternals::TReferenceControllerBase<ESPMode::NotThreadSafe>::ReleaseWeakReference(instance); break;
		default: SharedPointerInternals::TReferenceControllerBase<ESPMode::Fast>::ReleaseWeakReference(instance); break;
	}
}

CSEXPORT void CSCONV Export_FReferenceControllerOps(RegisterFunc registerFunc)
{
	REGISTER_FUNC(Export_FReferenceControllerOps_GetSharedReferenceCount);
	REGISTER_FUNC(Export_FReferenceControllerOps_AddSharedReference);
	REGISTER_FUNC(Export_FReferenceControllerOps_ConditionallyAddSharedReference);
	REGISTER_FUNC(Export_FReferenceControllerOps_ReleaseSharedReference);
	REGISTER_FUNC(Export_FReferenceControllerOps_AddWeakReference);
	REGISTER_FUNC(Export_FReferenceControllerOps_ReleaseWeakReference);
}*/