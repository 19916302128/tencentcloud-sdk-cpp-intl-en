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

#ifndef TENCENTCLOUD_APM_V20210622_MODEL_APMMETRICRECORD_H_
#define TENCENTCLOUD_APM_V20210622_MODEL_APMMETRICRECORD_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/apm/v20210622/model/ApmField.h>
#include <tencentcloud/apm/v20210622/model/ApmTag.h>


namespace TencentCloud
{
    namespace Apm
    {
        namespace V20210622
        {
            namespace Model
            {
                /**
                * Metric list cell.
                */
                class ApmMetricRecord : public AbstractModel
                {
                public:
                    ApmMetricRecord();
                    ~ApmMetricRecord() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Field array, used for the query result of indicators.
                     * @return Fields Field array, used for the query result of indicators.
                     * 
                     */
                    std::vector<ApmField> GetFields() const;

                    /**
                     * 设置Field array, used for the query result of indicators.
                     * @param _fields Field array, used for the query result of indicators.
                     * 
                     */
                    void SetFields(const std::vector<ApmField>& _fields);

                    /**
                     * 判断参数 Fields 是否已赋值
                     * @return Fields 是否已赋值
                     * 
                     */
                    bool FieldsHasBeenSet() const;

                    /**
                     * 获取Tag array, used to distinguish the objects of groupby.
                     * @return Tags Tag array, used to distinguish the objects of groupby.
                     * 
                     */
                    std::vector<ApmTag> GetTags() const;

                    /**
                     * 设置Tag array, used to distinguish the objects of groupby.
                     * @param _tags Tag array, used to distinguish the objects of groupby.
                     * 
                     */
                    void SetTags(const std::vector<ApmTag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                private:

                    /**
                     * Field array, used for the query result of indicators.
                     */
                    std::vector<ApmField> m_fields;
                    bool m_fieldsHasBeenSet;

                    /**
                     * Tag array, used to distinguish the objects of groupby.
                     */
                    std::vector<ApmTag> m_tags;
                    bool m_tagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APM_V20210622_MODEL_APMMETRICRECORD_H_
