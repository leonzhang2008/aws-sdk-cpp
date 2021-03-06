/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#pragma once
#include <aws/logs/CloudWatchLogs_EXPORTS.h>
#include <aws/logs/CloudWatchLogsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/logs/model/ExportTaskStatusCode.h>

namespace Aws
{
namespace CloudWatchLogs
{
namespace Model
{

  /**
   */
  class AWS_CLOUDWATCHLOGS_API DescribeExportTasksRequest : public CloudWatchLogsRequest
  {
  public:
    DescribeExportTasksRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>Export task that matches the specified task Id will be returned. This can
     * result in zero or one export task.</p>
     */
    inline const Aws::String& GetTaskId() const{ return m_taskId; }

    /**
     * <p>Export task that matches the specified task Id will be returned. This can
     * result in zero or one export task.</p>
     */
    inline void SetTaskId(const Aws::String& value) { m_taskIdHasBeenSet = true; m_taskId = value; }

    /**
     * <p>Export task that matches the specified task Id will be returned. This can
     * result in zero or one export task.</p>
     */
    inline void SetTaskId(Aws::String&& value) { m_taskIdHasBeenSet = true; m_taskId = value; }

    /**
     * <p>Export task that matches the specified task Id will be returned. This can
     * result in zero or one export task.</p>
     */
    inline void SetTaskId(const char* value) { m_taskIdHasBeenSet = true; m_taskId.assign(value); }

    /**
     * <p>Export task that matches the specified task Id will be returned. This can
     * result in zero or one export task.</p>
     */
    inline DescribeExportTasksRequest& WithTaskId(const Aws::String& value) { SetTaskId(value); return *this;}

    /**
     * <p>Export task that matches the specified task Id will be returned. This can
     * result in zero or one export task.</p>
     */
    inline DescribeExportTasksRequest& WithTaskId(Aws::String&& value) { SetTaskId(value); return *this;}

    /**
     * <p>Export task that matches the specified task Id will be returned. This can
     * result in zero or one export task.</p>
     */
    inline DescribeExportTasksRequest& WithTaskId(const char* value) { SetTaskId(value); return *this;}

    /**
     * <p>All export tasks that matches the specified status code will be returned.
     * This can return zero or more export tasks.</p>
     */
    inline const ExportTaskStatusCode& GetStatusCode() const{ return m_statusCode; }

    /**
     * <p>All export tasks that matches the specified status code will be returned.
     * This can return zero or more export tasks.</p>
     */
    inline void SetStatusCode(const ExportTaskStatusCode& value) { m_statusCodeHasBeenSet = true; m_statusCode = value; }

    /**
     * <p>All export tasks that matches the specified status code will be returned.
     * This can return zero or more export tasks.</p>
     */
    inline void SetStatusCode(ExportTaskStatusCode&& value) { m_statusCodeHasBeenSet = true; m_statusCode = value; }

    /**
     * <p>All export tasks that matches the specified status code will be returned.
     * This can return zero or more export tasks.</p>
     */
    inline DescribeExportTasksRequest& WithStatusCode(const ExportTaskStatusCode& value) { SetStatusCode(value); return *this;}

    /**
     * <p>All export tasks that matches the specified status code will be returned.
     * This can return zero or more export tasks.</p>
     */
    inline DescribeExportTasksRequest& WithStatusCode(ExportTaskStatusCode&& value) { SetStatusCode(value); return *this;}

    /**
     * <p> A string token used for pagination that points to the next page of results.
     * It must be a value obtained from the response of the previous <code
     * class="code">DescribeExportTasks</code> request. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p> A string token used for pagination that points to the next page of results.
     * It must be a value obtained from the response of the previous <code
     * class="code">DescribeExportTasks</code> request. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p> A string token used for pagination that points to the next page of results.
     * It must be a value obtained from the response of the previous <code
     * class="code">DescribeExportTasks</code> request. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p> A string token used for pagination that points to the next page of results.
     * It must be a value obtained from the response of the previous <code
     * class="code">DescribeExportTasks</code> request. </p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p> A string token used for pagination that points to the next page of results.
     * It must be a value obtained from the response of the previous <code
     * class="code">DescribeExportTasks</code> request. </p>
     */
    inline DescribeExportTasksRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p> A string token used for pagination that points to the next page of results.
     * It must be a value obtained from the response of the previous <code
     * class="code">DescribeExportTasks</code> request. </p>
     */
    inline DescribeExportTasksRequest& WithNextToken(Aws::String&& value) { SetNextToken(value); return *this;}

    /**
     * <p> A string token used for pagination that points to the next page of results.
     * It must be a value obtained from the response of the previous <code
     * class="code">DescribeExportTasks</code> request. </p>
     */
    inline DescribeExportTasksRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

    /**
     * <p> The maximum number of items returned in the response. If you don't specify a
     * value, the request would return up to 50 items. </p>
     */
    inline int GetLimit() const{ return m_limit; }

    /**
     * <p> The maximum number of items returned in the response. If you don't specify a
     * value, the request would return up to 50 items. </p>
     */
    inline void SetLimit(int value) { m_limitHasBeenSet = true; m_limit = value; }

    /**
     * <p> The maximum number of items returned in the response. If you don't specify a
     * value, the request would return up to 50 items. </p>
     */
    inline DescribeExportTasksRequest& WithLimit(int value) { SetLimit(value); return *this;}

  private:
    Aws::String m_taskId;
    bool m_taskIdHasBeenSet;
    ExportTaskStatusCode m_statusCode;
    bool m_statusCodeHasBeenSet;
    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;
    int m_limit;
    bool m_limitHasBeenSet;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
