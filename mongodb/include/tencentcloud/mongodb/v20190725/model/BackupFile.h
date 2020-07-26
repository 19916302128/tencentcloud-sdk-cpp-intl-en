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

#ifndef TENCENTCLOUD_MONGODB_V20190725_MODEL_BACKUPFILE_H_
#define TENCENTCLOUD_MONGODB_V20190725_MODEL_BACKUPFILE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mongodb
    {
        namespace V20190725
        {
            namespace Model
            {
                /**
                * Storage information of a backup file
                */
                class BackupFile : public AbstractModel
                {
                public:
                    BackupFile();
                    ~BackupFile() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取ID of the replica set/shard to which a backup file belongs
                     * @return ReplicateSetId ID of the replica set/shard to which a backup file belongs
                     */
                    std::string GetReplicateSetId() const;

                    /**
                     * 设置ID of the replica set/shard to which a backup file belongs
                     * @param ReplicateSetId ID of the replica set/shard to which a backup file belongs
                     */
                    void SetReplicateSetId(const std::string& _replicateSetId);

                    /**
                     * 判断参数 ReplicateSetId 是否已赋值
                     * @return ReplicateSetId 是否已赋值
                     */
                    bool ReplicateSetIdHasBeenSet() const;

                    /**
                     * 获取Path to a backup file
                     * @return File Path to a backup file
                     */
                    std::string GetFile() const;

                    /**
                     * 设置Path to a backup file
                     * @param File Path to a backup file
                     */
                    void SetFile(const std::string& _file);

                    /**
                     * 判断参数 File 是否已赋值
                     * @return File 是否已赋值
                     */
                    bool FileHasBeenSet() const;

                private:

                    /**
                     * ID of the replica set/shard to which a backup file belongs
                     */
                    std::string m_replicateSetId;
                    bool m_replicateSetIdHasBeenSet;

                    /**
                     * Path to a backup file
                     */
                    std::string m_file;
                    bool m_fileHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONGODB_V20190725_MODEL_BACKUPFILE_H_
