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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_MODIFYLIVEDOMAINCERTREQUEST_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_MODIFYLIVEDOMAINCERTREQUEST_H_

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
                * ModifyLiveDomainCert request structure.
                */
                class ModifyLiveDomainCertRequest : public AbstractModel
                {
                public:
                    ModifyLiveDomainCertRequest();
                    ~ModifyLiveDomainCertRequest() = default;
                    std::string ToJsonString() const;


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
                     * 获取Certificate ID.
                     * @return CertId Certificate ID.
                     */
                    int64_t GetCertId() const;

                    /**
                     * 设置Certificate ID.
                     * @param CertId Certificate ID.
                     */
                    void SetCertId(const int64_t& _certId);

                    /**
                     * 判断参数 CertId 是否已赋值
                     * @return CertId 是否已赋值
                     */
                    bool CertIdHasBeenSet() const;

                    /**
                     * 获取Status. 0: off, 1: on.
                     * @return Status Status. 0: off, 1: on.
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置Status. 0: off, 1: on.
                     * @param Status Status. 0: off, 1: on.
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * Playback domain name.
                     */
                    std::string m_domainName;
                    bool m_domainNameHasBeenSet;

                    /**
                     * Certificate ID.
                     */
                    int64_t m_certId;
                    bool m_certIdHasBeenSet;

                    /**
                     * Status. 0: off, 1: on.
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_MODIFYLIVEDOMAINCERTREQUEST_H_
