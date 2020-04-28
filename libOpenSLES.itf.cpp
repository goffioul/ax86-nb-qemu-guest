#define LOG_TAG "OpenSLES-nb"

#include <stdlib.h>
#include <cutils/log.h>
#include <SLES/OpenSLES.h>

extern "C" {

SLresult __nb_slCreateEngine(
    SLObjectItf *pEngine,
    SLuint32 numOptions,
    const SLEngineOption *pEngineOptions,
    SLuint32 numInterfaces,
    const SLInterfaceID *pInterfaceIds,
    const SLboolean *pInterfaceRequired
);

SLresult __nb_SLBufferQueueItf_Enqueue(SLBufferQueueItf, const void *, SLuint32);
SLresult __nb_SLBufferQueueItf_Clear(SLBufferQueueItf);
SLresult __nb_SLBufferQueueItf_RegisterCallback(SLBufferQueueItf, slBufferQueueCallback, void *);

SLresult __nb_SLEffectSendItf_EnableEffectSend(SLEffectSendItf, const void *, SLboolean, SLmillibel);

SLresult __nb_SLEngineItf_CreateAudioPlayer(SLEngineItf, SLObjectItf *, SLDataSource *, SLDataSink *, SLuint32, const SLInterfaceID *, const SLboolean *);
SLresult __nb_SLEngineItf_CreateOutputMix(SLEngineItf, SLObjectItf *, SLuint32, const SLInterfaceID *, const SLboolean *);

SLresult __nb_SLEnvironmentalReverbItf_SetEnvironmentalReverbProperties(SLEnvironmentalReverbItf, const SLEnvironmentalReverbSettings *);

SLresult __nb_SLMuteSoloItf_SetChannelMute(SLMuteSoloItf, SLuint8 chan, SLboolean enable);
SLresult __nb_SLMuteSoloItf_GetChannelMute(SLMuteSoloItf, SLuint8 chan, SLboolean *pEnable);
SLresult __nb_SLMuteSoloItf_SetChannelSolo(SLMuteSoloItf, SLuint8 chan, SLboolean solo);
SLresult __nb_SLMuteSoloItf_GetChannelSolo(SLMuteSoloItf, SLuint8 chan, SLboolean *pSolo);
SLresult __nb_SLMuteSoloItf_GetNumChannels(SLMuteSoloItf, SLuint8 *pNumChannels);

SLresult __nb_SLObjectItf_Realize(SLObjectItf self, SLboolean async);
SLresult __nb_SLObjectItf_Resume(SLObjectItf self, SLboolean async);
SLresult __nb_SLObjectItf_GetState(SLObjectItf self, SLuint32 *pState);
SLresult __nb_SLObjectItf_GetInterface(SLObjectItf self, const SLInterfaceID iid, void *pInterface);
SLresult __nb_SLObjectItf_RegisterCallback(SLObjectItf self, slObjectCallback callback, void *pContext);
void __nb_SLObjectItf_AbortAsyncOperation(SLObjectItf self);
void __nb_SLObjectItf_Destroy(SLObjectItf self);
SLresult __nb_SLObjectItf_SetPriority(SLObjectItf self, SLint32 priority, SLboolean preemptable);
SLresult __nb_SLObjectItf_GetPriority(SLObjectItf self, SLint32 *pPriority, SLboolean *pPreemptable);
SLresult __nb_SLObjectItf_SetLossOfControlInterfaces(SLObjectItf self, SLint16 numInterfaces, SLInterfaceID *pInterfaceIds, SLboolean enabled);

SLresult __nb_SLPlayItf_SetPlayState(SLPlayItf self, SLuint32 state);
SLresult __nb_SLPlayItf_GetPlayState(SLPlayItf self, SLuint32 *pState);
SLresult __nb_SLPlayItf_GetDuration(SLPlayItf self, SLmillisecond *pMsec);
SLresult __nb_SLPlayItf_GetPosition(SLPlayItf self, SLmillisecond *pMsec);
SLresult __nb_SLPlayItf_RegisterCallback(SLPlayItf self, slPlayCallback callback, void *pContext);
SLresult __nb_SLPlayItf_SetCallbackEventsMask(SLPlayItf self, SLuint32 eventFlags);
SLresult __nb_SLPlayItf_GetCallbackEventsMask(SLPlayItf self, SLuint32 *pEventFlags);
SLresult __nb_SLPlayItf_SetMarkerPosition(SLPlayItf self, SLmillisecond mSec);
SLresult __nb_SLPlayItf_ClearMarkerPosition(SLPlayItf self);
SLresult __nb_SLPlayItf_GetMarkerPosition(SLPlayItf self, SLmillisecond *pMsec);
SLresult __nb_SLPlayItf_SetPositionUpdatePeriod(SLPlayItf self, SLmillisecond mSec);
SLresult __nb_SLPlayItf_GetPositionUpdatePeriod(SLPlayItf self, SLmillisecond *pMsec);

SLresult __nb_SLPlaybackRateItf_SetRate(SLPlaybackRateItf, SLpermille);
SLresult __nb_SLPlaybackRateItf_GetRate(SLPlaybackRateItf, SLpermille *);
SLresult __nb_SLPlaybackRateItf_SetPropertyConstraints(SLPlaybackRateItf, SLuint32);
SLresult __nb_SLPlaybackRateItf_GetProperties(SLPlaybackRateItf, SLuint32 *);
SLresult __nb_SLPlaybackRateItf_GetCapabilitiesOfRate(SLPlaybackRateItf, SLpermille, SLuint32 *);
SLresult __nb_SLPlaybackRateItf_GetRateRange(SLPlaybackRateItf self, SLuint8, SLpermille *, SLpermille *, SLpermille *, SLuint32 *);

SLresult __nb_SLSeekItf_SetPosition(SLSeekItf self, SLmillisecond pos, SLuint32 seekMode);
SLresult __nb_SLSeekItf_SetLoop(SLSeekItf self, SLboolean enable, SLmillisecond startPos, SLmillisecond endPos);
SLresult __nb_SLSeekItf_GetLoop(SLSeekItf self, SLboolean *pEnable, SLmillisecond *pStartPos, SLmillisecond *pEndPos);

SLresult __nb_SLVolumeItf_SetVolumeLevel(SLVolumeItf, SLmillibel);
SLresult __nb_SLVolumeItf_GetVolumeLevel(SLVolumeItf, SLmillibel *);
SLresult __nb_SLVolumeItf_GetMaxVolumeLevel(SLVolumeItf, SLmillibel *);
SLresult __nb_SLVolumeItf_SetMute(SLVolumeItf, SLboolean);
SLresult __nb_SLVolumeItf_GetMute(SLVolumeItf, SLboolean *);
SLresult __nb_SLVolumeItf_EnableStereoPosition(SLVolumeItf, SLboolean);
SLresult __nb_SLVolumeItf_IsEnabledStereoPosition(SLVolumeItf, SLboolean *);
SLresult __nb_SLVolumeItf_SetStereoPosition(SLVolumeItf, SLpermille);
SLresult __nb_SLVolumeItf_GetStereoPosition(SLVolumeItf, SLpermille *);

};

///////////////////////////////////////////////////////////////////////////////

#define MAX_OBJECT_INTERFACE 64

typedef struct nb_Interface_t {
    const void *mItf;
    const void *mNativeItf;
} nb_Interface;

#define DEFINE_INTERFACE(T)         \
    const struct SL##T##Itf_ *mItf; \
    SL##T##Itf mNativeItf;

#define DEFINE_SIMPLE_INTERFACE(T)  \
typedef struct nb_ ## T ## _t {     \
    DEFINE_INTERFACE(T)             \
} nb_ ## T;

#define DEFINE_SIMPLE_CALLBACK_INTERFACE(T) \
typedef struct nb_ ## T ## _t {             \
    DEFINE_INTERFACE(T)                     \
    sl ## T ## Callback mCallback;          \
    void *mContext;                         \
} nb_ ## T;

DEFINE_SIMPLE_CALLBACK_INTERFACE(BufferQueue)
DEFINE_SIMPLE_INTERFACE(EffectSend)
DEFINE_SIMPLE_INTERFACE(Engine)
DEFINE_SIMPLE_INTERFACE(EnvironmentalReverb)
DEFINE_SIMPLE_INTERFACE(MuteSolo)

typedef struct nb_Object_t {
    DEFINE_INTERFACE(Object)
    nb_Interface *mInterfaces[MAX_OBJECT_INTERFACE];
    slObjectCallback mCallback;
    void *mContext;
} nb_Object;

DEFINE_SIMPLE_CALLBACK_INTERFACE(Play)
DEFINE_SIMPLE_INTERFACE(PlaybackRate)
DEFINE_SIMPLE_INTERFACE(Seek)
DEFINE_SIMPLE_INTERFACE(Volume)

#undef DEFINE_INTERFACE

static nb_Object* wrap_Object(SLObjectItf nativeItf);
static nb_Interface* wrap_Interface(void *nativeItf, SLInterfaceID iid, nb_Object *owner);
static nb_Interface* lookup_Interface(void *nativeItf, nb_Object *owner);

///////////////////////////////////////////////////////////////////////////////

static void SLBufferQueueItf_callback(SLBufferQueueItf nativeCaller, void *pContext)
{
    nb_BufferQueue *thiz = (nb_BufferQueue *) pContext;

    if (thiz->mNativeItf == nativeCaller && thiz->mCallback != nullptr) {
        thiz->mCallback(&thiz->mItf, thiz->mContext);
    } else if (thiz->mNativeItf != nativeCaller) {
        ALOGE("SLBufferQueueItf_callback: misconfigured callback");
    }
}

static SLresult SLBufferQueueItf_Enqueue(SLBufferQueueItf self, const void *pBuffer, SLuint32 size)
{
    nb_BufferQueue *thiz = (nb_BufferQueue *) self;
    return __nb_SLBufferQueueItf_Enqueue(thiz->mNativeItf, pBuffer, size);
}

static SLresult SLBufferQueueItf_Clear(SLBufferQueueItf self)
{
    nb_BufferQueue *thiz = (nb_BufferQueue *) self;
    return __nb_SLBufferQueueItf_Clear(thiz->mNativeItf);
}

static SLresult SLBufferQueueItf_GetState(SLBufferQueueItf self, SLBufferQueueState *pState)
{
    LOG_ALWAYS_FATAL("SLBufferQueueItf_GetState");
    return SL_RESULT_UNKNOWN_ERROR;
}

static SLresult SLBufferQueueItf_RegisterCallback(SLBufferQueueItf self, slBufferQueueCallback callback, void *pContext)
{
    nb_BufferQueue *thiz = (nb_BufferQueue *) self;
    SLresult ret = __nb_SLBufferQueueItf_RegisterCallback(thiz->mNativeItf, SLBufferQueueItf_callback, thiz);
    if (ret == SL_RESULT_SUCCESS) {
        thiz->mCallback = callback;
        thiz->mContext = pContext;
    }
    return ret;
}

static const struct SLBufferQueueItf_ nb_BufferQueue_itf = {
    .Enqueue = SLBufferQueueItf_Enqueue,
    .Clear = SLBufferQueueItf_Clear,
    .GetState = SLBufferQueueItf_GetState,
    .RegisterCallback = SLBufferQueueItf_RegisterCallback
};

///////////////////////////////////////////////////////////////////////////////

static SLresult SLEffectSendItf_EnableEffectSend(SLEffectSendItf self, const void *pAuxEffect, SLboolean enable, SLmillibel initialLevel)
{
    nb_EffectSend *thiz = (nb_EffectSend *) self;
    const void *pNativeAux = ((const nb_Interface *) pAuxEffect)->mNativeItf;
    return __nb_SLEffectSendItf_EnableEffectSend(thiz->mNativeItf, pNativeAux, enable, initialLevel);
}

static SLresult SLEffectSend_IsEnabled(SLEffectSendItf self, const void *pAuxEffect, SLboolean *pEnable)
{
    LOG_ALWAYS_FATAL("SLEffectSend_IsEnabled");
    return SL_RESULT_UNKNOWN_ERROR;
}

static SLresult SLEffectSend_SetDirectLevel(SLEffectSendItf self, SLmillibel directLevel)
{
    LOG_ALWAYS_FATAL("SLEffectSend_SetDirectLevel");
    return SL_RESULT_UNKNOWN_ERROR;
}

static SLresult SLEffectSend_GetDirectLevel(SLEffectSendItf self, SLmillibel *pDirectLevel)
{
    LOG_ALWAYS_FATAL("SLEffectSend_GetDirectLevel");
    return SL_RESULT_UNKNOWN_ERROR;
}

static SLresult SLEffectSend_SetSendLevel(SLEffectSendItf self, const void *pAuxEffect, SLmillibel sendLevel)
{
    LOG_ALWAYS_FATAL("SLEffectSend_SetSendLevel");
    return SL_RESULT_UNKNOWN_ERROR;
}

static SLresult SLEffectSend_GetSendLevel(SLEffectSendItf self, const void *pAuxEffect, SLmillibel *pSendLevel)
{
    LOG_ALWAYS_FATAL("SLEffectSend_GetSendLevel");
    return SL_RESULT_UNKNOWN_ERROR;
}

static const struct SLEffectSendItf_ nb_EffectSend_itf = {
    .EnableEffectSend = SLEffectSendItf_EnableEffectSend,
    .IsEnabled = SLEffectSend_IsEnabled,
    .SetDirectLevel = SLEffectSend_SetDirectLevel,
    .GetDirectLevel = SLEffectSend_GetDirectLevel,
    .SetSendLevel = SLEffectSend_SetSendLevel,
    .GetSendLevel = SLEffectSend_GetSendLevel
};

///////////////////////////////////////////////////////////////////////////////

static SLDataSink* unwrap_DataSink(SLDataSink* pSink)
{
    SLDataSink *nativeSink;

    switch (*(SLuint32 *)pSink->pLocator) {
        case SL_DATALOCATOR_OUTPUTMIX:
            nativeSink = (SLDataSink *) calloc(1, sizeof(SLDataSink));
            nativeSink->pLocator = calloc(1, sizeof(SLDataLocator_OutputMix));
            ((SLDataLocator_OutputMix *)nativeSink->pLocator)->locatorType = SL_DATALOCATOR_OUTPUTMIX;
            ((SLDataLocator_OutputMix *)nativeSink->pLocator)->outputMix = ((nb_Object *)((SLDataLocator_OutputMix *)pSink->pLocator)->outputMix)->mNativeItf;
            nativeSink->pFormat = pSink->pFormat;
            return nativeSink;
        default:
            return pSink;
    }
}

static void free_DataSink(SLDataSink *pSink, SLDataSink *pNativeSink)
{
    if (pSink != pNativeSink) {
        free(pNativeSink->pLocator);
        free(pNativeSink);
    }
}

static SLresult SLEngineItf_CreateLEDDevice (
    SLEngineItf self,
    SLObjectItf * pDevice,
    SLuint32 deviceID,
    SLuint32 numInterfaces,
    const SLInterfaceID * pInterfaceIds,
    const SLboolean * pInterfaceRequired
) {
    LOG_ALWAYS_FATAL("SLEngineItf_CreateLEDDevice");
    return SL_RESULT_UNKNOWN_ERROR;
}

static SLresult SLEngineItf_CreateVibraDevice (
    SLEngineItf self,
    SLObjectItf * pDevice,
    SLuint32 deviceID,
    SLuint32 numInterfaces,
    const SLInterfaceID * pInterfaceIds,
    const SLboolean * pInterfaceRequired
) {
    LOG_ALWAYS_FATAL("SLEngineItf_CreateVibraDevice");
    return SL_RESULT_UNKNOWN_ERROR;
}

static SLresult SLEngineItf_CreateAudioPlayer(
    SLEngineItf self,
    SLObjectItf *pPlayer,
    SLDataSource *pAudioSrc,
    SLDataSink *pAudioSnk,
    SLuint32 numInterfaces,
    const SLInterfaceID *pInterfaceIds,
    const SLboolean *pInterfaceRequired
) {
    nb_Engine *thiz = (nb_Engine *) self;
    SLObjectItf nativeItf;
    SLDataSink *nativeSink;
    SLresult ret;

    *pPlayer = nullptr;
    nativeSink = unwrap_DataSink(pAudioSnk);
    ret = __nb_SLEngineItf_CreateAudioPlayer(thiz->mNativeItf, &nativeItf, pAudioSrc, nativeSink, numInterfaces, pInterfaceIds, pInterfaceRequired);
    free_DataSink(pAudioSnk, nativeSink);
    if (ret == SL_RESULT_SUCCESS) {
        nb_Object *obj = wrap_Object(nativeItf);
        *pPlayer = &obj->mItf;
    }

    return ret;
}

static SLresult SLEngineItf_CreateAudioRecorder (
    SLEngineItf self,
    SLObjectItf * pRecorder,
    SLDataSource *pAudioSrc,
    SLDataSink *pAudioSnk,
    SLuint32 numInterfaces,
    const SLInterfaceID * pInterfaceIds,
    const SLboolean * pInterfaceRequired
) {
    LOG_ALWAYS_FATAL("SLEngineItf_CreateAudioRecorder");
    return SL_RESULT_UNKNOWN_ERROR;
}

static SLresult SLEngineItf_CreateMidiPlayer (
    SLEngineItf self,
    SLObjectItf * pPlayer,
    SLDataSource *pMIDISrc,
    SLDataSource *pBankSrc,
    SLDataSink *pAudioOutput,
    SLDataSink *pVibra,
    SLDataSink *pLEDArray,
    SLuint32 numInterfaces,
    const SLInterfaceID * pInterfaceIds,
    const SLboolean * pInterfaceRequired
) {
    LOG_ALWAYS_FATAL("SLEngineItf_CreateMidiPlayer");
    return SL_RESULT_UNKNOWN_ERROR;
}

static SLresult SLEngineItf_CreateListener (
    SLEngineItf self,
    SLObjectItf * pListener,
    SLuint32 numInterfaces,
    const SLInterfaceID * pInterfaceIds,
    const SLboolean * pInterfaceRequired
) {
    LOG_ALWAYS_FATAL("SLEngineItf_CreateListener");
    return SL_RESULT_UNKNOWN_ERROR;
}

static SLresult SLEngineItf_Create3DGroup (
    SLEngineItf self,
    SLObjectItf * pGroup,
    SLuint32 numInterfaces,
    const SLInterfaceID * pInterfaceIds,
    const SLboolean * pInterfaceRequired
) {
    LOG_ALWAYS_FATAL("SLEngineItf_Create3DGroup");
    return SL_RESULT_UNKNOWN_ERROR;
}

static SLresult SLEngineItf_CreateOutputMix(
    SLEngineItf self,
    SLObjectItf *pMix,
    SLuint32 numInterfaces,
    const SLInterfaceID *pInterfaceIds,
    const SLboolean *pInterfaceRequired
) {
    nb_Engine *thiz = (nb_Engine *) self;
    SLObjectItf nativeItf;
    SLresult ret;

    ret = __nb_SLEngineItf_CreateOutputMix(thiz->mNativeItf, &nativeItf, numInterfaces, pInterfaceIds, pInterfaceRequired);
    if (ret == SL_RESULT_SUCCESS) {
        nb_Object *obj = wrap_Object(nativeItf);
        *pMix = &obj->mItf;
    }

    return ret;
}

static SLresult SLEngineItf_CreateMetadataExtractor (
    SLEngineItf self,
    SLObjectItf * pMetadataExtractor,
    SLDataSource * pDataSource,
    SLuint32 numInterfaces,
    const SLInterfaceID * pInterfaceIds,
    const SLboolean * pInterfaceRequired
) {
    LOG_ALWAYS_FATAL("SLEngineItf_CreateMetadataExtractor");
    return SL_RESULT_UNKNOWN_ERROR;
}

static SLresult SLEngineItf_CreateExtensionObject (
    SLEngineItf self,
    SLObjectItf * pObject,
    void * pParameters,
    SLuint32 objectID,
    SLuint32 numInterfaces,
    const SLInterfaceID * pInterfaceIds,
    const SLboolean * pInterfaceRequired
) {
    LOG_ALWAYS_FATAL("SLEngineItf_CreateExtensionObject");
    return SL_RESULT_UNKNOWN_ERROR;
}

static SLresult SLEngineItf_QueryNumSupportedInterfaces (
    SLEngineItf self,
    SLuint32 objectID,
    SLuint32 * pNumSupportedInterfaces
) {
    LOG_ALWAYS_FATAL("SLEngineItf_QueryNumSupportedInterfaces");
    return SL_RESULT_UNKNOWN_ERROR;
}

static SLresult SLEngineItf_QuerySupportedInterfaces (
    SLEngineItf self,
    SLuint32 objectID,
    SLuint32 index,
    SLInterfaceID * pInterfaceId
) {
    LOG_ALWAYS_FATAL("SLEngineItf_QuerySupportedInterfaces");
    return SL_RESULT_UNKNOWN_ERROR;
}

static SLresult SLEngineItf_QueryNumSupportedExtensions (
    SLEngineItf self,
    SLuint32 * pNumExtensions
) {
    LOG_ALWAYS_FATAL("SLEngineItf_QueryNumSupportedExtensions");
    return SL_RESULT_UNKNOWN_ERROR;
}

static SLresult SLEngineItf_QuerySupportedExtension (
    SLEngineItf self,
    SLuint32 index,
    SLchar * pExtensionName,
    SLint16 * pNameLength
) {
    LOG_ALWAYS_FATAL("SLEngineItf_QuerySupportedExtension");
    return SL_RESULT_UNKNOWN_ERROR;
}

static SLresult SLEngineItf_IsExtensionSupported (
    SLEngineItf self,
    const SLchar * pExtensionName,
    SLboolean * pSupported
) {
    LOG_ALWAYS_FATAL("SLEngineItf_IsExtensionSupported");
    return SL_RESULT_UNKNOWN_ERROR;
}

static const struct SLEngineItf_ nb_Engine_itf = {
    .CreateLEDDevice = SLEngineItf_CreateLEDDevice,
    .CreateVibraDevice = SLEngineItf_CreateVibraDevice,
    .CreateAudioPlayer = SLEngineItf_CreateAudioPlayer,
    .CreateAudioRecorder = SLEngineItf_CreateAudioRecorder,
    .CreateMidiPlayer = SLEngineItf_CreateMidiPlayer,
    .CreateListener = SLEngineItf_CreateListener,
    .Create3DGroup = SLEngineItf_Create3DGroup,
    .CreateOutputMix = SLEngineItf_CreateOutputMix,
    .CreateMetadataExtractor = SLEngineItf_CreateMetadataExtractor,
    .CreateExtensionObject = SLEngineItf_CreateExtensionObject,
    .QueryNumSupportedInterfaces = SLEngineItf_QueryNumSupportedInterfaces,
    .QuerySupportedInterfaces = SLEngineItf_QuerySupportedInterfaces,
    .QueryNumSupportedExtensions = SLEngineItf_QueryNumSupportedExtensions,
    .QuerySupportedExtension = SLEngineItf_QuerySupportedExtension,
    .IsExtensionSupported = SLEngineItf_IsExtensionSupported
};

///////////////////////////////////////////////////////////////////////////////

static SLresult SLEnvironmentalReverbItf_SetEnvironmentalReverbProperties(SLEnvironmentalReverbItf self, const SLEnvironmentalReverbSettings *pProperties)
{
    nb_EnvironmentalReverb *thiz = (nb_EnvironmentalReverb *) self;
    return __nb_SLEnvironmentalReverbItf_SetEnvironmentalReverbProperties(thiz->mNativeItf, pProperties);
}

static const struct SLEnvironmentalReverbItf_ nb_EnvironmentalReverb_itf = {
    .SetEnvironmentalReverbProperties = SLEnvironmentalReverbItf_SetEnvironmentalReverbProperties
};

///////////////////////////////////////////////////////////////////////////////

static SLresult SLMuteSoloItf_SetChannelMute(SLMuteSoloItf self, SLuint8 chan, SLboolean enable)
{
    nb_MuteSolo *thiz = (nb_MuteSolo *) self;
    return __nb_SLMuteSoloItf_SetChannelMute(thiz->mNativeItf, chan, enable);
}

static SLresult SLMuteSoloItf_GetChannelMute(SLMuteSoloItf self, SLuint8 chan, SLboolean *pEnable)
{
    nb_MuteSolo *thiz = (nb_MuteSolo *) self;
    return __nb_SLMuteSoloItf_GetChannelMute(thiz->mNativeItf, chan, pEnable);
}

static SLresult SLMuteSoloItf_SetChannelSolo(SLMuteSoloItf self, SLuint8 chan, SLboolean solo)
{
    nb_MuteSolo *thiz = (nb_MuteSolo *) self;
    return __nb_SLMuteSoloItf_SetChannelSolo(thiz->mNativeItf, chan, solo);
}

static SLresult SLMuteSoloItf_GetChannelSolo(SLMuteSoloItf self, SLuint8 chan, SLboolean *pSolo)
{
    nb_MuteSolo *thiz = (nb_MuteSolo *) self;
    return __nb_SLMuteSoloItf_GetChannelSolo(thiz->mNativeItf, chan, pSolo);
}

static SLresult SLMuteSoloItf_GetNumChannels(SLMuteSoloItf self, SLuint8 *pNumChannels)
{
    nb_MuteSolo *thiz = (nb_MuteSolo *) self;
    return __nb_SLMuteSoloItf_GetNumChannels(thiz->mNativeItf, pNumChannels);
}


const struct SLMuteSoloItf_ nb_MuteSolo_itf = {
    .SetChannelMute = SLMuteSoloItf_SetChannelMute,
    .GetChannelMute = SLMuteSoloItf_GetChannelMute,
    .SetChannelSolo = SLMuteSoloItf_SetChannelSolo,
    .GetChannelSolo = SLMuteSoloItf_GetChannelSolo,
    .GetNumChannels = SLMuteSoloItf_GetNumChannels
};

///////////////////////////////////////////////////////////////////////////////

static void SLObjectItf_callback(
    SLObjectItf nativeCaller,
    const void *pContext,
    SLuint32 event,
    SLresult result,
    SLuint32 param,
    void *pInterface
) {
    nb_Object *thiz = (nb_Object *) pContext;

    if (thiz->mNativeItf == nativeCaller && thiz->mCallback != nullptr) {
        void *nb_pInterface = nullptr;

        if (pInterface != nullptr) {
            nb_Interface *itf = lookup_Interface(pInterface, thiz);

            if (itf != nullptr)
                nb_pInterface = &itf->mItf;
            else
                ALOGE("SLObjectItf_callback: unknown interface");
        }

        thiz->mCallback(&thiz->mItf, thiz->mContext, event, result, param, nb_pInterface);
    } else if (thiz->mNativeItf != nativeCaller) {
        ALOGE("SLObjectItf_callback: misconfigured callback");
    }
}

static SLresult SLObjectItf_Realize(SLObjectItf self, SLboolean async)
{
    nb_Object *thiz = (nb_Object *) self;
    return __nb_SLObjectItf_Realize(thiz->mNativeItf, async);
}

static SLresult SLObjectItf_Resume(SLObjectItf self, SLboolean async)
{
    nb_Object *thiz = (nb_Object *) self;
    return __nb_SLObjectItf_Resume(thiz->mNativeItf, async);
}

static SLresult SLObjectItf_GetState(SLObjectItf self, SLuint32 *pState)
{
    nb_Object *thiz = (nb_Object *) self;
    return __nb_SLObjectItf_GetState(thiz->mNativeItf, pState);
}

static SLresult SLObjectItf_GetInterface(SLObjectItf self, const SLInterfaceID iid, void *pInterface)
{
    nb_Object *thiz = (nb_Object *) self;
    void *nativeItf;
    SLresult ret;

    ret = __nb_SLObjectItf_GetInterface(thiz->mNativeItf, iid, (void *) &nativeItf);
    if (ret == SL_RESULT_SUCCESS) {
        nb_Interface *itf = lookup_Interface(nativeItf, thiz);
        if (itf == nullptr)
            itf = wrap_Interface(nativeItf, iid, thiz);
        *(void **)pInterface = &itf->mItf;
    }

    return ret;
}

static SLresult SLObjectItf_RegisterCallback(SLObjectItf self, slObjectCallback callback, void *pContext)
{
    nb_Object *thiz = (nb_Object *) self;
    SLresult ret = __nb_SLObjectItf_RegisterCallback(thiz->mNativeItf, SLObjectItf_callback, thiz);
    if (ret == SL_RESULT_SUCCESS) {
        thiz->mCallback = callback;
        thiz->mContext = pContext;
    }
    return ret;
}

static void SLObjectItf_AbortAsyncOperation(SLObjectItf self)
{
    nb_Object *thiz = (nb_Object *) self;
    __nb_SLObjectItf_AbortAsyncOperation(thiz->mNativeItf);
}

static void SLObjectItf_Destroy(SLObjectItf self)
{
    nb_Object *thiz = (nb_Object *) self;
    __nb_SLObjectItf_Destroy(thiz->mNativeItf);
    for (int i = 0; i < MAX_OBJECT_INTERFACE && thiz->mInterfaces[i] != nullptr; i++)
        free(thiz->mInterfaces[i]);
    free(thiz);
}

static SLresult SLObjectItf_SetPriority(SLObjectItf self, SLint32 priority, SLboolean preemptable)
{
    nb_Object *thiz = (nb_Object *) self;
    return __nb_SLObjectItf_SetPriority(thiz->mNativeItf, priority, preemptable);
}

static SLresult SLObjectItf_GetPriority(SLObjectItf self, SLint32 *pPriority, SLboolean *pPreemptable)
{
    nb_Object *thiz = (nb_Object *) self;
    return __nb_SLObjectItf_GetPriority(thiz->mNativeItf, pPriority, pPreemptable);
}

static SLresult SLObjectItf_SetLossOfControlInterfaces(SLObjectItf self, SLint16 numInterfaces, SLInterfaceID *pInterfaceIds, SLboolean enabled)
{
    nb_Object *thiz = (nb_Object *) self;
    return __nb_SLObjectItf_SetLossOfControlInterfaces(thiz->mNativeItf, numInterfaces, pInterfaceIds, enabled);
}

static const struct SLObjectItf_ nb_Object_itf = {
    .Realize = SLObjectItf_Realize,
    .Resume = SLObjectItf_Resume,
    .GetState = SLObjectItf_GetState,
    .GetInterface = SLObjectItf_GetInterface,
    .RegisterCallback = SLObjectItf_RegisterCallback,
    .AbortAsyncOperation = SLObjectItf_AbortAsyncOperation,
    .Destroy = SLObjectItf_Destroy,
    .SetPriority = SLObjectItf_SetPriority,
    .GetPriority = SLObjectItf_GetPriority,
    .SetLossOfControlInterfaces = SLObjectItf_SetLossOfControlInterfaces
};

///////////////////////////////////////////////////////////////////////////////

static void SLPlayItf_callback(SLPlayItf nativeCaller, void *pContext, SLuint32 event)
{
    nb_Play *thiz = (nb_Play *) pContext;

    if (thiz->mNativeItf == nativeCaller && thiz->mCallback != nullptr) {
        thiz->mCallback(&thiz->mItf, thiz->mContext, event);
    } else if (thiz->mNativeItf != nativeCaller) {
        ALOGE("SLPlayItf_callback: misconfigured callback");
    }
}

static SLresult SLPlayItf_SetPlayState(SLPlayItf self, SLuint32 state)
{
    nb_Play *thiz = (nb_Play *) self;
    return __nb_SLPlayItf_SetPlayState(thiz->mNativeItf, state);
}

static SLresult SLPlayItf_GetPlayState(SLPlayItf self, SLuint32 *pState)
{
    nb_Play *thiz = (nb_Play *) self;
    return __nb_SLPlayItf_GetPlayState(thiz->mNativeItf, pState);
}

static SLresult SLPlayItf_GetDuration(SLPlayItf self, SLmillisecond *pMsec)
{
    nb_Play *thiz = (nb_Play *) self;
    return __nb_SLPlayItf_GetDuration(thiz->mNativeItf, pMsec);
}

static SLresult SLPlayItf_GetPosition(SLPlayItf self, SLmillisecond *pMsec)
{
    nb_Play *thiz = (nb_Play *) self;
    return __nb_SLPlayItf_GetPosition(thiz->mNativeItf, pMsec);
}

static SLresult SLPlayItf_RegisterCallback(SLPlayItf self, slPlayCallback callback, void *pContext)
{
    nb_Play *thiz = (nb_Play *) self;
    SLresult ret = __nb_SLPlayItf_RegisterCallback(thiz->mNativeItf, SLPlayItf_callback, thiz);
    if (ret == SL_RESULT_SUCCESS) {
        thiz->mCallback = callback;
        thiz->mContext = pContext;
    }
    return ret;
}

static SLresult SLPlayItf_SetCallbackEventsMask(SLPlayItf self, SLuint32 eventFlags)
{
    nb_Play *thiz = (nb_Play *) self;
    return __nb_SLPlayItf_SetCallbackEventsMask(thiz->mNativeItf, eventFlags);
}

static SLresult SLPlayItf_GetCallbackEventsMask(SLPlayItf self, SLuint32 *pEventFlags)
{
    nb_Play *thiz = (nb_Play *) self;
    return __nb_SLPlayItf_GetCallbackEventsMask(thiz->mNativeItf, pEventFlags);
}

static SLresult SLPlayItf_SetMarkerPosition(SLPlayItf self, SLmillisecond mSec)
{
    nb_Play *thiz = (nb_Play *) self;
    return __nb_SLPlayItf_SetMarkerPosition(thiz->mNativeItf, mSec);
}

static SLresult SLPlayItf_ClearMarkerPosition(SLPlayItf self)
{
    nb_Play *thiz = (nb_Play *) self;
    return __nb_SLPlayItf_ClearMarkerPosition(thiz->mNativeItf);
}

static SLresult SLPlayItf_GetMarkerPosition(SLPlayItf self, SLmillisecond *pMsec)
{
    nb_Play *thiz = (nb_Play *) self;
    return __nb_SLPlayItf_GetMarkerPosition(thiz->mNativeItf, pMsec);
}

static SLresult SLPlayItf_SetPositionUpdatePeriod(SLPlayItf self, SLmillisecond mSec)
{
    nb_Play *thiz = (nb_Play *) self;
    return __nb_SLPlayItf_SetPositionUpdatePeriod(thiz->mNativeItf, mSec);
}

static SLresult SLPlayItf_GetPositionUpdatePeriod(SLPlayItf self, SLmillisecond *pMsec)
{
    nb_Play *thiz = (nb_Play *) self;
    return __nb_SLPlayItf_GetPositionUpdatePeriod(thiz->mNativeItf, pMsec);
}


static const struct SLPlayItf_ nb_Play_itf = {
    .SetPlayState = SLPlayItf_SetPlayState,
    .GetPlayState = SLPlayItf_GetPlayState,
    .GetDuration = SLPlayItf_GetDuration,
    .GetPosition = SLPlayItf_GetPosition,
    .RegisterCallback = SLPlayItf_RegisterCallback,
    .SetCallbackEventsMask = SLPlayItf_SetCallbackEventsMask,
    .GetCallbackEventsMask = SLPlayItf_GetCallbackEventsMask,
    .SetMarkerPosition = SLPlayItf_SetMarkerPosition,
    .ClearMarkerPosition = SLPlayItf_ClearMarkerPosition,
    .GetMarkerPosition = SLPlayItf_GetMarkerPosition,
    .SetPositionUpdatePeriod = SLPlayItf_SetPositionUpdatePeriod,
    .GetPositionUpdatePeriod = SLPlayItf_GetPositionUpdatePeriod
};

///////////////////////////////////////////////////////////////////////////////

static SLresult SLPlaybackRateItf_SetRate(SLPlaybackRateItf self, SLpermille rate)
{
    nb_PlaybackRate *thiz = (nb_PlaybackRate *) self;
    return __nb_SLPlaybackRateItf_SetRate(thiz->mNativeItf, rate);
}

static SLresult SLPlaybackRateItf_GetRate(SLPlaybackRateItf self, SLpermille *pRate)
{
    nb_PlaybackRate *thiz = (nb_PlaybackRate *) self;
    return __nb_SLPlaybackRateItf_GetRate(thiz->mNativeItf, pRate);
}

static SLresult SLPlaybackRateItf_SetPropertyConstraints(SLPlaybackRateItf self, SLuint32 constraints)
{
    nb_PlaybackRate *thiz = (nb_PlaybackRate *) self;
    return __nb_SLPlaybackRateItf_SetPropertyConstraints(thiz->mNativeItf, constraints);
}

static SLresult SLPlaybackRateItf_GetProperties(SLPlaybackRateItf self, SLuint32 *pProperties)
{
    nb_PlaybackRate *thiz = (nb_PlaybackRate *) self;
    return __nb_SLPlaybackRateItf_GetProperties(thiz->mNativeItf, pProperties);
}

static SLresult SLPlaybackRateItf_GetCapabilitiesOfRate(SLPlaybackRateItf self, SLpermille rate, SLuint32 *pCapabilities)
{
    nb_PlaybackRate *thiz = (nb_PlaybackRate *) self;
    return __nb_SLPlaybackRateItf_GetCapabilitiesOfRate(thiz->mNativeItf, rate, pCapabilities);
}

static SLresult SLPlaybackRateItf_GetRateRange(SLPlaybackRateItf self, SLuint8 index, SLpermille *pMinRate, SLpermille *pMaxRate,
                                               SLpermille *pStepSize, SLuint32 *pCapabilities)
{
    nb_PlaybackRate *thiz = (nb_PlaybackRate *) self;
    return __nb_SLPlaybackRateItf_GetRateRange(thiz->mNativeItf, index, pMinRate, pMaxRate, pStepSize, pCapabilities);
}


static const struct SLPlaybackRateItf_ nb_PlaybackRate_itf = {
    .SetRate = SLPlaybackRateItf_SetRate,
    .GetRate = SLPlaybackRateItf_GetRate,
    .SetPropertyConstraints = SLPlaybackRateItf_SetPropertyConstraints,
    .GetProperties = SLPlaybackRateItf_GetProperties,
    .GetCapabilitiesOfRate = SLPlaybackRateItf_GetCapabilitiesOfRate,
    .GetRateRange = SLPlaybackRateItf_GetRateRange
};

///////////////////////////////////////////////////////////////////////////////

static SLresult SLSeekItf_SetPosition(SLSeekItf self, SLmillisecond pos, SLuint32 seekMode)
{
    nb_Seek *thiz = (nb_Seek *) self;
    return __nb_SLSeekItf_SetPosition(thiz->mNativeItf, pos, seekMode);
}

static SLresult SLSeekItf_SetLoop(SLSeekItf self, SLboolean enable, SLmillisecond startPos, SLmillisecond endPos)
{
    nb_Seek *thiz = (nb_Seek *) self;
    return __nb_SLSeekItf_SetLoop(thiz->mNativeItf, enable, startPos, endPos);
}

static SLresult SLSeekItf_GetLoop(SLSeekItf self, SLboolean *pEnable, SLmillisecond *pStartPos, SLmillisecond *pEndPos)
{
    nb_Seek *thiz = (nb_Seek *) self;
    return __nb_SLSeekItf_GetLoop(thiz->mNativeItf, pEnable, pStartPos, pEndPos);
}

static const struct SLSeekItf_ nb_Seek_itf = {
    .SetPosition = SLSeekItf_SetPosition,
    .SetLoop = SLSeekItf_SetLoop,
    .GetLoop = SLSeekItf_GetLoop
};

///////////////////////////////////////////////////////////////////////////////

static SLresult SLVolumeItf_SetVolumeLevel(SLVolumeItf self, SLmillibel level)
{
    nb_Volume *thiz = (nb_Volume *) self;
    return __nb_SLVolumeItf_SetVolumeLevel(thiz->mNativeItf, level);
}

static SLresult SLVolumeItf_GetVolumeLevel(SLVolumeItf self, SLmillibel *pLevel)
{
    nb_Volume *thiz = (nb_Volume *) self;
    return __nb_SLVolumeItf_GetVolumeLevel(thiz->mNativeItf, pLevel);
}

static SLresult SLVolumeItf_GetMaxVolumeLevel(SLVolumeItf self, SLmillibel *pMaxLevel)
{
    nb_Volume *thiz = (nb_Volume *) self;
    return __nb_SLVolumeItf_GetMaxVolumeLevel(thiz->mNativeItf, pMaxLevel);
}

static SLresult SLVolumeItf_SetMute(SLVolumeItf self, SLboolean mute)
{
    nb_Volume *thiz = (nb_Volume *) self;
    return __nb_SLVolumeItf_SetMute(thiz->mNativeItf, mute);
}

static SLresult SLVolumeItf_GetMute(SLVolumeItf self, SLboolean *pMute)
{
    nb_Volume *thiz = (nb_Volume *) self;
    return __nb_SLVolumeItf_GetMute(thiz->mNativeItf, pMute);
}

static SLresult SLVolumeItf_EnableStereoPosition(SLVolumeItf self, SLboolean enable)
{
    nb_Volume *thiz = (nb_Volume *) self;
    return __nb_SLVolumeItf_EnableStereoPosition(thiz->mNativeItf, enable);
}

static SLresult SLVolumeItf_IsEnabledStereoPosition(SLVolumeItf self, SLboolean *pEnable)
{
    nb_Volume *thiz = (nb_Volume *) self;
    return __nb_SLVolumeItf_IsEnabledStereoPosition(thiz->mNativeItf, pEnable);
}

static SLresult SLVolumeItf_SetStereoPosition(SLVolumeItf self, SLpermille stereoPosition)
{
    nb_Volume *thiz = (nb_Volume *) self;
    return __nb_SLVolumeItf_SetStereoPosition(thiz->mNativeItf, stereoPosition);
}

static SLresult SLVolumeItf_GetStereoPosition(SLVolumeItf self, SLpermille *pStereoPosition)
{
    nb_Volume *thiz = (nb_Volume *) self;
    return __nb_SLVolumeItf_GetStereoPosition(thiz->mNativeItf, pStereoPosition);
}


static const struct SLVolumeItf_ nb_Volume_itf = {
    .SetVolumeLevel = SLVolumeItf_SetVolumeLevel,
    .GetVolumeLevel = SLVolumeItf_GetVolumeLevel,
    .GetMaxVolumeLevel = SLVolumeItf_GetMaxVolumeLevel,
    .SetMute = SLVolumeItf_SetMute,
    .GetMute = SLVolumeItf_GetMute,
    .EnableStereoPosition = SLVolumeItf_EnableStereoPosition,
    .IsEnabledStereoPosition = SLVolumeItf_IsEnabledStereoPosition,
    .SetStereoPosition = SLVolumeItf_SetStereoPosition,
    .GetStereoPosition = SLVolumeItf_GetStereoPosition
};

///////////////////////////////////////////////////////////////////////////////

static nb_Object* wrap_Object(SLObjectItf nativeItf)
{
    nb_Object *obj = (nb_Object *) calloc(1, sizeof(nb_Object));
    obj->mItf = &nb_Object_itf;
    obj->mNativeItf = nativeItf;
    return obj;
}

#if 0
template<typename NB, void *itf>
static nb_Interface* wrap_ObjectInterface(void *nativeItf)
{
    nb_Interface *obj = (nb_Interface *) calloc(1, sizeof(NB));
    obj->mItf = itf;
    obj->mNativeItf = nativeItf;
    return obj;
}

static struct {
    SLInterfaceID iid;
    nb_Interface*(*wrapper)(void*);
} IID_wrappers[] = {
    { SL_IID_ENGINE, wrap_ObjectInterface<nb_Engine, (void *) &nb_Engine_itf> },
    { SL_IID_ENVIRONMENTALREVERB, wrap_ObjectInterface<nb_EnvironmentalReverb, (void *) &nb_EnvironmentalReverb_itf> },
    { nullptr, nullptr }
};
#else
static nb_Interface* wrap_ObjectInterface(size_t size, void *itf, void *nativeItf)
{
    nb_Interface *obj = (nb_Interface *) calloc(1, size);
    obj->mItf = itf;
    obj->mNativeItf = nativeItf;
    return obj;
}
#endif

static nb_Interface* wrap_Interface(void *nativeItf, SLInterfaceID iid, nb_Object *owner)
{
    nb_Interface *obj = nullptr;

#if 0
    for (int i = 0; IID_wrappers[i].iid != nullptr; i++) {
        if (IID_wrappers[i].iid == iid) {
            obj = IID_wrappers[i].wrapper(nativeItf);
            break;
        }
    }
#else
    if (iid == SL_IID_BUFFERQUEUE)
        obj = wrap_ObjectInterface(sizeof(nb_BufferQueue), (void *) &nb_BufferQueue_itf, nativeItf);
    else if (iid == SL_IID_EFFECTSEND)
        obj = wrap_ObjectInterface(sizeof(nb_EffectSend), (void *) &nb_EffectSend_itf, nativeItf);
    else if (iid == SL_IID_ENGINE)
        obj = wrap_ObjectInterface(sizeof(nb_Engine), (void *) &nb_Engine_itf, nativeItf);
    else if (iid == SL_IID_ENVIRONMENTALREVERB)
        obj = wrap_ObjectInterface(sizeof(nb_EnvironmentalReverb), (void *) &nb_EnvironmentalReverb_itf, nativeItf);
    else if (iid == SL_IID_MUTESOLO)
        obj = wrap_ObjectInterface(sizeof(nb_MuteSolo), (void *) &nb_MuteSolo_itf, nativeItf);
    else if (iid == SL_IID_PLAY)
        obj = wrap_ObjectInterface(sizeof(nb_Play), (void *) &nb_Play_itf, nativeItf);
    else if (iid == SL_IID_PLAYBACKRATE)
        obj = wrap_ObjectInterface(sizeof(nb_PlaybackRate), (void *) &nb_PlaybackRate_itf, nativeItf);
    else if (iid == SL_IID_SEEK)
        obj = wrap_ObjectInterface(sizeof(nb_Seek), (void *) &nb_Seek_itf, nativeItf);
    else if (iid == SL_IID_VOLUME)
        obj = wrap_ObjectInterface(sizeof(nb_Volume), (void *) &nb_Volume_itf, nativeItf);
#endif

    if (obj == nullptr) {
        LOG_ALWAYS_FATAL("unable to wrap native interface %08x-%04x-%04x-%04x-%02x%02x%02x%02x%02x%02x for object %p",
                         iid->time_low, iid->time_mid, iid->time_hi_and_version, iid->clock_seq,
                         iid->node[0], iid->node[1], iid->node[2], iid->node[3], iid->node[4], iid->node[5],
                         owner);
        return obj;
    }

    for (int i = 0; i < MAX_OBJECT_INTERFACE; i++) {
        if (! owner->mInterfaces[i]) {
            owner->mInterfaces[i] = obj;
            return obj;
        }
    }
    LOG_ALWAYS_FATAL("object %p ran out of interfaces", owner);
    return obj;
}

static nb_Interface* lookup_Interface(void *nativeItf, nb_Object *owner)
{
    for (int i = 0; i < MAX_OBJECT_INTERFACE && owner->mInterfaces[i] != nullptr; i++) {
        if (owner->mInterfaces[i]->mNativeItf == nativeItf) {
            return owner->mInterfaces[i];
        }
    }
    return nullptr;
}

///////////////////////////////////////////////////////////////////////////////

extern "C" {

__attribute__((visibility("default")))
SLresult slCreateEngine(
    SLObjectItf *pEngine,
    SLuint32 numOptions,
    const SLEngineOption *pEngineOptions,
    SLuint32 numInterfaces,
    const SLInterfaceID *pInterfaceIds,
    const SLboolean *pInterfaceRequired
) {
    SLObjectItf nativeItf;
    SLresult ret;

    ret = __nb_slCreateEngine(&nativeItf, numOptions, pEngineOptions, numInterfaces, pInterfaceIds, pInterfaceRequired);
    if (ret == SL_RESULT_SUCCESS) {
        nb_Object *obj = wrap_Object(nativeItf);
        *pEngine = &obj->mItf;
    }

    return ret;
}

__attribute__((visibility("default")))
SLresult slQueryNumSupportedEngineInterfaces(
    SLuint32 * pNumSupportedInterfaces __attribute__((unused))
) {
    return SL_RESULT_PARAMETER_INVALID;
}

__attribute__((visibility("default")))
SLresult slQuerySupportedEngineInterfaces(
    SLuint32 index __attribute__((unused)),
    SLInterfaceID * pInterfaceId __attribute__((unused))
) {
    return SL_RESULT_PARAMETER_INVALID;
}

};
