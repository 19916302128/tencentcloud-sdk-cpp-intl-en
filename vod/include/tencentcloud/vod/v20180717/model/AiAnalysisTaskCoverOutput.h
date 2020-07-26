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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_AIANALYSISTASKCOVEROUTPUT_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_AIANALYSISTASKCOVEROUTPUT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/MediaAiAnalysisCoverItem.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * Result information of intelligent cover generating
                */
                class AiAnalysisTaskCoverOutput : public AbstractModel
                {
                public:
                    AiAnalysisTaskCoverOutput();
                    ~AiAnalysisTaskCoverOutput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取List of intelligently generated covers.
                     * @return CoverSet List of intelligently generated covers.
                     */
                    std::vector<MediaAiAnalysisCoverItem> GetCoverSet() const;

                    /**
                     * 设置List of intelligently generated covers.
                     * @param CoverSet List of intelligently generated covers.
                     */
                    void SetCoverSet(const std::vector<MediaAiAnalysisCoverItem>& _coverSet);

                    /**
                     * 判断参数 CoverSet 是否已赋值
                     * @return CoverSet 是否已赋值
                     */
                    bool CoverSetHasBeenSet() const;

                private:

                    /**
                     * List of intelligently generated covers.
                     */
                    std::vector<MediaAiAnalysisCoverItem> m_coverSet;
                    bool m_coverSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_AIANALYSISTASKCOVEROUTPUT_H_
