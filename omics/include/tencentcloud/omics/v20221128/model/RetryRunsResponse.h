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

#ifndef TENCENTCLOUD_OMICS_V20221128_MODEL_RETRYRUNSRESPONSE_H_
#define TENCENTCLOUD_OMICS_V20221128_MODEL_RETRYRUNSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Omics
    {
        namespace V20221128
        {
            namespace Model
            {
                /**
                * RetryRuns response structure.
                */
                class RetryRunsResponse : public AbstractModel
                {
                public:
                    RetryRunsResponse();
                    ~RetryRunsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取New run group ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RunGroupId New run group ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetRunGroupId() const;

                    /**
                     * 判断参数 RunGroupId 是否已赋值
                     * @return RunGroupId 是否已赋值
                     * 
                     */
                    bool RunGroupIdHasBeenSet() const;

                private:

                    /**
                     * New run group ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_runGroupId;
                    bool m_runGroupIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OMICS_V20221128_MODEL_RETRYRUNSRESPONSE_H_
