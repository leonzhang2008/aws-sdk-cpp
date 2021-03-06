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
#include <aws/route53/model/GetHealthCheckCountResult.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>

#include <utility>

using namespace Aws::Route53::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;
using namespace Aws;

GetHealthCheckCountResult::GetHealthCheckCountResult() : 
    m_healthCheckCount(0)
{
}

GetHealthCheckCountResult::GetHealthCheckCountResult(const AmazonWebServiceResult<XmlDocument>& result) : 
    m_healthCheckCount(0)
{
  *this = result;
}

GetHealthCheckCountResult& GetHealthCheckCountResult::operator =(const AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode resultNode = xmlDocument.GetRootElement();

  if(!resultNode.IsNull())
  {
    XmlNode healthCheckCountNode = resultNode.FirstChild("HealthCheckCount");
    if(!healthCheckCountNode.IsNull())
    {
      m_healthCheckCount = StringUtils::ConvertToInt64(StringUtils::Trim(healthCheckCountNode.GetText().c_str()).c_str());
    }
  }

  return *this;
}
