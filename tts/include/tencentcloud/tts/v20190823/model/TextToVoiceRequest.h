/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef TENCENTCLOUD_TTS_V20190823_MODEL_TEXTTOVOICEREQUEST_H_
#define TENCENTCLOUD_TTS_V20190823_MODEL_TEXTTOVOICEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tts
    {
        namespace V20190823
        {
            namespace Model
            {
                /**
                * TextToVoice request structure.
                */
                class TextToVoiceRequest : public AbstractModel
                {
                public:
                    TextToVoiceRequest();
                    ~TextToVoiceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The source text for synthesizing speech, which is encoded in UTF-8.
It can contain up to 150 Chinese characters (a full-width punctuation as a Chinese character) or 500 letters ( a half-width punctuation as a letter).
                     * @return Text The source text for synthesizing speech, which is encoded in UTF-8.
It can contain up to 150 Chinese characters (a full-width punctuation as a Chinese character) or 500 letters ( a half-width punctuation as a letter).
                     */
                    std::string GetText() const;

                    /**
                     * 设置The source text for synthesizing speech, which is encoded in UTF-8.
It can contain up to 150 Chinese characters (a full-width punctuation as a Chinese character) or 500 letters ( a half-width punctuation as a letter).
                     * @param Text The source text for synthesizing speech, which is encoded in UTF-8.
It can contain up to 150 Chinese characters (a full-width punctuation as a Chinese character) or 500 letters ( a half-width punctuation as a letter).
                     */
                    void SetText(const std::string& _text);

                    /**
                     * 判断参数 Text 是否已赋值
                     * @return Text 是否已赋值
                     */
                    bool TextHasBeenSet() const;

                    /**
                     * 获取The `SessionId` of a request, which will be returned as-is. We recommend that you pass characters like uuid to prevent repetition.
                     * @return SessionId The `SessionId` of a request, which will be returned as-is. We recommend that you pass characters like uuid to prevent repetition.
                     */
                    std::string GetSessionId() const;

                    /**
                     * 设置The `SessionId` of a request, which will be returned as-is. We recommend that you pass characters like uuid to prevent repetition.
                     * @param SessionId The `SessionId` of a request, which will be returned as-is. We recommend that you pass characters like uuid to prevent repetition.
                     */
                    void SetSessionId(const std::string& _sessionId);

                    /**
                     * 判断参数 SessionId 是否已赋值
                     * @return SessionId 是否已赋值
                     */
                    bool SessionIdHasBeenSet() const;

                    /**
                     * 获取Volume range: [0, 10], corresponding to 11 volume levels. 0 is the default value, indicating the normal volume. There is no mute option.
                     * @return Volume Volume range: [0, 10], corresponding to 11 volume levels. 0 is the default value, indicating the normal volume. There is no mute option.
                     */
                    double GetVolume() const;

                    /**
                     * 设置Volume range: [0, 10], corresponding to 11 volume levels. 0 is the default value, indicating the normal volume. There is no mute option.
                     * @param Volume Volume range: [0, 10], corresponding to 11 volume levels. 0 is the default value, indicating the normal volume. There is no mute option.
                     */
                    void SetVolume(const double& _volume);

                    /**
                     * 判断参数 Volume 是否已赋值
                     * @return Volume 是否已赋值
                     */
                    bool VolumeHasBeenSet() const;

                    /**
                     * 获取
                     * @return Speed 
                     */
                    double GetSpeed() const;

                    /**
                     * 设置
                     * @param Speed 
                     */
                    void SetSpeed(const double& _speed);

                    /**
                     * 判断参数 Speed 是否已赋值
                     * @return Speed 是否已赋值
                     */
                    bool SpeedHasBeenSet() const;

                    /**
                     * 获取Project ID, which defaults to 0 and can be customized.
                     * @return ProjectId Project ID, which defaults to 0 and can be customized.
                     */
                    int64_t GetProjectId() const;

                    /**
                     * 设置Project ID, which defaults to 0 and can be customized.
                     * @param ProjectId Project ID, which defaults to 0 and can be customized.
                     */
                    void SetProjectId(const int64_t& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取Model type, with `1` for the default model.
                     * @return ModelType Model type, with `1` for the default model.
                     */
                    int64_t GetModelType() const;

                    /**
                     * 设置Model type, with `1` for the default model.
                     * @param ModelType Model type, with `1` for the default model.
                     */
                    void SetModelType(const int64_t& _modelType);

                    /**
                     * 判断参数 ModelType 是否已赋值
                     * @return ModelType 是否已赋值
                     */
                    bool ModelTypeHasBeenSet() const;

                    /**
                     * 获取Standard voices <li>10510000-zhixiaoyao (Chinese)</li><li>1001-zhiyu (Chinese)</li><li>1002-zhiling (Chinese)</li><li>1003-zhimei (Chinese)</li><li>1004-zhiyun (Chinese)</li><li>1005-zhili (Chinese)</li><li>1007-zhina (Chinese)</li><li>1008-zhiqi (Chinese)</li><li>1009-zhiyun (Chinese)</li><li>1010-zhihua (Chinese)</li><li>1017-zhirong (Chinese)</li><li>1018-zhijing (Chinese)</li><li>1050-WeJack (English)</li><li>1051-WeRose (English)</li>Premium voices<br>Premium voices have higher fidelity and more natural-sounding quality than standard voices. For price details, see [Purchase Guide](https://intl.cloud.tencent.com/document/product/1073/34112?from_cn_redirect=1).<br><li>100510000-zhixiaoyao (Chinese)</li><li>101001-zhiyu (Chinese)</li><li>101002-zhiling (Chinese)</li><li>101003-zhimei (Chinese)</li><li>101004-zhiyun (Chinese)</li><li>101005-zhili (Chinese)</li><li>101006-zhiyan (Chinese)</li><li>101007-zhina (Chinese)</li><li>101008-zhiqi (Chinese)</li><li>101009-zhiyun (Chinese)</li><li>101010-zhihua (Chinese)</li><li>101011-zhiyan (Chinese)</li><li>101012-zhidan (Chinese)</li><li>101013-zhihui (Chinese)</li><li>101014-zhining (Chinese)</li><li>101015-zhimeng (Chinese)</li><li>101016-zhitian (Chinese)</li><li>101017-zhirong (Chinese)</li><li>101018-zhijing (Chinese)</li><li>101019-zhitong (Cantonese)</li><li>101020-zhigang (Chinese)</li><li>101021-zhirui (Chinese)</li><li>101022-zhihong (Chinese)</li><li>101023-zhixuan (Chinese)</li><li>101024-zhihao (Chinese)</li><li>101025-zhiwei (Chinese)</li><li>101026-zhixi (Chinese)</li><li>101027-zhimei (Chinese)</li><li>101028-zhijie (Chinese)</li><li>101029-zhikai (Chinese)</li><li>101030-zhike (Chinese)</li><li>101031-zhikui (Chinese)</li><li>101032-zhifang (Chinese)</li><li>101033-zhibei (Chinese)</li><li>101034-zhilian (Chinese)</li><li>101035-zhiyi (Chinese)</li><li>101040-zhichuan (Sichuan dialect)</li><li>101050-WeJack (English)</li><li>101051-WeRose (English)</li><li>101052-zhiwei (Chinese)</li>
<li>101053-zhifang (Chinese)</li>
<li>101054-zhiyou (Chinese)</li>
<li>101055-zhiyou (Chinese)</li>
<li>101056-zhilin (Dongbei dialect)</li>
                     * @return VoiceType Standard voices <li>10510000-zhixiaoyao (Chinese)</li><li>1001-zhiyu (Chinese)</li><li>1002-zhiling (Chinese)</li><li>1003-zhimei (Chinese)</li><li>1004-zhiyun (Chinese)</li><li>1005-zhili (Chinese)</li><li>1007-zhina (Chinese)</li><li>1008-zhiqi (Chinese)</li><li>1009-zhiyun (Chinese)</li><li>1010-zhihua (Chinese)</li><li>1017-zhirong (Chinese)</li><li>1018-zhijing (Chinese)</li><li>1050-WeJack (English)</li><li>1051-WeRose (English)</li>Premium voices<br>Premium voices have higher fidelity and more natural-sounding quality than standard voices. For price details, see [Purchase Guide](https://intl.cloud.tencent.com/document/product/1073/34112?from_cn_redirect=1).<br><li>100510000-zhixiaoyao (Chinese)</li><li>101001-zhiyu (Chinese)</li><li>101002-zhiling (Chinese)</li><li>101003-zhimei (Chinese)</li><li>101004-zhiyun (Chinese)</li><li>101005-zhili (Chinese)</li><li>101006-zhiyan (Chinese)</li><li>101007-zhina (Chinese)</li><li>101008-zhiqi (Chinese)</li><li>101009-zhiyun (Chinese)</li><li>101010-zhihua (Chinese)</li><li>101011-zhiyan (Chinese)</li><li>101012-zhidan (Chinese)</li><li>101013-zhihui (Chinese)</li><li>101014-zhining (Chinese)</li><li>101015-zhimeng (Chinese)</li><li>101016-zhitian (Chinese)</li><li>101017-zhirong (Chinese)</li><li>101018-zhijing (Chinese)</li><li>101019-zhitong (Cantonese)</li><li>101020-zhigang (Chinese)</li><li>101021-zhirui (Chinese)</li><li>101022-zhihong (Chinese)</li><li>101023-zhixuan (Chinese)</li><li>101024-zhihao (Chinese)</li><li>101025-zhiwei (Chinese)</li><li>101026-zhixi (Chinese)</li><li>101027-zhimei (Chinese)</li><li>101028-zhijie (Chinese)</li><li>101029-zhikai (Chinese)</li><li>101030-zhike (Chinese)</li><li>101031-zhikui (Chinese)</li><li>101032-zhifang (Chinese)</li><li>101033-zhibei (Chinese)</li><li>101034-zhilian (Chinese)</li><li>101035-zhiyi (Chinese)</li><li>101040-zhichuan (Sichuan dialect)</li><li>101050-WeJack (English)</li><li>101051-WeRose (English)</li><li>101052-zhiwei (Chinese)</li>
<li>101053-zhifang (Chinese)</li>
<li>101054-zhiyou (Chinese)</li>
<li>101055-zhiyou (Chinese)</li>
<li>101056-zhilin (Dongbei dialect)</li>
                     */
                    int64_t GetVoiceType() const;

                    /**
                     * 设置Standard voices <li>10510000-zhixiaoyao (Chinese)</li><li>1001-zhiyu (Chinese)</li><li>1002-zhiling (Chinese)</li><li>1003-zhimei (Chinese)</li><li>1004-zhiyun (Chinese)</li><li>1005-zhili (Chinese)</li><li>1007-zhina (Chinese)</li><li>1008-zhiqi (Chinese)</li><li>1009-zhiyun (Chinese)</li><li>1010-zhihua (Chinese)</li><li>1017-zhirong (Chinese)</li><li>1018-zhijing (Chinese)</li><li>1050-WeJack (English)</li><li>1051-WeRose (English)</li>Premium voices<br>Premium voices have higher fidelity and more natural-sounding quality than standard voices. For price details, see [Purchase Guide](https://intl.cloud.tencent.com/document/product/1073/34112?from_cn_redirect=1).<br><li>100510000-zhixiaoyao (Chinese)</li><li>101001-zhiyu (Chinese)</li><li>101002-zhiling (Chinese)</li><li>101003-zhimei (Chinese)</li><li>101004-zhiyun (Chinese)</li><li>101005-zhili (Chinese)</li><li>101006-zhiyan (Chinese)</li><li>101007-zhina (Chinese)</li><li>101008-zhiqi (Chinese)</li><li>101009-zhiyun (Chinese)</li><li>101010-zhihua (Chinese)</li><li>101011-zhiyan (Chinese)</li><li>101012-zhidan (Chinese)</li><li>101013-zhihui (Chinese)</li><li>101014-zhining (Chinese)</li><li>101015-zhimeng (Chinese)</li><li>101016-zhitian (Chinese)</li><li>101017-zhirong (Chinese)</li><li>101018-zhijing (Chinese)</li><li>101019-zhitong (Cantonese)</li><li>101020-zhigang (Chinese)</li><li>101021-zhirui (Chinese)</li><li>101022-zhihong (Chinese)</li><li>101023-zhixuan (Chinese)</li><li>101024-zhihao (Chinese)</li><li>101025-zhiwei (Chinese)</li><li>101026-zhixi (Chinese)</li><li>101027-zhimei (Chinese)</li><li>101028-zhijie (Chinese)</li><li>101029-zhikai (Chinese)</li><li>101030-zhike (Chinese)</li><li>101031-zhikui (Chinese)</li><li>101032-zhifang (Chinese)</li><li>101033-zhibei (Chinese)</li><li>101034-zhilian (Chinese)</li><li>101035-zhiyi (Chinese)</li><li>101040-zhichuan (Sichuan dialect)</li><li>101050-WeJack (English)</li><li>101051-WeRose (English)</li><li>101052-zhiwei (Chinese)</li>
<li>101053-zhifang (Chinese)</li>
<li>101054-zhiyou (Chinese)</li>
<li>101055-zhiyou (Chinese)</li>
<li>101056-zhilin (Dongbei dialect)</li>
                     * @param VoiceType Standard voices <li>10510000-zhixiaoyao (Chinese)</li><li>1001-zhiyu (Chinese)</li><li>1002-zhiling (Chinese)</li><li>1003-zhimei (Chinese)</li><li>1004-zhiyun (Chinese)</li><li>1005-zhili (Chinese)</li><li>1007-zhina (Chinese)</li><li>1008-zhiqi (Chinese)</li><li>1009-zhiyun (Chinese)</li><li>1010-zhihua (Chinese)</li><li>1017-zhirong (Chinese)</li><li>1018-zhijing (Chinese)</li><li>1050-WeJack (English)</li><li>1051-WeRose (English)</li>Premium voices<br>Premium voices have higher fidelity and more natural-sounding quality than standard voices. For price details, see [Purchase Guide](https://intl.cloud.tencent.com/document/product/1073/34112?from_cn_redirect=1).<br><li>100510000-zhixiaoyao (Chinese)</li><li>101001-zhiyu (Chinese)</li><li>101002-zhiling (Chinese)</li><li>101003-zhimei (Chinese)</li><li>101004-zhiyun (Chinese)</li><li>101005-zhili (Chinese)</li><li>101006-zhiyan (Chinese)</li><li>101007-zhina (Chinese)</li><li>101008-zhiqi (Chinese)</li><li>101009-zhiyun (Chinese)</li><li>101010-zhihua (Chinese)</li><li>101011-zhiyan (Chinese)</li><li>101012-zhidan (Chinese)</li><li>101013-zhihui (Chinese)</li><li>101014-zhining (Chinese)</li><li>101015-zhimeng (Chinese)</li><li>101016-zhitian (Chinese)</li><li>101017-zhirong (Chinese)</li><li>101018-zhijing (Chinese)</li><li>101019-zhitong (Cantonese)</li><li>101020-zhigang (Chinese)</li><li>101021-zhirui (Chinese)</li><li>101022-zhihong (Chinese)</li><li>101023-zhixuan (Chinese)</li><li>101024-zhihao (Chinese)</li><li>101025-zhiwei (Chinese)</li><li>101026-zhixi (Chinese)</li><li>101027-zhimei (Chinese)</li><li>101028-zhijie (Chinese)</li><li>101029-zhikai (Chinese)</li><li>101030-zhike (Chinese)</li><li>101031-zhikui (Chinese)</li><li>101032-zhifang (Chinese)</li><li>101033-zhibei (Chinese)</li><li>101034-zhilian (Chinese)</li><li>101035-zhiyi (Chinese)</li><li>101040-zhichuan (Sichuan dialect)</li><li>101050-WeJack (English)</li><li>101051-WeRose (English)</li><li>101052-zhiwei (Chinese)</li>
<li>101053-zhifang (Chinese)</li>
<li>101054-zhiyou (Chinese)</li>
<li>101055-zhiyou (Chinese)</li>
<li>101056-zhilin (Dongbei dialect)</li>
                     */
                    void SetVoiceType(const int64_t& _voiceType);

                    /**
                     * 判断参数 VoiceType 是否已赋值
                     * @return VoiceType 是否已赋值
                     */
                    bool VoiceTypeHasBeenSet() const;

                    /**
                     * 获取Primary language type: <li>1 - Chinese (default)</li><li>2 - English</li>
                     * @return PrimaryLanguage Primary language type: <li>1 - Chinese (default)</li><li>2 - English</li>
                     */
                    int64_t GetPrimaryLanguage() const;

                    /**
                     * 设置Primary language type: <li>1 - Chinese (default)</li><li>2 - English</li>
                     * @param PrimaryLanguage Primary language type: <li>1 - Chinese (default)</li><li>2 - English</li>
                     */
                    void SetPrimaryLanguage(const int64_t& _primaryLanguage);

                    /**
                     * 判断参数 PrimaryLanguage 是否已赋值
                     * @return PrimaryLanguage 是否已赋值
                     */
                    bool PrimaryLanguageHasBeenSet() const;

                    /**
                     * 获取Audio sample rate: <li>16000: 16k (default)</li><li>8000: 8k</li>
                     * @return SampleRate Audio sample rate: <li>16000: 16k (default)</li><li>8000: 8k</li>
                     */
                    uint64_t GetSampleRate() const;

                    /**
                     * 设置Audio sample rate: <li>16000: 16k (default)</li><li>8000: 8k</li>
                     * @param SampleRate Audio sample rate: <li>16000: 16k (default)</li><li>8000: 8k</li>
                     */
                    void SetSampleRate(const uint64_t& _sampleRate);

                    /**
                     * 判断参数 SampleRate 是否已赋值
                     * @return SampleRate 是否已赋值
                     */
                    bool SampleRateHasBeenSet() const;

                    /**
                     * 获取Format of returned audio. Valid values: WAV (default), MP3, and PCM.
                     * @return Codec Format of returned audio. Valid values: WAV (default), MP3, and PCM.
                     */
                    std::string GetCodec() const;

                    /**
                     * 设置Format of returned audio. Valid values: WAV (default), MP3, and PCM.
                     * @param Codec Format of returned audio. Valid values: WAV (default), MP3, and PCM.
                     */
                    void SetCodec(const std::string& _codec);

                    /**
                     * 判断参数 Codec 是否已赋值
                     * @return Codec 是否已赋值
                     */
                    bool CodecHasBeenSet() const;

                    /**
                     * 获取Whether to enable the timestamp feature. Default value: `false`.
                     * @return EnableSubtitle Whether to enable the timestamp feature. Default value: `false`.
                     */
                    bool GetEnableSubtitle() const;

                    /**
                     * 设置Whether to enable the timestamp feature. Default value: `false`.
                     * @param EnableSubtitle Whether to enable the timestamp feature. Default value: `false`.
                     */
                    void SetEnableSubtitle(const bool& _enableSubtitle);

                    /**
                     * 判断参数 EnableSubtitle 是否已赋值
                     * @return EnableSubtitle 是否已赋值
                     */
                    bool EnableSubtitleHasBeenSet() const;

                    /**
                     * 获取Segmentation rate. Valid range: [0,1,2]; default value: `0`. The higher the value, the lower the rate, and the easier the segmentation. It is recommended not to change this parameter to ensure better synthesis quality.
                     * @return SegmentRate Segmentation rate. Valid range: [0,1,2]; default value: `0`. The higher the value, the lower the rate, and the easier the segmentation. It is recommended not to change this parameter to ensure better synthesis quality.
                     */
                    uint64_t GetSegmentRate() const;

                    /**
                     * 设置Segmentation rate. Valid range: [0,1,2]; default value: `0`. The higher the value, the lower the rate, and the easier the segmentation. It is recommended not to change this parameter to ensure better synthesis quality.
                     * @param SegmentRate Segmentation rate. Valid range: [0,1,2]; default value: `0`. The higher the value, the lower the rate, and the easier the segmentation. It is recommended not to change this parameter to ensure better synthesis quality.
                     */
                    void SetSegmentRate(const uint64_t& _segmentRate);

                    /**
                     * 判断参数 SegmentRate 是否已赋值
                     * @return SegmentRate 是否已赋值
                     */
                    bool SegmentRateHasBeenSet() const;

                private:

                    /**
                     * The source text for synthesizing speech, which is encoded in UTF-8.
It can contain up to 150 Chinese characters (a full-width punctuation as a Chinese character) or 500 letters ( a half-width punctuation as a letter).
                     */
                    std::string m_text;
                    bool m_textHasBeenSet;

                    /**
                     * The `SessionId` of a request, which will be returned as-is. We recommend that you pass characters like uuid to prevent repetition.
                     */
                    std::string m_sessionId;
                    bool m_sessionIdHasBeenSet;

                    /**
                     * Volume range: [0, 10], corresponding to 11 volume levels. 0 is the default value, indicating the normal volume. There is no mute option.
                     */
                    double m_volume;
                    bool m_volumeHasBeenSet;

                    /**
                     * 
                     */
                    double m_speed;
                    bool m_speedHasBeenSet;

                    /**
                     * Project ID, which defaults to 0 and can be customized.
                     */
                    int64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Model type, with `1` for the default model.
                     */
                    int64_t m_modelType;
                    bool m_modelTypeHasBeenSet;

                    /**
                     * Standard voices <li>10510000-zhixiaoyao (Chinese)</li><li>1001-zhiyu (Chinese)</li><li>1002-zhiling (Chinese)</li><li>1003-zhimei (Chinese)</li><li>1004-zhiyun (Chinese)</li><li>1005-zhili (Chinese)</li><li>1007-zhina (Chinese)</li><li>1008-zhiqi (Chinese)</li><li>1009-zhiyun (Chinese)</li><li>1010-zhihua (Chinese)</li><li>1017-zhirong (Chinese)</li><li>1018-zhijing (Chinese)</li><li>1050-WeJack (English)</li><li>1051-WeRose (English)</li>Premium voices<br>Premium voices have higher fidelity and more natural-sounding quality than standard voices. For price details, see [Purchase Guide](https://intl.cloud.tencent.com/document/product/1073/34112?from_cn_redirect=1).<br><li>100510000-zhixiaoyao (Chinese)</li><li>101001-zhiyu (Chinese)</li><li>101002-zhiling (Chinese)</li><li>101003-zhimei (Chinese)</li><li>101004-zhiyun (Chinese)</li><li>101005-zhili (Chinese)</li><li>101006-zhiyan (Chinese)</li><li>101007-zhina (Chinese)</li><li>101008-zhiqi (Chinese)</li><li>101009-zhiyun (Chinese)</li><li>101010-zhihua (Chinese)</li><li>101011-zhiyan (Chinese)</li><li>101012-zhidan (Chinese)</li><li>101013-zhihui (Chinese)</li><li>101014-zhining (Chinese)</li><li>101015-zhimeng (Chinese)</li><li>101016-zhitian (Chinese)</li><li>101017-zhirong (Chinese)</li><li>101018-zhijing (Chinese)</li><li>101019-zhitong (Cantonese)</li><li>101020-zhigang (Chinese)</li><li>101021-zhirui (Chinese)</li><li>101022-zhihong (Chinese)</li><li>101023-zhixuan (Chinese)</li><li>101024-zhihao (Chinese)</li><li>101025-zhiwei (Chinese)</li><li>101026-zhixi (Chinese)</li><li>101027-zhimei (Chinese)</li><li>101028-zhijie (Chinese)</li><li>101029-zhikai (Chinese)</li><li>101030-zhike (Chinese)</li><li>101031-zhikui (Chinese)</li><li>101032-zhifang (Chinese)</li><li>101033-zhibei (Chinese)</li><li>101034-zhilian (Chinese)</li><li>101035-zhiyi (Chinese)</li><li>101040-zhichuan (Sichuan dialect)</li><li>101050-WeJack (English)</li><li>101051-WeRose (English)</li><li>101052-zhiwei (Chinese)</li>
<li>101053-zhifang (Chinese)</li>
<li>101054-zhiyou (Chinese)</li>
<li>101055-zhiyou (Chinese)</li>
<li>101056-zhilin (Dongbei dialect)</li>
                     */
                    int64_t m_voiceType;
                    bool m_voiceTypeHasBeenSet;

                    /**
                     * Primary language type: <li>1 - Chinese (default)</li><li>2 - English</li>
                     */
                    int64_t m_primaryLanguage;
                    bool m_primaryLanguageHasBeenSet;

                    /**
                     * Audio sample rate: <li>16000: 16k (default)</li><li>8000: 8k</li>
                     */
                    uint64_t m_sampleRate;
                    bool m_sampleRateHasBeenSet;

                    /**
                     * Format of returned audio. Valid values: WAV (default), MP3, and PCM.
                     */
                    std::string m_codec;
                    bool m_codecHasBeenSet;

                    /**
                     * Whether to enable the timestamp feature. Default value: `false`.
                     */
                    bool m_enableSubtitle;
                    bool m_enableSubtitleHasBeenSet;

                    /**
                     * Segmentation rate. Valid range: [0,1,2]; default value: `0`. The higher the value, the lower the rate, and the easier the segmentation. It is recommended not to change this parameter to ensure better synthesis quality.
                     */
                    uint64_t m_segmentRate;
                    bool m_segmentRateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TTS_V20190823_MODEL_TEXTTOVOICEREQUEST_H_
