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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_EDITMEDIATASK_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_EDITMEDIATASK_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/EditMediaTaskInput.h>
#include <tencentcloud/mps/v20190612/model/EditMediaTaskOutput.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * 
                */
                class EditMediaTask : public AbstractModel
                {
                public:
                    EditMediaTask();
                    ~EditMediaTask() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取
                     * @return TaskId 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置
                     * @param TaskId 
                     */
                    void SetTaskId(const std::string& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取
                     * @return Status 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置
                     * @param Status 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取
                     * @return ErrCode 
                     */
                    int64_t GetErrCode() const;

                    /**
                     * 设置
                     * @param ErrCode 
                     */
                    void SetErrCode(const int64_t& _errCode);

                    /**
                     * 判断参数 ErrCode 是否已赋值
                     * @return ErrCode 是否已赋值
                     */
                    bool ErrCodeHasBeenSet() const;

                    /**
                     * 获取
                     * @return Message 
                     */
                    std::string GetMessage() const;

                    /**
                     * 设置
                     * @param Message 
                     */
                    void SetMessage(const std::string& _message);

                    /**
                     * 判断参数 Message 是否已赋值
                     * @return Message 是否已赋值
                     */
                    bool MessageHasBeenSet() const;

                    /**
                     * 获取
                     * @return Input 
                     */
                    EditMediaTaskInput GetInput() const;

                    /**
                     * 设置
                     * @param Input 
                     */
                    void SetInput(const EditMediaTaskInput& _input);

                    /**
                     * 判断参数 Input 是否已赋值
                     * @return Input 是否已赋值
                     */
                    bool InputHasBeenSet() const;

                    /**
                     * 获取
                     * @return Output 
                     */
                    EditMediaTaskOutput GetOutput() const;

                    /**
                     * 设置
                     * @param Output 
                     */
                    void SetOutput(const EditMediaTaskOutput& _output);

                    /**
                     * 判断参数 Output 是否已赋值
                     * @return Output 是否已赋值
                     */
                    bool OutputHasBeenSet() const;

                private:

                    /**
                     * 
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 
                     */
                    int64_t m_errCode;
                    bool m_errCodeHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                    /**
                     * 
                     */
                    EditMediaTaskInput m_input;
                    bool m_inputHasBeenSet;

                    /**
                     * 
                     */
                    EditMediaTaskOutput m_output;
                    bool m_outputHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_EDITMEDIATASK_H_
