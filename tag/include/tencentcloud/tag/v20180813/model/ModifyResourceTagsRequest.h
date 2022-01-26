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

#ifndef TENCENTCLOUD_TAG_V20180813_MODEL_MODIFYRESOURCETAGSREQUEST_H_
#define TENCENTCLOUD_TAG_V20180813_MODEL_MODIFYRESOURCETAGSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tag/v20180813/model/Tag.h>
#include <tencentcloud/tag/v20180813/model/TagKeyObject.h>


namespace TencentCloud
{
    namespace Tag
    {
        namespace V20180813
        {
            namespace Model
            {
                /**
                * ModifyResourceTags request structure.
                */
                class ModifyResourceTagsRequest : public AbstractModel
                {
                public:
                    ModifyResourceTagsRequest();
                    ~ModifyResourceTagsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取[Six-segment resource description](https://cloud.tencent.com/document/product/598/10606)
                     * @return Resource [Six-segment resource description](https://cloud.tencent.com/document/product/598/10606)
                     */
                    std::string GetResource() const;

                    /**
                     * 设置[Six-segment resource description](https://cloud.tencent.com/document/product/598/10606)
                     * @param Resource [Six-segment resource description](https://cloud.tencent.com/document/product/598/10606)
                     */
                    void SetResource(const std::string& _resource);

                    /**
                     * 判断参数 Resource 是否已赋值
                     * @return Resource 是否已赋值
                     */
                    bool ResourceHasBeenSet() const;

                    /**
                     * 获取The tags to be added or modified. If the resource described by `Resource` is not associated with the input tag keys, an association will be added. If the tag keys are already associated, the values corresponding to the associated tag keys will be modified to the input values. This API must contain either `ReplaceTags` or `DeleteTag`. And these two parameters cannot include the same tag keys.
                     * @return ReplaceTags The tags to be added or modified. If the resource described by `Resource` is not associated with the input tag keys, an association will be added. If the tag keys are already associated, the values corresponding to the associated tag keys will be modified to the input values. This API must contain either `ReplaceTags` or `DeleteTag`. And these two parameters cannot include the same tag keys.
                     */
                    std::vector<Tag> GetReplaceTags() const;

                    /**
                     * 设置The tags to be added or modified. If the resource described by `Resource` is not associated with the input tag keys, an association will be added. If the tag keys are already associated, the values corresponding to the associated tag keys will be modified to the input values. This API must contain either `ReplaceTags` or `DeleteTag`. And these two parameters cannot include the same tag keys.
                     * @param ReplaceTags The tags to be added or modified. If the resource described by `Resource` is not associated with the input tag keys, an association will be added. If the tag keys are already associated, the values corresponding to the associated tag keys will be modified to the input values. This API must contain either `ReplaceTags` or `DeleteTag`. And these two parameters cannot include the same tag keys.
                     */
                    void SetReplaceTags(const std::vector<Tag>& _replaceTags);

                    /**
                     * 判断参数 ReplaceTags 是否已赋值
                     * @return ReplaceTags 是否已赋值
                     */
                    bool ReplaceTagsHasBeenSet() const;

                    /**
                     * 获取The tags to be unassociated. This API must contain either `ReplaceTags` or `DeleteTag`. And these two parameters cannot include the same tag keys.
                     * @return DeleteTags The tags to be unassociated. This API must contain either `ReplaceTags` or `DeleteTag`. And these two parameters cannot include the same tag keys.
                     */
                    std::vector<TagKeyObject> GetDeleteTags() const;

                    /**
                     * 设置The tags to be unassociated. This API must contain either `ReplaceTags` or `DeleteTag`. And these two parameters cannot include the same tag keys.
                     * @param DeleteTags The tags to be unassociated. This API must contain either `ReplaceTags` or `DeleteTag`. And these two parameters cannot include the same tag keys.
                     */
                    void SetDeleteTags(const std::vector<TagKeyObject>& _deleteTags);

                    /**
                     * 判断参数 DeleteTags 是否已赋值
                     * @return DeleteTags 是否已赋值
                     */
                    bool DeleteTagsHasBeenSet() const;

                private:

                    /**
                     * [Six-segment resource description](https://cloud.tencent.com/document/product/598/10606)
                     */
                    std::string m_resource;
                    bool m_resourceHasBeenSet;

                    /**
                     * The tags to be added or modified. If the resource described by `Resource` is not associated with the input tag keys, an association will be added. If the tag keys are already associated, the values corresponding to the associated tag keys will be modified to the input values. This API must contain either `ReplaceTags` or `DeleteTag`. And these two parameters cannot include the same tag keys.
                     */
                    std::vector<Tag> m_replaceTags;
                    bool m_replaceTagsHasBeenSet;

                    /**
                     * The tags to be unassociated. This API must contain either `ReplaceTags` or `DeleteTag`. And these two parameters cannot include the same tag keys.
                     */
                    std::vector<TagKeyObject> m_deleteTags;
                    bool m_deleteTagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TAG_V20180813_MODEL_MODIFYRESOURCETAGSREQUEST_H_
