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

#ifndef TENCENTCLOUD_STS_V20180813_MODEL_ASSUMEROLEREQUEST_H_
#define TENCENTCLOUD_STS_V20180813_MODEL_ASSUMEROLEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Sts
    {
        namespace V20180813
        {
            namespace Model
            {
                /**
                * AssumeRole request structure.
                */
                class AssumeRoleRequest : public AbstractModel
                {
                public:
                    AssumeRoleRequest();
                    ~AssumeRoleRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Role resource description, such as qcs::cam::uin/12345678:role/4611686018427397919, qcs::cam::uin/12345678:roleName/testRoleName
                     * @return RoleArn Role resource description, such as qcs::cam::uin/12345678:role/4611686018427397919, qcs::cam::uin/12345678:roleName/testRoleName
                     */
                    std::string GetRoleArn() const;

                    /**
                     * 设置Role resource description, such as qcs::cam::uin/12345678:role/4611686018427397919, qcs::cam::uin/12345678:roleName/testRoleName
                     * @param RoleArn Role resource description, such as qcs::cam::uin/12345678:role/4611686018427397919, qcs::cam::uin/12345678:roleName/testRoleName
                     */
                    void SetRoleArn(const std::string& _roleArn);

                    /**
                     * 判断参数 RoleArn 是否已赋值
                     * @return RoleArn 是否已赋值
                     */
                    bool RoleArnHasBeenSet() const;

                    /**
                     * 获取User-defined temporary session name
                     * @return RoleSessionName User-defined temporary session name
                     */
                    std::string GetRoleSessionName() const;

                    /**
                     * 设置User-defined temporary session name
                     * @param RoleSessionName User-defined temporary session name
                     */
                    void SetRoleSessionName(const std::string& _roleSessionName);

                    /**
                     * 判断参数 RoleSessionName 是否已赋值
                     * @return RoleSessionName 是否已赋值
                     */
                    bool RoleSessionNameHasBeenSet() const;

                    /**
                     * 获取Specifies the validity period of credentials in seconds. Default value: 7200. Maximum value: 43200
                     * @return DurationSeconds Specifies the validity period of credentials in seconds. Default value: 7200. Maximum value: 43200
                     */
                    uint64_t GetDurationSeconds() const;

                    /**
                     * 设置Specifies the validity period of credentials in seconds. Default value: 7200. Maximum value: 43200
                     * @param DurationSeconds Specifies the validity period of credentials in seconds. Default value: 7200. Maximum value: 43200
                     */
                    void SetDurationSeconds(const uint64_t& _durationSeconds);

                    /**
                     * 判断参数 DurationSeconds 是否已赋值
                     * @return DurationSeconds 是否已赋值
                     */
                    bool DurationSecondsHasBeenSet() const;

                    /**
                     * 获取Policy description
Note:
1. The policy needs to be URL-encoded (if you request a TencentCloud API through the GET method, all parameters must be URL-encoded again in accordance with [Signature v3](https://cloud.tencent.com/document/api/598/33159#1.-.E6.8B.BC.E6.8E.A5.E8.A7.84.E8.8C.83.E8.AF.B7.E6.B1.82.E4.B8.B2) before the request is sent).
2. For the policy syntax, please see CAM’s [Syntax Logic](https://cloud.tencent.com/document/product/598/10603).
3. The policy cannot contain the `principal` element.
                     * @return Policy Policy description
Note:
1. The policy needs to be URL-encoded (if you request a TencentCloud API through the GET method, all parameters must be URL-encoded again in accordance with [Signature v3](https://cloud.tencent.com/document/api/598/33159#1.-.E6.8B.BC.E6.8E.A5.E8.A7.84.E8.8C.83.E8.AF.B7.E6.B1.82.E4.B8.B2) before the request is sent).
2. For the policy syntax, please see CAM’s [Syntax Logic](https://cloud.tencent.com/document/product/598/10603).
3. The policy cannot contain the `principal` element.
                     */
                    std::string GetPolicy() const;

                    /**
                     * 设置Policy description
Note:
1. The policy needs to be URL-encoded (if you request a TencentCloud API through the GET method, all parameters must be URL-encoded again in accordance with [Signature v3](https://cloud.tencent.com/document/api/598/33159#1.-.E6.8B.BC.E6.8E.A5.E8.A7.84.E8.8C.83.E8.AF.B7.E6.B1.82.E4.B8.B2) before the request is sent).
2. For the policy syntax, please see CAM’s [Syntax Logic](https://cloud.tencent.com/document/product/598/10603).
3. The policy cannot contain the `principal` element.
                     * @param Policy Policy description
Note:
1. The policy needs to be URL-encoded (if you request a TencentCloud API through the GET method, all parameters must be URL-encoded again in accordance with [Signature v3](https://cloud.tencent.com/document/api/598/33159#1.-.E6.8B.BC.E6.8E.A5.E8.A7.84.E8.8C.83.E8.AF.B7.E6.B1.82.E4.B8.B2) before the request is sent).
2. For the policy syntax, please see CAM’s [Syntax Logic](https://cloud.tencent.com/document/product/598/10603).
3. The policy cannot contain the `principal` element.
                     */
                    void SetPolicy(const std::string& _policy);

                    /**
                     * 判断参数 Policy 是否已赋值
                     * @return Policy 是否已赋值
                     */
                    bool PolicyHasBeenSet() const;

                private:

                    /**
                     * Role resource description, such as qcs::cam::uin/12345678:role/4611686018427397919, qcs::cam::uin/12345678:roleName/testRoleName
                     */
                    std::string m_roleArn;
                    bool m_roleArnHasBeenSet;

                    /**
                     * User-defined temporary session name
                     */
                    std::string m_roleSessionName;
                    bool m_roleSessionNameHasBeenSet;

                    /**
                     * Specifies the validity period of credentials in seconds. Default value: 7200. Maximum value: 43200
                     */
                    uint64_t m_durationSeconds;
                    bool m_durationSecondsHasBeenSet;

                    /**
                     * Policy description
Note:
1. The policy needs to be URL-encoded (if you request a TencentCloud API through the GET method, all parameters must be URL-encoded again in accordance with [Signature v3](https://cloud.tencent.com/document/api/598/33159#1.-.E6.8B.BC.E6.8E.A5.E8.A7.84.E8.8C.83.E8.AF.B7.E6.B1.82.E4.B8.B2) before the request is sent).
2. For the policy syntax, please see CAM’s [Syntax Logic](https://cloud.tencent.com/document/product/598/10603).
3. The policy cannot contain the `principal` element.
                     */
                    std::string m_policy;
                    bool m_policyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_STS_V20180813_MODEL_ASSUMEROLEREQUEST_H_
