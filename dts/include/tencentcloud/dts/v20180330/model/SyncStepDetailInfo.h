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

#ifndef TENCENTCLOUD_DTS_V20180330_MODEL_SYNCSTEPDETAILINFO_H_
#define TENCENTCLOUD_DTS_V20180330_MODEL_SYNCSTEPDETAILINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dts
    {
        namespace V20180330
        {
            namespace Model
            {
                /**
                * Sync task progress
                */
                class SyncStepDetailInfo : public AbstractModel
                {
                public:
                    SyncStepDetailInfo();
                    ~SyncStepDetailInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Step number
                     * @return StepNo Step number
                     */
                    uint64_t GetStepNo() const;

                    /**
                     * 设置Step number
                     * @param StepNo Step number
                     */
                    void SetStepNo(const uint64_t& _stepNo);

                    /**
                     * 判断参数 StepNo 是否已赋值
                     * @return StepNo 是否已赋值
                     */
                    bool StepNoHasBeenSet() const;

                    /**
                     * 获取Step name
                     * @return StepName Step name
                     */
                    std::string GetStepName() const;

                    /**
                     * 设置Step name
                     * @param StepName Step name
                     */
                    void SetStepName(const std::string& _stepName);

                    /**
                     * 判断参数 StepName 是否已赋值
                     * @return StepName 是否已赋值
                     */
                    bool StepNameHasBeenSet() const;

                    /**
                     * 获取Whether it can be stopped
                     * @return CanStop Whether it can be stopped
                     */
                    int64_t GetCanStop() const;

                    /**
                     * 设置Whether it can be stopped
                     * @param CanStop Whether it can be stopped
                     */
                    void SetCanStop(const int64_t& _canStop);

                    /**
                     * 判断参数 CanStop 是否已赋值
                     * @return CanStop 是否已赋值
                     */
                    bool CanStopHasBeenSet() const;

                    /**
                     * 获取Step ID
                     * @return StepId Step ID
                     */
                    int64_t GetStepId() const;

                    /**
                     * 设置Step ID
                     * @param StepId Step ID
                     */
                    void SetStepId(const int64_t& _stepId);

                    /**
                     * 判断参数 StepId 是否已赋值
                     * @return StepId 是否已赋值
                     */
                    bool StepIdHasBeenSet() const;

                private:

                    /**
                     * Step number
                     */
                    uint64_t m_stepNo;
                    bool m_stepNoHasBeenSet;

                    /**
                     * Step name
                     */
                    std::string m_stepName;
                    bool m_stepNameHasBeenSet;

                    /**
                     * Whether it can be stopped
                     */
                    int64_t m_canStop;
                    bool m_canStopHasBeenSet;

                    /**
                     * Step ID
                     */
                    int64_t m_stepId;
                    bool m_stepIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20180330_MODEL_SYNCSTEPDETAILINFO_H_
