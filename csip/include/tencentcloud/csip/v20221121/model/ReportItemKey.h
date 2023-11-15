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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_REPORTITEMKEY_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_REPORTITEMKEY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * Report item
                */
                class ReportItemKey : public AbstractModel
                {
                public:
                    ReportItemKey();
                    ~ReportItemKey() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取List of report IDs.
                     * @return TaskLogList List of report IDs.
                     * 
                     */
                    std::vector<std::string> GetTaskLogList() const;

                    /**
                     * 设置List of report IDs.
                     * @param _taskLogList List of report IDs.
                     * 
                     */
                    void SetTaskLogList(const std::vector<std::string>& _taskLogList);

                    /**
                     * 判断参数 TaskLogList 是否已赋值
                     * @return TaskLogList 是否已赋值
                     * 
                     */
                    bool TaskLogListHasBeenSet() const;

                private:

                    /**
                     * List of report IDs.
                     */
                    std::vector<std::string> m_taskLogList;
                    bool m_taskLogListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_REPORTITEMKEY_H_
