//
// This file is a part of UERANSIM open source project.
// Copyright (c) 2021 ALİ GÜNGÖR.
//
// The software and all associated files are licensed under GPL-3.0
// and subject to the terms and conditions defined in LICENSE file.
//

#include <string>

namespace io
{

void CreateDirectory(const std::string &path);

std::string ReadAllText(const std::string &file);

bool Exists(const std::string &path);

} // namespace io
