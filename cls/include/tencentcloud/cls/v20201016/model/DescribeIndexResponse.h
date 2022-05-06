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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_DESCRIBEINDEXRESPONSE_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_DESCRIBEINDEXRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cls/v20201016/model/RuleInfo.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * DescribeIndex response structure.
                */
                class DescribeIndexResponse : public AbstractModel
                {
                public:
                    DescribeIndexResponse();
                    ~DescribeIndexResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Log topic ID
                     * @return TopicId Log topic ID
                     */
                    std::string GetTopicId() const;

                    /**
                     * 判断参数 TopicId 是否已赋值
                     * @return TopicId 是否已赋值
                     */
                    bool TopicIdHasBeenSet() const;

                    /**
                     * 获取Whether it takes effect
                     * @return Status Whether it takes effect
                     */
                    bool GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Index configuration information
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return Rule Index configuration information
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    RuleInfo GetRule() const;

                    /**
                     * 判断参数 Rule 是否已赋值
                     * @return Rule 是否已赋值
                     */
                    bool RuleHasBeenSet() const;

                    /**
                     * 获取Index modification time. The default value is the index creation time.
                     * @return ModifyTime Index modification time. The default value is the index creation time.
                     */
                    std::string GetModifyTime() const;

                    /**
                     * 判断参数 ModifyTime 是否已赋值
                     * @return ModifyTime 是否已赋值
                     */
                    bool ModifyTimeHasBeenSet() const;

                    /**
                     * 获取Internal field marker of full-text index. Default value: `false`. Valid value: `false`: excluding internal fields; `true`: including internal fields
Note: This field may return `null`, indicating that no valid value was found.
                     * @return IncludeInternalFields Internal field marker of full-text index. Default value: `false`. Valid value: `false`: excluding internal fields; `true`: including internal fields
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    bool GetIncludeInternalFields() const;

                    /**
                     * 判断参数 IncludeInternalFields 是否已赋值
                     * @return IncludeInternalFields 是否已赋值
                     */
                    bool IncludeInternalFieldsHasBeenSet() const;

                    /**
                     * 获取Metadata flag. Default value: `0`. Valid value: `0`: full-text index (including the metadata field with key-value index enabled); `1`: full-text index (including all metadata fields); `2`: full-text index (excluding metadata fields).
Note: This field may return `null`, indicating that no valid value was found.
                     * @return MetadataFlag Metadata flag. Default value: `0`. Valid value: `0`: full-text index (including the metadata field with key-value index enabled); `1`: full-text index (including all metadata fields); `2`: full-text index (excluding metadata fields).
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    uint64_t GetMetadataFlag() const;

                    /**
                     * 判断参数 MetadataFlag 是否已赋值
                     * @return MetadataFlag 是否已赋值
                     */
                    bool MetadataFlagHasBeenSet() const;

                private:

                    /**
                     * Log topic ID
                     */
                    std::string m_topicId;
                    bool m_topicIdHasBeenSet;

                    /**
                     * Whether it takes effect
                     */
                    bool m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Index configuration information
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    RuleInfo m_rule;
                    bool m_ruleHasBeenSet;

                    /**
                     * Index modification time. The default value is the index creation time.
                     */
                    std::string m_modifyTime;
                    bool m_modifyTimeHasBeenSet;

                    /**
                     * Internal field marker of full-text index. Default value: `false`. Valid value: `false`: excluding internal fields; `true`: including internal fields
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    bool m_includeInternalFields;
                    bool m_includeInternalFieldsHasBeenSet;

                    /**
                     * Metadata flag. Default value: `0`. Valid value: `0`: full-text index (including the metadata field with key-value index enabled); `1`: full-text index (including all metadata fields); `2`: full-text index (excluding metadata fields).
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    uint64_t m_metadataFlag;
                    bool m_metadataFlagHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_DESCRIBEINDEXRESPONSE_H_
