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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_CHECKCERTIFICATEREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_CHECKCERTIFICATEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * CheckCertificate request structure.
                */
                class CheckCertificateRequest : public AbstractModel
                {
                public:
                    CheckCertificateRequest();
                    ~CheckCertificateRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Content of the certificate.
                     * @return Certificate Content of the certificate.
                     */
                    std::string GetCertificate() const;

                    /**
                     * 设置Content of the certificate.
                     * @param Certificate Content of the certificate.
                     */
                    void SetCertificate(const std::string& _certificate);

                    /**
                     * 判断参数 Certificate 是否已赋值
                     * @return Certificate 是否已赋值
                     */
                    bool CertificateHasBeenSet() const;

                    /**
                     * 获取Content of the private key.
                     * @return PrivateKey Content of the private key.
                     */
                    std::string GetPrivateKey() const;

                    /**
                     * 设置Content of the private key.
                     * @param PrivateKey Content of the private key.
                     */
                    void SetPrivateKey(const std::string& _privateKey);

                    /**
                     * 判断参数 PrivateKey 是否已赋值
                     * @return PrivateKey 是否已赋值
                     */
                    bool PrivateKeyHasBeenSet() const;

                private:

                    /**
                     * Content of the certificate.
                     */
                    std::string m_certificate;
                    bool m_certificateHasBeenSet;

                    /**
                     * Content of the private key.
                     */
                    std::string m_privateKey;
                    bool m_privateKeyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_CHECKCERTIFICATEREQUEST_H_
