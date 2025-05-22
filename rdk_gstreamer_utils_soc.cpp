/*
* If not stated otherwise in this file or this component's LICENSE file the
* following copyright and licenses apply:
*
* Copyright 2019 RDK Management
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
* http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
*/
#include <gst/app/gstappsrc.h>
#include "../rdk_gstreamer_utils.h"

namespace rdk_gstreamer_utils
{

    const char* getAudioDecoderName_soc()
    {
        return nullptr;
    }

    const char* getVideoUnderflowSignalName_soc()
    {
        return nullptr;
    }

    const char* getAudioUnderflowSignalName_soc()
    {
        return nullptr;
    }

     void initVirtualDisplayHeightandWidthFromPlatform_soc(unsigned int* mVirtualDisplayHeight, unsigned int* mVirtualDisplayWidth)
    {
        return;
    }

    bool IntialVolSettingNeeded_soc()
    {
        return false;
    }

    bool IsAudioFadeSupported_soc()
    {
        return false;
    }

    void EaseAudio_soc(double target, uint32_t duration, rgu_Ease ease)
    {
        return;
    }

    void setVideoProperty_soc(GstElement *pipeline)
    {
        return;
    }

    void processAudioGap_soc(GstElement *pipeline,gint64 gapstartpts,gint32 gapduration,gint64 gapdiscontinuity,bool audioaac)
    {
        return;
    }

    void enableAudioSwitch_soc(GstElement *pipeline)
    {
        return;
    }

    GstElement * configureUIAudioSink_soc(bool TTSenabled)
    {
        return nullptr;
    }

    bool isUIAudioVGAudioMixSupported_soc()
    {
        return false;
    }

    unsigned  getNativeAudioFlag_soc()
    {
        return 0;
    }

    bool isPtsOffsetAdjustmentSupported_soc()
    {
        return false;
    }

    int getPtsOffsetAdjustment_soc(const std::string& audioCodecString)
    {
        return 0;
    }

    void configAudioCap_soc(AudioAttributes *pAttrib, bool *audioaac, bool svpenabled, GstCaps **appsrcCaps)
    {
        return;
    }

    static bool resumeAudioPlayback (struct rdkGstreamerUtilsPlaybackGrp *pgstUtilsPlaybackGroup)
    {
        return false;
    }

    static bool switchAudioCodec(struct rdkGstreamerUtilsPlaybackGrp *pgstUtilsPlaybackGroup,bool isAudioAAC, GstCaps* newAudioCaps)
    {
        return false;
    }

    bool performAudioTrackCodecChannelSwitch_soc(struct rdkGstreamerUtilsPlaybackGrp *pgstUtilsPlaybackGroup, const void *pSampleAttr, AudioAttributes *pAudioAttr, uint32_t *pStatus, unsigned int *pui32Delay,
                                                 llong *pAudioChangeTargetPts, const llong *currentDispPts, unsigned int *audio_change_stage, GstCaps **appsrcCaps,
                                                 bool *audioaac, bool svpenabled, GstElement *aSrc, bool *ret)
    {
        return false;
    }

    void setAppSrcParams_soc(GstElement *aSrc,MediaType mediatype)
    {
        return;
    }

    void setPixelAspectRatio_soc(GstCaps ** ppCaps,GstCaps *appsrcCaps,uint32_t pixelAspectRatioX,uint32_t pixelAspectRatioY)
    {
        return;
    }

    void deepElementAdded_soc (struct rdkGstreamerUtilsPlaybackGrp *pgstUtilsPlaybackGroup,GstBin* pipeline, GstBin* bin, GstElement* element)
    {
        return;
    }

    #define GST_FIFO_SIZE_MS (131)
    void audioMixerGetDeviceInfo_soc(uint32_t& preferredFrames, uint32_t& maximumFrames)
    {
        return;
    }

    size_t audioMixerGetBufferDelay_soc(int64_t queuedBytes,int bufferDelayms)
    {
        return 0;
    }

    uint64_t audioMixerGetQueuedBytes_soc(uint64_t bytesPushed,uint64_t bytesPlayed)
    {
        return 0;
    }

    void audioMixerConfigurePipeline_soc(GstElement *gstPipeline,GstElement *aSink,GstElement *aSrc,bool attenuateOutput)
    {
        return;
    }

    uint64_t audioMixerGetFifoSize_soc()
    {
        return 0;
    }

    void setVideoSinkMode_soc(GstElement * videoSink)
    {
        return;
    }

   static bool IsH265Stream(std::string codec)
    {
        return false;
    }

    void configVideoCap_soc(std::string vCodec,uint32_t imageWidth,uint32_t imageHeight,uint32_t frameRateValue,uint32_t frameRateScale,bool svpEnabled,gchar **capsString)
    {
        return;
    }

    void setKeyFrameFlag_soc(GstBuffer *gstBuffer,bool val)
    {
        return;
    }

    bool getDelayTimerEnabled_soc()
    {
        return false;
    }

    void switchToAudioMasterMode_soc()
    {
        return;
    }

    void SetAudioServerParam_soc(bool enabled)
    {
        return;
    }

    void constructLLAudioPlayer_soc(int numChannel ,GstElement *gstPipeline ,GstElement *aSrc,GstElement *aSink,GstElement *aFilter,GstElement *aDecoder)
    {
        return;
    }

    void configAudioCap_soc(AudioAttributes *pAttrib, bool *audioaac, bool svpenabled, GstCaps **appsrcCaps, bool passthroughProperty)
    {
        return;
    }

    bool performAudioTrackCodecChannelSwitch_soc(struct rdkGstreamerUtilsPlaybackGrp *pgstUtilsPlaybackGroup, const void *pSampleAttr, AudioAttributes *pAudioAttr, uint32_t *pStatus, unsigned int *pui32Delay,
                                                 llong *pAudioChangeTargetPts, const llong *pcurrentDispPts, unsigned int *audio_change_stage, GstCaps **appsrcCaps,
                                                 bool *audioaac, bool svpenabled, GstElement *aSrc, bool *ret, bool passthroughProperty)
    {
        return false;
    }
}
