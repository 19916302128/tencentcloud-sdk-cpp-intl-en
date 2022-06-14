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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_AUTHENTICATIONTYPEA_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_AUTHENTICATIONTYPEA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdn
    {
        namespace V20180606
        {
            namespace Model
            {
                /**
                * Timestamp hotlink protection mode A configuration
The access URL format of timestamp hotlink protection mode A is as follows: http://DomainName/Filename?sign=timestamp-rand-uid-md5hash
Here, timestamp is a decimal timestamp in Unix format;
rand is a random string composed of 0-100 characters, including digits, upper and lower-case letters.
uid is 0;
md5hash: MD5 (file path-timestamp-rand-uid-custom key)

                */
                class AuthenticationTypeA : public AbstractModel
                {
                public:
                    AuthenticationTypeA();
                    ~AuthenticationTypeA() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The key for signature calculation
Only digits, upper and lower-case letters are allowed. Length limit: 6-32 characters.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return SecretKey The key for signature calculation
Only digits, upper and lower-case letters are allowed. Length limit: 6-32 characters.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetSecretKey() const;

                    /**
                     * 设置The key for signature calculation
Only digits, upper and lower-case letters are allowed. Length limit: 6-32 characters.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param SecretKey The key for signature calculation
Only digits, upper and lower-case letters are allowed. Length limit: 6-32 characters.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetSecretKey(const std::string& _secretKey);

                    /**
                     * 判断参数 SecretKey 是否已赋值
                     * @return SecretKey 是否已赋值
                     */
                    bool SecretKeyHasBeenSet() const;

                    /**
                     * 获取Signature parameter name
Only upper and lower-case letters, digits, and underscores (_) are allowed. It cannot start with a digit. Length limit: 1-100 characters.
                     * @return SignParam Signature parameter name
Only upper and lower-case letters, digits, and underscores (_) are allowed. It cannot start with a digit. Length limit: 1-100 characters.
                     */
                    std::string GetSignParam() const;

                    /**
                     * 设置Signature parameter name
Only upper and lower-case letters, digits, and underscores (_) are allowed. It cannot start with a digit. Length limit: 1-100 characters.
                     * @param SignParam Signature parameter name
Only upper and lower-case letters, digits, and underscores (_) are allowed. It cannot start with a digit. Length limit: 1-100 characters.
                     */
                    void SetSignParam(const std::string& _signParam);

                    /**
                     * 判断参数 SignParam 是否已赋值
                     * @return SignParam 是否已赋值
                     */
                    bool SignParamHasBeenSet() const;

                    /**
                     * 获取Signature expiration time
Unit: second. The maximum value is 630720000.
                     * @return ExpireTime Signature expiration time
Unit: second. The maximum value is 630720000.
                     */
                    int64_t GetExpireTime() const;

                    /**
                     * 设置Signature expiration time
Unit: second. The maximum value is 630720000.
                     * @param ExpireTime Signature expiration time
Unit: second. The maximum value is 630720000.
                     */
                    void SetExpireTime(const int64_t& _expireTime);

                    /**
                     * 判断参数 ExpireTime 是否已赋值
                     * @return ExpireTime 是否已赋值
                     */
                    bool ExpireTimeHasBeenSet() const;

                    /**
                     * 获取File extension list settings determining if authentication should be performed
If it contains an asterisk (*), this indicates all files.
                     * @return FileExtensions File extension list settings determining if authentication should be performed
If it contains an asterisk (*), this indicates all files.
                     */
                    std::vector<std::string> GetFileExtensions() const;

                    /**
                     * 设置File extension list settings determining if authentication should be performed
If it contains an asterisk (*), this indicates all files.
                     * @param FileExtensions File extension list settings determining if authentication should be performed
If it contains an asterisk (*), this indicates all files.
                     */
                    void SetFileExtensions(const std::vector<std::string>& _fileExtensions);

                    /**
                     * 判断参数 FileExtensions 是否已赋值
                     * @return FileExtensions 是否已赋值
                     */
                    bool FileExtensionsHasBeenSet() const;

                    /**
                     * 获取allowlist: indicates that all file types apart from the FileExtensions list are authenticated
blacklist: indicates that only the file types in the FileExtensions list are authenticated
                     * @return FilterType allowlist: indicates that all file types apart from the FileExtensions list are authenticated
blacklist: indicates that only the file types in the FileExtensions list are authenticated
                     */
                    std::string GetFilterType() const;

                    /**
                     * 设置allowlist: indicates that all file types apart from the FileExtensions list are authenticated
blacklist: indicates that only the file types in the FileExtensions list are authenticated
                     * @param FilterType allowlist: indicates that all file types apart from the FileExtensions list are authenticated
blacklist: indicates that only the file types in the FileExtensions list are authenticated
                     */
                    void SetFilterType(const std::string& _filterType);

                    /**
                     * 判断参数 FilterType 是否已赋值
                     * @return FilterType 是否已赋值
                     */
                    bool FilterTypeHasBeenSet() const;

                    /**
                     * 获取Backup key, which is used to calculate a signature.
6-32 characters. Only digits and letters are allowed. 
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return BackupSecretKey Backup key, which is used to calculate a signature.
6-32 characters. Only digits and letters are allowed. 
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string GetBackupSecretKey() const;

                    /**
                     * 设置Backup key, which is used to calculate a signature.
6-32 characters. Only digits and letters are allowed. 
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param BackupSecretKey Backup key, which is used to calculate a signature.
6-32 characters. Only digits and letters are allowed. 
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetBackupSecretKey(const std::string& _backupSecretKey);

                    /**
                     * 判断参数 BackupSecretKey 是否已赋值
                     * @return BackupSecretKey 是否已赋值
                     */
                    bool BackupSecretKeyHasBeenSet() const;

                private:

                    /**
                     * The key for signature calculation
Only digits, upper and lower-case letters are allowed. Length limit: 6-32 characters.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_secretKey;
                    bool m_secretKeyHasBeenSet;

                    /**
                     * Signature parameter name
Only upper and lower-case letters, digits, and underscores (_) are allowed. It cannot start with a digit. Length limit: 1-100 characters.
                     */
                    std::string m_signParam;
                    bool m_signParamHasBeenSet;

                    /**
                     * Signature expiration time
Unit: second. The maximum value is 630720000.
                     */
                    int64_t m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * File extension list settings determining if authentication should be performed
If it contains an asterisk (*), this indicates all files.
                     */
                    std::vector<std::string> m_fileExtensions;
                    bool m_fileExtensionsHasBeenSet;

                    /**
                     * allowlist: indicates that all file types apart from the FileExtensions list are authenticated
blacklist: indicates that only the file types in the FileExtensions list are authenticated
                     */
                    std::string m_filterType;
                    bool m_filterTypeHasBeenSet;

                    /**
                     * Backup key, which is used to calculate a signature.
6-32 characters. Only digits and letters are allowed. 
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_backupSecretKey;
                    bool m_backupSecretKeyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_AUTHENTICATIONTYPEA_H_
