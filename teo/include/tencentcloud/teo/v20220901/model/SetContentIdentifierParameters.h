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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_SETCONTENTIDENTIFIERPARAMETERS_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_SETCONTENTIDENTIFIERPARAMETERS_H_

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
                * Content identifier configuration parameters
                */
                class SetContentIdentifierParameters : public AbstractModel
                {
                public:
                    SetContentIdentifierParameters();
                    ~SetContentIdentifierParameters() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Content identifier id.
                     * @return ContentIdentifier Content identifier id.
                     * 
                     */
                    std::string GetContentIdentifier() const;

                    /**
                     * 设置Content identifier id.
                     * @param _contentIdentifier Content identifier id.
                     * 
                     */
                    void SetContentIdentifier(const std::string& _contentIdentifier);

                    /**
                     * 判断参数 ContentIdentifier 是否已赋值
                     * @return ContentIdentifier 是否已赋值
                     * 
                     */
                    bool ContentIdentifierHasBeenSet() const;

                private:

                    /**
                     * Content identifier id.
                     */
                    std::string m_contentIdentifier;
                    bool m_contentIdentifierHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_SETCONTENTIDENTIFIERPARAMETERS_H_
