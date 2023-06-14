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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_SINGLEDATARECORD_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_SINGLEDATARECORD_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/SingleTypeValue.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * The dimensional data record
                */
                class SingleDataRecord : public AbstractModel
                {
                public:
                    SingleDataRecord();
                    ~SingleDataRecord() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The query dimension value.
                     * @return TypeKey The query dimension value.
                     * 
                     */
                    std::string GetTypeKey() const;

                    /**
                     * 设置The query dimension value.
                     * @param _typeKey The query dimension value.
                     * 
                     */
                    void SetTypeKey(const std::string& _typeKey);

                    /**
                     * 判断参数 TypeKey 是否已赋值
                     * @return TypeKey 是否已赋值
                     * 
                     */
                    bool TypeKeyHasBeenSet() const;

                    /**
                     * 获取Value of the metric under the query dimension.
                     * @return TypeValue Value of the metric under the query dimension.
                     * 
                     */
                    std::vector<SingleTypeValue> GetTypeValue() const;

                    /**
                     * 设置Value of the metric under the query dimension.
                     * @param _typeValue Value of the metric under the query dimension.
                     * 
                     */
                    void SetTypeValue(const std::vector<SingleTypeValue>& _typeValue);

                    /**
                     * 判断参数 TypeValue 是否已赋值
                     * @return TypeValue 是否已赋值
                     * 
                     */
                    bool TypeValueHasBeenSet() const;

                private:

                    /**
                     * The query dimension value.
                     */
                    std::string m_typeKey;
                    bool m_typeKeyHasBeenSet;

                    /**
                     * Value of the metric under the query dimension.
                     */
                    std::vector<SingleTypeValue> m_typeValue;
                    bool m_typeValueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_SINGLEDATARECORD_H_
