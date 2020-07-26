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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBEDEFAULTPARAMSREQUEST_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBEDEFAULTPARAMSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdb
    {
        namespace V20170320
        {
            namespace Model
            {
                /**
                * DescribeDefaultParams request structure.
                */
                class DescribeDefaultParamsRequest : public AbstractModel
                {
                public:
                    DescribeDefaultParamsRequest();
                    ~DescribeDefaultParamsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取MySQL version. Currently, the supported versions are ["5.1", "5.5", "5.6", "5.7"].
                     * @return EngineVersion MySQL version. Currently, the supported versions are ["5.1", "5.5", "5.6", "5.7"].
                     */
                    std::string GetEngineVersion() const;

                    /**
                     * 设置MySQL version. Currently, the supported versions are ["5.1", "5.5", "5.6", "5.7"].
                     * @param EngineVersion MySQL version. Currently, the supported versions are ["5.1", "5.5", "5.6", "5.7"].
                     */
                    void SetEngineVersion(const std::string& _engineVersion);

                    /**
                     * 判断参数 EngineVersion 是否已赋值
                     * @return EngineVersion 是否已赋值
                     */
                    bool EngineVersionHasBeenSet() const;

                private:

                    /**
                     * MySQL version. Currently, the supported versions are ["5.1", "5.5", "5.6", "5.7"].
                     */
                    std::string m_engineVersion;
                    bool m_engineVersionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBEDEFAULTPARAMSREQUEST_H_
