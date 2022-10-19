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

#ifndef TENCENTCLOUD_CFS_V20190719_MODEL_DELETECFSSNAPSHOTREQUEST_H_
#define TENCENTCLOUD_CFS_V20190719_MODEL_DELETECFSSNAPSHOTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cfs
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * DeleteCfsSnapshot request structure.
                */
                class DeleteCfsSnapshotRequest : public AbstractModel
                {
                public:
                    DeleteCfsSnapshotRequest();
                    ~DeleteCfsSnapshotRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取File system snapshot ID
                     * @return SnapshotId File system snapshot ID
                     */
                    std::string GetSnapshotId() const;

                    /**
                     * 设置File system snapshot ID
                     * @param SnapshotId File system snapshot ID
                     */
                    void SetSnapshotId(const std::string& _snapshotId);

                    /**
                     * 判断参数 SnapshotId 是否已赋值
                     * @return SnapshotId 是否已赋值
                     */
                    bool SnapshotIdHasBeenSet() const;

                private:

                    /**
                     * File system snapshot ID
                     */
                    std::string m_snapshotId;
                    bool m_snapshotIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFS_V20190719_MODEL_DELETECFSSNAPSHOTREQUEST_H_
