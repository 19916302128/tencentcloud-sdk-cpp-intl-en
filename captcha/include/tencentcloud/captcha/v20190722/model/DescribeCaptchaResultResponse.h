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

#ifndef TENCENTCLOUD_CAPTCHA_V20190722_MODEL_DESCRIBECAPTCHARESULTRESPONSE_H_
#define TENCENTCLOUD_CAPTCHA_V20190722_MODEL_DESCRIBECAPTCHARESULTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Captcha
    {
        namespace V20190722
        {
            namespace Model
            {
                /**
                * DescribeCaptchaResult response structure.
                */
                class DescribeCaptchaResultResponse : public AbstractModel
                {
                public:
                    DescribeCaptchaResultResponse();
                    ~DescribeCaptchaResultResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
  
 
 
 
 
 
  
 
                     * @return CaptchaCode  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
  
 
 
 
 
 
  
 
                     */
                    int64_t GetCaptchaCode() const;

                    /**
                     * 判断参数 CaptchaCode 是否已赋值
                     * @return CaptchaCode 是否已赋值
                     */
                    bool CaptchaCodeHasBeenSet() const;

                    /**
                     * 获取Status description and verification error message
Note: This field may return `null`, indicating that no valid value was found.
                     * @return CaptchaMsg Status description and verification error message
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    std::string GetCaptchaMsg() const;

                    /**
                     * 判断参数 CaptchaMsg 是否已赋值
                     * @return CaptchaMsg 是否已赋值
                     */
                    bool CaptchaMsgHasBeenSet() const;

                    /**
                     * 获取This parameter returns the result of imperceptible verification. This parameter is not available for Tencent Cloud International yet.
`0`: The request is trusted.
`100`: The request is malicious.
Note: This field may return `null`, indicating that no valid value was found.
                     * @return EvilLevel This parameter returns the result of imperceptible verification. This parameter is not available for Tencent Cloud International yet.
`0`: The request is trusted.
`100`: The request is malicious.
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    int64_t GetEvilLevel() const;

                    /**
                     * 判断参数 EvilLevel 是否已赋值
                     * @return EvilLevel 是否已赋值
                     */
                    bool EvilLevelHasBeenSet() const;

                    /**
                     * 获取The timestamp when the frontend obtains the CAPTCHA.
Note: This field may return `null`, indicating that no valid value was found.
                     * @return GetCaptchaTime The timestamp when the frontend obtains the CAPTCHA.
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    int64_t GetGetCaptchaTime() const;

                    /**
                     * 判断参数 GetCaptchaTime 是否已赋值
                     * @return GetCaptchaTime 是否已赋值
                     */
                    bool GetCaptchaTimeHasBeenSet() const;

                private:

                    /**
                     *  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
  
 
 
 
 
 
  
 
                     */
                    int64_t m_captchaCode;
                    bool m_captchaCodeHasBeenSet;

                    /**
                     * Status description and verification error message
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    std::string m_captchaMsg;
                    bool m_captchaMsgHasBeenSet;

                    /**
                     * This parameter returns the result of imperceptible verification. This parameter is not available for Tencent Cloud International yet.
`0`: The request is trusted.
`100`: The request is malicious.
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    int64_t m_evilLevel;
                    bool m_evilLevelHasBeenSet;

                    /**
                     * The timestamp when the frontend obtains the CAPTCHA.
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    int64_t m_getCaptchaTime;
                    bool m_getCaptchaTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAPTCHA_V20190722_MODEL_DESCRIBECAPTCHARESULTRESPONSE_H_
