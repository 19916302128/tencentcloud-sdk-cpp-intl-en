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

#ifndef TENCENTCLOUD_CDWPG_V20201230_MODEL_DESCRIBEINSTANCESTATEREQUEST_H_
#define TENCENTCLOUD_CDWPG_V20201230_MODEL_DESCRIBEINSTANCESTATEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdwpg
    {
        namespace V20201230
        {
            namespace Model
            {
                /**
                * DescribeInstanceState request structure.
                */
                class DescribeInstanceStateRequest : public AbstractModel
                {
                public:
                    DescribeInstanceStateRequest();
                    ~DescribeInstanceStateRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取 Instance id
                     * @return InstanceId  Instance id
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置 Instance id
                     * @param _instanceId  Instance id
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                private:

                    /**
                     *  Instance id
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWPG_V20201230_MODEL_DESCRIBEINSTANCESTATEREQUEST_H_
