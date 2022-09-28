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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBELOGTOPICTASKSRESPONSE_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBELOGTOPICTASKSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/ClsLogTopicInfo.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * DescribeLogTopicTasks response structure.
                */
                class DescribeLogTopicTasksResponse : public AbstractModel
                {
                public:
                    DescribeLogTopicTasksResponse();
                    ~DescribeLogTopicTasksResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取List of shipping tasks.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TopicList List of shipping tasks.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<ClsLogTopicInfo> GetTopicList() const;

                    /**
                     * 判断参数 TopicList 是否已赋值
                     * @return TopicList 是否已赋值
                     */
                    bool TopicListHasBeenSet() const;

                    /**
                     * 获取Total number of query results.
                     * @return TotalCount Total number of query results.
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     */
                    bool TotalCountHasBeenSet() const;

                private:

                    /**
                     * List of shipping tasks.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<ClsLogTopicInfo> m_topicList;
                    bool m_topicListHasBeenSet;

                    /**
                     * Total number of query results.
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBELOGTOPICTASKSRESPONSE_H_
