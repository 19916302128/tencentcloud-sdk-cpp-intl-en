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

#ifndef TENCENTCLOUD_CAM_V20190116_MODEL_UPDATEPOLICYRESPONSE_H_
#define TENCENTCLOUD_CAM_V20190116_MODEL_UPDATEPOLICYRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cam
    {
        namespace V20190116
        {
            namespace Model
            {
                /**
                * UpdatePolicy response structure.
                */
                class UpdatePolicyResponse : public AbstractModel
                {
                public:
                    UpdatePolicyResponse();
                    ~UpdatePolicyResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);


                    /**
                     * 获取Policy ID
Note: This field may return null, indicating that no valid value was found.
                     * @return PolicyId Policy ID
Note: This field may return null, indicating that no valid value was found.
                     */
                    uint64_t GetPolicyId() const;

                    /**
                     * 判断参数 PolicyId 是否已赋值
                     * @return PolicyId 是否已赋值
                     */
                    bool PolicyIdHasBeenSet() const;

                private:

                    /**
                     * Policy ID
Note: This field may return null, indicating that no valid value was found.
                     */
                    uint64_t m_policyId;
                    bool m_policyIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAM_V20190116_MODEL_UPDATEPOLICYRESPONSE_H_
