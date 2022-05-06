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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_CREATEINDEXREQUEST_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_CREATEINDEXREQUEST_H_

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
                * CreateIndex request structure.
                */
                class CreateIndexRequest : public AbstractModel
                {
                public:
                    CreateIndexRequest();
                    ~CreateIndexRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Log topic ID
                     * @return TopicId Log topic ID
                     */
                    std::string GetTopicId() const;

                    /**
                     * 设置Log topic ID
                     * @param TopicId Log topic ID
                     */
                    void SetTopicId(const std::string& _topicId);

                    /**
                     * 判断参数 TopicId 是否已赋值
                     * @return TopicId 是否已赋值
                     */
                    bool TopicIdHasBeenSet() const;

                    /**
                     * 获取Index rule
                     * @return Rule Index rule
                     */
                    RuleInfo GetRule() const;

                    /**
                     * 设置Index rule
                     * @param Rule Index rule
                     */
                    void SetRule(const RuleInfo& _rule);

                    /**
                     * 判断参数 Rule 是否已赋值
                     * @return Rule 是否已赋值
                     */
                    bool RuleHasBeenSet() const;

                    /**
                     * 获取Whether to take effect. Default value: true
                     * @return Status Whether to take effect. Default value: true
                     */
                    bool GetStatus() const;

                    /**
                     * 设置Whether to take effect. Default value: true
                     * @param Status Whether to take effect. Default value: true
                     */
                    void SetStatus(const bool& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Internal field marker of full-text index. Default value: `false`. Valid value: `false`: excluding internal fields; `true`: including internal fields
                     * @return IncludeInternalFields Internal field marker of full-text index. Default value: `false`. Valid value: `false`: excluding internal fields; `true`: including internal fields
                     */
                    bool GetIncludeInternalFields() const;

                    /**
                     * 设置Internal field marker of full-text index. Default value: `false`. Valid value: `false`: excluding internal fields; `true`: including internal fields
                     * @param IncludeInternalFields Internal field marker of full-text index. Default value: `false`. Valid value: `false`: excluding internal fields; `true`: including internal fields
                     */
                    void SetIncludeInternalFields(const bool& _includeInternalFields);

                    /**
                     * 判断参数 IncludeInternalFields 是否已赋值
                     * @return IncludeInternalFields 是否已赋值
                     */
                    bool IncludeInternalFieldsHasBeenSet() const;

                    /**
                     * 获取Metadata flag. Default value: `0`. Valid value: `0`: full-text index (including the metadata field with key-value index enabled); `1`: full-text index (including all metadata fields); `2`: full-text index (excluding metadata fields).
                     * @return MetadataFlag Metadata flag. Default value: `0`. Valid value: `0`: full-text index (including the metadata field with key-value index enabled); `1`: full-text index (including all metadata fields); `2`: full-text index (excluding metadata fields).
                     */
                    uint64_t GetMetadataFlag() const;

                    /**
                     * 设置Metadata flag. Default value: `0`. Valid value: `0`: full-text index (including the metadata field with key-value index enabled); `1`: full-text index (including all metadata fields); `2`: full-text index (excluding metadata fields).
                     * @param MetadataFlag Metadata flag. Default value: `0`. Valid value: `0`: full-text index (including the metadata field with key-value index enabled); `1`: full-text index (including all metadata fields); `2`: full-text index (excluding metadata fields).
                     */
                    void SetMetadataFlag(const uint64_t& _metadataFlag);

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
                     * Index rule
                     */
                    RuleInfo m_rule;
                    bool m_ruleHasBeenSet;

                    /**
                     * Whether to take effect. Default value: true
                     */
                    bool m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Internal field marker of full-text index. Default value: `false`. Valid value: `false`: excluding internal fields; `true`: including internal fields
                     */
                    bool m_includeInternalFields;
                    bool m_includeInternalFieldsHasBeenSet;

                    /**
                     * Metadata flag. Default value: `0`. Valid value: `0`: full-text index (including the metadata field with key-value index enabled); `1`: full-text index (including all metadata fields); `2`: full-text index (excluding metadata fields).
                     */
                    uint64_t m_metadataFlag;
                    bool m_metadataFlagHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_CREATEINDEXREQUEST_H_
