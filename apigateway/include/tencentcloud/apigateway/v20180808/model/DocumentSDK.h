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

#ifndef TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_DOCUMENTSDK_H_
#define TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_DOCUMENTSDK_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Apigateway
    {
        namespace V20180808
        {
            namespace Model
            {
                /**
                * API document download
                */
                class DocumentSDK : public AbstractModel
                {
                public:
                    DocumentSDK();
                    ~DocumentSDK() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Download link of generated file. Generated documents will be stored in COS.
                     * @return DocumentURL Download link of generated file. Generated documents will be stored in COS.
                     * 
                     */
                    std::string GetDocumentURL() const;

                    /**
                     * 设置Download link of generated file. Generated documents will be stored in COS.
                     * @param _documentURL Download link of generated file. Generated documents will be stored in COS.
                     * 
                     */
                    void SetDocumentURL(const std::string& _documentURL);

                    /**
                     * 判断参数 DocumentURL 是否已赋值
                     * @return DocumentURL 是否已赋值
                     * 
                     */
                    bool DocumentURLHasBeenSet() const;

                    /**
                     * 获取Download link of generated SDK file. Generated SDK files will be stored in COS.
                     * @return SdkURL Download link of generated SDK file. Generated SDK files will be stored in COS.
                     * 
                     */
                    std::string GetSdkURL() const;

                    /**
                     * 设置Download link of generated SDK file. Generated SDK files will be stored in COS.
                     * @param _sdkURL Download link of generated SDK file. Generated SDK files will be stored in COS.
                     * 
                     */
                    void SetSdkURL(const std::string& _sdkURL);

                    /**
                     * 判断参数 SdkURL 是否已赋值
                     * @return SdkURL 是否已赋值
                     * 
                     */
                    bool SdkURLHasBeenSet() const;

                private:

                    /**
                     * Download link of generated file. Generated documents will be stored in COS.
                     */
                    std::string m_documentURL;
                    bool m_documentURLHasBeenSet;

                    /**
                     * Download link of generated SDK file. Generated SDK files will be stored in COS.
                     */
                    std::string m_sdkURL;
                    bool m_sdkURLHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_DOCUMENTSDK_H_
