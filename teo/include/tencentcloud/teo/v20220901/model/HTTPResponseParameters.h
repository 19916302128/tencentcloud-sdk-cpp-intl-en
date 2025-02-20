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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_HTTPRESPONSEPARAMETERS_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_HTTPRESPONSEPARAMETERS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * HTTP response configuration parameters.
                */
                class HTTPResponseParameters : public AbstractModel
                {
                public:
                    HTTPResponseParameters();
                    ~HTTPResponseParameters() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Response status code. supports 2xx, 4xx, 5xx, excluding 499, 514, 101, 301, 302, 303, 509, 520-599.
                     * @return StatusCode Response status code. supports 2xx, 4xx, 5xx, excluding 499, 514, 101, 301, 302, 303, 509, 520-599.
                     * 
                     */
                    int64_t GetStatusCode() const;

                    /**
                     * 设置Response status code. supports 2xx, 4xx, 5xx, excluding 499, 514, 101, 301, 302, 303, 509, 520-599.
                     * @param _statusCode Response status code. supports 2xx, 4xx, 5xx, excluding 499, 514, 101, 301, 302, 303, 509, 520-599.
                     * 
                     */
                    void SetStatusCode(const int64_t& _statusCode);

                    /**
                     * 判断参数 StatusCode 是否已赋值
                     * @return StatusCode 是否已赋值
                     * 
                     */
                    bool StatusCodeHasBeenSet() const;

                    /**
                     * 获取Response page id.
                     * @return ResponsePage Response page id.
                     * 
                     */
                    std::string GetResponsePage() const;

                    /**
                     * 设置Response page id.
                     * @param _responsePage Response page id.
                     * 
                     */
                    void SetResponsePage(const std::string& _responsePage);

                    /**
                     * 判断参数 ResponsePage 是否已赋值
                     * @return ResponsePage 是否已赋值
                     * 
                     */
                    bool ResponsePageHasBeenSet() const;

                private:

                    /**
                     * Response status code. supports 2xx, 4xx, 5xx, excluding 499, 514, 101, 301, 302, 303, 509, 520-599.
                     */
                    int64_t m_statusCode;
                    bool m_statusCodeHasBeenSet;

                    /**
                     * Response page id.
                     */
                    std::string m_responsePage;
                    bool m_responsePageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_HTTPRESPONSEPARAMETERS_H_
