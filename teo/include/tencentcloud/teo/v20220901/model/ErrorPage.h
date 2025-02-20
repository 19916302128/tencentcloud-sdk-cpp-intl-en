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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_ERRORPAGE_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_ERRORPAGE_H_

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
                * Custom error page.
                */
                class ErrorPage : public AbstractModel
                {
                public:
                    ErrorPage();
                    ~ErrorPage() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Status code. supported values are 400, 403, 404, 405, 414, 416, 451, 500, 501, 502, 503, 504.
                     * @return StatusCode Status code. supported values are 400, 403, 404, 405, 414, 416, 451, 500, 501, 502, 503, 504.
                     * 
                     */
                    int64_t GetStatusCode() const;

                    /**
                     * 设置Status code. supported values are 400, 403, 404, 405, 414, 416, 451, 500, 501, 502, 503, 504.
                     * @param _statusCode Status code. supported values are 400, 403, 404, 405, 414, 416, 451, 500, 501, 502, 503, 504.
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
                     * 获取Redirect url. requires a full redirect path, such as https://www.test.com/error.html.
                     * @return RedirectURL Redirect url. requires a full redirect path, such as https://www.test.com/error.html.
                     * 
                     */
                    std::string GetRedirectURL() const;

                    /**
                     * 设置Redirect url. requires a full redirect path, such as https://www.test.com/error.html.
                     * @param _redirectURL Redirect url. requires a full redirect path, such as https://www.test.com/error.html.
                     * 
                     */
                    void SetRedirectURL(const std::string& _redirectURL);

                    /**
                     * 判断参数 RedirectURL 是否已赋值
                     * @return RedirectURL 是否已赋值
                     * 
                     */
                    bool RedirectURLHasBeenSet() const;

                private:

                    /**
                     * Status code. supported values are 400, 403, 404, 405, 414, 416, 451, 500, 501, 502, 503, 504.
                     */
                    int64_t m_statusCode;
                    bool m_statusCodeHasBeenSet;

                    /**
                     * Redirect url. requires a full redirect path, such as https://www.test.com/error.html.
                     */
                    std::string m_redirectURL;
                    bool m_redirectURLHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_ERRORPAGE_H_
