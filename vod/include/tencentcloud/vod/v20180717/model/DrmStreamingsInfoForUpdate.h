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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_DRMSTREAMINGSINFOFORUPDATE_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_DRMSTREAMINGSINFOFORUPDATE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * Modification object of DRM-protected adaptive bitstream playback information
                */
                class DrmStreamingsInfoForUpdate : public AbstractModel
                {
                public:
                    DrmStreamingsInfoForUpdate();
                    ~DrmStreamingsInfoForUpdate() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取ID of the adaptive bitrate streaming template whose protection type is SimpleAES.
                     * @return SimpleAesDefinition ID of the adaptive bitrate streaming template whose protection type is SimpleAES.
                     */
                    uint64_t GetSimpleAesDefinition() const;

                    /**
                     * 设置ID of the adaptive bitrate streaming template whose protection type is SimpleAES.
                     * @param SimpleAesDefinition ID of the adaptive bitrate streaming template whose protection type is SimpleAES.
                     */
                    void SetSimpleAesDefinition(const uint64_t& _simpleAesDefinition);

                    /**
                     * 判断参数 SimpleAesDefinition 是否已赋值
                     * @return SimpleAesDefinition 是否已赋值
                     */
                    bool SimpleAesDefinitionHasBeenSet() const;

                private:

                    /**
                     * ID of the adaptive bitrate streaming template whose protection type is SimpleAES.
                     */
                    uint64_t m_simpleAesDefinition;
                    bool m_simpleAesDefinitionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_DRMSTREAMINGSINFOFORUPDATE_H_
