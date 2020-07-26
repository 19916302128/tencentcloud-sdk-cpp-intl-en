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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_BINDLIVEDOMAINCERTREQUEST_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_BINDLIVEDOMAINCERTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Live
    {
        namespace V20180801
        {
            namespace Model
            {
                /**
                * BindLiveDomainCert request structure.
                */
                class BindLiveDomainCertRequest : public AbstractModel
                {
                public:
                    BindLiveDomainCertRequest();
                    ~BindLiveDomainCertRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Certificate ID, which can be obtained through the `CreateLiveCert` API.
                     * @return CertId Certificate ID, which can be obtained through the `CreateLiveCert` API.
                     */
                    int64_t GetCertId() const;

                    /**
                     * 设置Certificate ID, which can be obtained through the `CreateLiveCert` API.
                     * @param CertId Certificate ID, which can be obtained through the `CreateLiveCert` API.
                     */
                    void SetCertId(const int64_t& _certId);

                    /**
                     * 判断参数 CertId 是否已赋值
                     * @return CertId 是否已赋值
                     */
                    bool CertIdHasBeenSet() const;

                    /**
                     * 获取Playback domain name.
                     * @return DomainName Playback domain name.
                     */
                    std::string GetDomainName() const;

                    /**
                     * 设置Playback domain name.
                     * @param DomainName Playback domain name.
                     */
                    void SetDomainName(const std::string& _domainName);

                    /**
                     * 判断参数 DomainName 是否已赋值
                     * @return DomainName 是否已赋值
                     */
                    bool DomainNameHasBeenSet() const;

                    /**
                     * 获取HTTPS status. 0: disabled, 1: enabled.
                     * @return Status HTTPS status. 0: disabled, 1: enabled.
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置HTTPS status. 0: disabled, 1: enabled.
                     * @param Status HTTPS status. 0: disabled, 1: enabled.
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * Certificate ID, which can be obtained through the `CreateLiveCert` API.
                     */
                    int64_t m_certId;
                    bool m_certIdHasBeenSet;

                    /**
                     * Playback domain name.
                     */
                    std::string m_domainName;
                    bool m_domainNameHasBeenSet;

                    /**
                     * HTTPS status. 0: disabled, 1: enabled.
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_BINDLIVEDOMAINCERTREQUEST_H_
